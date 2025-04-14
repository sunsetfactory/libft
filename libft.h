#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

/* 메모리 조작 함수 */

/**
 * @brief 메모리 영역을 특정 값으로 설정합니다.
 *
 * @param s 설정할 메모리의 시작 주소.
 * @param c 설정할 값 (정수이나 내부적으로 unsigned char로 변환됨).
 * @param n 설정할 바이트의 수.
 * @return void* 초기화된 메모리 영역 포인터.
 */
void    *ft_memset(void *s, int c, size_t n);

/**
 * @brief 메모리 영역을 0으로 초기화합니다.
 *
 * @param s 초기화할 메모리의 시작 주소.
 * @param n 초기화할 바이트 수.
 */
void    ft_bzero(void *s, size_t n);

/**
 * @brief 메모리 영역을 복사합니다.
 *
 * @param dest 복사 대상 메모리.
 * @param src 복사할 소스 메모리.
 * @param n 복사할 바이트 수.
 * @return void* 복사된 메모리 영역의 시작 주소.
 */
void    *ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief 메모리 영역을 오버랩을 고려하여 안전하게 복사합니다.
 *
 * @param dest 복사 대상 메모리.
 * @param src 복사할 소스 메모리.
 * @param n 복사할 바이트 수.
 * @return void* 복사된 메모리 영역의 시작 주소.
 */
void    *ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief 메모리 영역 내에서 특정 문자를 검색합니다.
 *
 * @param s 검색할 메모리 영역.
 * @param c 찾을 문자.
 * @param n 검색할 바이트 수.
 * @return void* 찾은 문자의 포인터, 없으면 NULL.
 */
void    *ft_memchr(const void *s, int c, size_t n);

/**
 * @brief 두 메모리 영역을 비교합니다.
 *
 * @param s1 첫 번째 메모리 영역.
 * @param s2 두 번째 메모리 영역.
 * @param n 비교할 바이트 수.
 * @return int 두 영역 간의 차이 값.
 */
int     ft_memcmp(const void *s1, const void *s2, size_t n);


/* 문자열 처리 함수 */

/**
 * @brief 문자열의 길이를 반환합니다.
 *
 * @param s 문자열.
 * @return size_t 문자열의 길이.
 */
size_t  ft_strlen(const char *s);

/**
 * @brief 문자열을 안전하게 복사합니다.
 *
 * @param dest 복사 대상 문자열.
 * @param src 원본 문자열.
 * @param size 대상 버퍼의 전체 크기.
 * @return size_t 원본 문자열의 길이.
 */
size_t  ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief 문자열을 안전하게 연결합니다.
 *
 * @param dest 연결 대상 문자열.
 * @param src 추가할 문자열.
 * @param size 대상 버퍼의 전체 크기.
 * @return size_t 연결 후의 총 문자열 길이.
 */
size_t  ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief 문자열에서 처음 등장하는 문자를 찾습니다.
 *
 * @param s 문자열.
 * @param c 찾을 문자.
 * @return char* 찾은 문자의 포인터, 없으면 NULL.
 */
char    *ft_strchr(const char *s, int c);

/**
 * @brief 문자열에서 마지막에 등장하는 문자를 찾습니다.
 *
 * @param s 문자열.
 * @param c 찾을 문자.
 * @return char* 찾은 문자의 포인터, 없으면 NULL.
 */
char    *ft_strrchr(const char *s, int c);

/**
 * @brief 두 문자열을 최대 n 바이트까지 비교합니다.
 *
 * @param s1 첫 번째 문자열.
 * @param s2 두 번째 문자열.
 * @param n 비교할 바이트 수.
 * @return int 비교 결과 값.
 */
int     ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief 전체 문자열(haystack)에서 부분 문자열(needle)을 검색합니다.
 *
 * @param haystack 전체 문자열.
 * @param needle 검색할 부분 문자열.
 * @param len 검색할 길이.
 * @return char* 부분 문자열이 시작되는 주소, 없으면 NULL.
 */
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);


/* 변환 및 메모리 할당 함수 */

/**
 * @brief 문자열을 정수로 변환합니다.
 *
 * @param str 변환할 문자열.
 * @return int 변환된 정수값.
 */
int     ft_atoi(const char *str);

/**
 * @brief 정수를 문자열로 변환합니다.
 *
 * @param n 변환할 정수.
 * @return char* 동적 할당된 문자열, 실패시 NULL.
 */
char    *ft_itoa(int n);

/**
 * @brief 메모리 영역을 할당하고 0으로 초기화합니다.
 *
 * @param count 할당할 요소의 개수.
 * @param size 각 요소의 크기.
 * @return void* 초기화된 메모리 영역 포인터.
 */
void    *ft_calloc(size_t count, size_t size);

/**
 * @brief 문자열을 복사하여 동적 메모리에 저장합니다.
 *
 * @param s 원본 문자열.
 * @return char* 복사된 문자열 포인터.
 */
char    *ft_strdup(const char *s);


/* 문자열 조작 함수 */

/**
 * @brief 원본 문자열의 일부를 추출하여 새 문자열을 생성합니다.
 *
 * @param s 원본 문자열.
 * @param start 추출 시작 인덱스.
 * @param len 추출할 길이.
 * @return char* 동적 할당된 부분 문자열.
 */
char    *ft_substr(const char *s, unsigned int start, size_t len);

/**
 * @brief 두 문자열을 합쳐 새로운 문자열을 생성합니다.
 *
 * @param s1 첫 번째 문자열.
 * @param s2 두 번째 문자열.
 * @return char* 합쳐진 문자열 포인터.
 */
char    *ft_strjoin(const char *s1, const char *s2);

/**
 * @brief 문자열의 앞뒤에서 지정된 문자들을 제거합니다.
 *
 * @param s1 원본 문자열.
 * @param set 제거할 문자 집합.
 * @return char* 동적 할당된 결과 문자열.
 */
char    *ft_strtrim(const char *s1, const char *set);

/**
 * @brief 문자열을 구분자 기준으로 분할하여 배열을 생성합니다.
 *
 * @param s 원본 문자열.
 * @param c 구분자 문자.
 * @return char** 동적 할당된 문자열 배열 (마지막은 NULL).
 */
char    **ft_split(const char *s, char c);

/**
 * @brief 문자열의 각 문자에 함수를 적용해 새 문자열을 생성합니다.
 *
 * @param s 원본 문자열.
 * @param f 각 인덱스와 문자를 인자로 받는 함수.
 * @return char* 변환된 새 문자열.
 */
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));

/**
 * @brief 문자열의 각 문자에 주어진 함수를 적용합니다.
 *
 * @param s 문자열.
 * @param f 각 인덱스와 해당 문자의 포인터를 인자로 받는 함수.
 */
void    ft_striteri(char *s, void (*f)(unsigned int, char*));


/* 파일 디스크립터 기반 출력 함수 */

/**
 * @brief 문자를 파일 디스크립터에 출력합니다.
 *
 * @param c 출력할 문자.
 * @param fd 파일 디스크립터.
 */
void    ft_putchar_fd(char c, int fd);

/**
 * @brief 문자열을 파일 디스크립터에 출력합니다.
 *
 * @param s 출력할 문자열.
 * @param fd 파일 디스크립터.
 */
void    ft_putstr_fd(char *s, int fd);

/**
 * @brief 문자열을 출력한 후 줄바꿈 문자를 출력합니다.
 *
 * @param s 출력할 문자열.
 * @param fd 파일 디스크립터.
 */
void    ft_putendl_fd(char *s, int fd);

/**
 * @brief 정수를 파일 디스크립터에 출력합니다.
 *
 * @param n 출력할 정수.
 * @param fd 파일 디스크립터.
 */
void    ft_putnbr_fd(int n, int fd);


/* 링크드 리스트 함수 */

/**
 * @brief 링크드 리스트의 노드 구조체.
 */
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}               t_list;

/**
 * @brief 새 링크드 리스트 노드를 생성합니다.
 *
 * @param content 노드에 저장할 데이터.
 * @return t_list* 새 노드의 포인터.
 */
t_list   *ft_lstnew(void *content);

/**
 * @brief 리스트의 맨 앞에 새 노드를 추가합니다.
 *
 * @param lst 리스트의 주소.
 * @param new 새 노드.
 */
void    ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief 링크드 리스트의 노드 수를 반환합니다.
 *
 * @param lst 리스트의 포인터.
 * @return int 노드의 개수.
 */
int     ft_lstsize(t_list *lst);

/**
 * @brief 리스트의 마지막 노드를 반환합니다.
 *
 * @param lst 리스트의 포인터.
 * @return t_list* 마지막 노드의 포인터.
 */
t_list  *ft_lstlast(t_list *lst);

/**
 * @brief 리스트의 마지막에 새 노드를 추가합니다.
 *
 * @param lst 리스트의 주소.
 * @param new 새 노드.
 */
void    ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief 단일 노드를 삭제합니다.
 *
 * @param lst 삭제할 노드.
 * @param del 노드의 내용을 삭제하는 함수.
 */
void    ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief 리스트의 모든 노드를 삭제합니다.
 *
 * @param lst 리스트의 주소.
 * @param del 노드의 내용을 삭제하는 함수.
 */
void    ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief 리스트의 각 노드에 함수를 적용합니다.
 *
 * @param lst 리스트의 포인터.
 * @param f 적용할 함수.
 */
void    ft_lstiter(t_list *lst, void (*f)(void*));

/**
 * @brief 리스트의 각 노드에 함수를 적용해 새 리스트를 생성합니다.
 *
 * @param lst 원본 리스트.
 * @param f 각 노드의 내용을 변경하는 함수.
 * @param del 삭제 함수 (필요 시 사용).
 * @return t_list* 새로 생성된 리스트 포인터.
 */
t_list  *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));

#endif /* LIBFT_H */
