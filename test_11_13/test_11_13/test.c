#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//int main()
//{
//	if (strlen("abc") - strlen("abcde") > 0)
//		printf(">\n");
//	else
//		printf("<=\n");
//	return 0;
//}

//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "abcd";
//	char ch = '\0';
//	char* p = &arr2 + 1;
//	*p = ch;
//	strcpy(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while(*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

//int my_strcpy(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "ab";
//	char arr2[] = "abc";
//	
//	printf("%d", my_strcpy(arr1, arr2));
//	return 0;
//}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* s1 = str1;
	const char* s2 = str2;
	const char* cur = s1;

	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abcebcd";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1, arr2);
	if (NULL == ret)
	{
		printf("ÕÒ²»µ½×Ó´®\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}