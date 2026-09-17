#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	del(void *c) { free(c); }
void	f_iteri(unsigned int i, char *c) { (void)i; *c = *c + 1; }
char	f_mapi(unsigned int i, char c) { (void)i; return (c - 1); }
void	*f_lstmap(void *c) { return ft_strdup((char *)c); }
void	f_lstiter(void *c) { char *str = (char *)c; if (str && *str) *str = 'X'; }

int main(void)
{
	printf("========== PART 1 (Libc) ==========\n");
	printf("isalpha('a') = %d\n", ft_isalpha('a'));
	printf("isdigit('0') = %d\n", ft_isdigit('0'));
	printf("isalnum('_') = %d\n", ft_isalnum('_'));
	printf("isascii(128) = %d\n", ft_isascii(128));
	printf("isprint(' ') = %d\n", ft_isprint(' '));
	printf("strlen(\"42\") = %zu\n", ft_strlen("42"));
	printf("toupper('a') = %c\n", ft_toupper('a'));
	printf("tolower('Z') = %c\n", ft_tolower('Z'));
	printf("strchr(\"42 Irbid\", 'I') = %s\n", ft_strchr("42 Irbid", 'I'));
	printf("strrchr(\"42 Irbid Irbid\", 'I') = %s\n", ft_strrchr("42 Irbid Irbid", 'I'));
	printf("strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));
	printf("strnstr(\"hello world\", \"world\", 11) = %s\n", ft_strnstr("hello world", "world", 11));
	printf("atoi(\" \\t-42\") = %d\n", ft_atoi(" \t-42"));

	char dest[20];
	ft_memset(dest, 'A', 5); dest[5] = '\0';
	printf("memset = %s\n", dest);
	ft_bzero(dest, 2);
	printf("bzero (first 2 bytes 0) = %d %d %c\n", dest[0], dest[1], dest[2]);

	char src[] = "CopyThis";
	ft_memcpy(dest, src, 5); dest[5] = '\0';
	printf("memcpy = %s\n", dest);

	char overlap[] = "123456789";
	ft_memmove(overlap + 2, overlap, 5);
	printf("memmove = %s\n", overlap);

	printf("memchr(\"hello\", 'l', 5) = %s\n", (char *)ft_memchr("hello", 'l', 5));
	printf("memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp("abc", "abd", 3));

	char lcpy[20] = "Start";
	ft_strlcpy(lcpy, "Done", sizeof(lcpy));
	printf("strlcpy = %s\n", lcpy);

	char lcat[20] = "Hi ";
	ft_strlcat(lcat, "42", sizeof(lcat));
	printf("strlcat = %s\n", lcat);

	char *dup = ft_strdup("Duplicate");
	printf("strdup = %s\n", dup);
	free(dup);

	int *call = ft_calloc(2, sizeof(int));
	printf("calloc = %d %d\n", call[0], call[1]);
	free(call);

	printf("\n========== PART 2 (Additional) ==========\n");
	char *sub = ft_substr("Hello 42", 6, 2);
	printf("substr = %s\n", sub);
	free(sub);

	char *join = ft_strjoin("42", " Irbid");
	printf("strjoin = %s\n", join);
	free(join);

	char *trim = ft_strtrim("xxHello 42xx", "x");
	printf("strtrim = %s\n", trim);
	free(trim);

	char **split = ft_split("a b c", ' ');
	printf("split = %s, %s, %s\n", split[0], split[1], split[2]);
	free(split[0]); free(split[1]); free(split[2]); free(split);

	char *itoa = ft_itoa(-1234);
	printf("itoa = %s\n", itoa);
	free(itoa);

	char *mapi = ft_strmapi("bcd", f_mapi);
	printf("strmapi = %s\n", mapi);
	free(mapi);

	char iteri_str[] = "abc";
	ft_striteri(iteri_str, f_iteri);
	printf("striteri = %s\n", iteri_str);

	printf("putchar_fd: "); ft_putchar_fd('A', 1); printf("\n");
	printf("putstr_fd: "); ft_putstr_fd("Works!", 1); printf("\n");
	printf("putendl_fd: "); ft_putendl_fd("Endl works", 1);
	printf("putnbr_fd: "); ft_putnbr_fd(-42, 1); printf("\n");

	printf("\n========== PART 3 (Bonus/Lists) ==========\n");
	t_list *l = ft_lstnew(ft_strdup("Node1"));
	ft_lstadd_front(&l, ft_lstnew(ft_strdup("Node0")));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("Node2")));

	printf("List size = %u\n", ft_lstsize(l));
	printf("Last node = %s\n", (char *)ft_lstlast(l)->content);

	ft_lstiter(l, f_lstiter);
	printf("lstiter mod (Node0 -> Xode0): %s\n", (char *)l->content);

	t_list *map_list = ft_lstmap(l, f_lstmap, del);
	printf("Map list size = %u\n", ft_lstsize(map_list));

	t_list *single = ft_lstnew(ft_strdup("DelMe"));
	ft_lstdelone(single, del);
	printf("lstdelone executed safely.\n");

	ft_lstclear(&l, del);
	ft_lstclear(&map_list, del);
	printf("All lists cleared perfectly!\n");

	return (0);
}
