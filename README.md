# Libft

Libft는 C 프로그래밍의 표준 함수들을 직접 구현하여 저수준 시스템 이해도를 높이기 위한 개인 C 라이브러리입니다. `libft`는 42 프로젝트의 일환으로 제작되었으며, 메모리 함수, 문자열 처리 함수, 리스트 관리 함수 등을 포함하고 있습니다.

## 🛠️ 구현된 함수

다음과 같은 카테고리의 함수들을 직접 구현하였습니다:

### 1. 메모리 조작 함수
- `ft_memset`       : 메모리 블록을 특정 값으로 초기화
- `ft_bzero`        : 메모리를 0으로 초기화 (`memset(ptr, 0, size)`와 동일)
- `ft_memcpy`       : 메모리 블록 복사 (겹치지 않는 영역에 적합)
- `ft_memmove`      : 겹칠 수 있는 메모리 블록 복사
- `ft_memchr`       : 메모리 블록에서 특정 바이트 값 탐색
- `ft_memcmp`       : 두 메모리 블록의 차이 비교
- `ft_calloc`       : 메모리 할당 + 0으로 초기화 (동적 배열 생성에 유용)

### 2. 문자열 처리 함수
- `ft_strlen`       : 문자열 길이 계산
- `ft_strlcpy`      : 버퍼 크기를 고려한 안전한 문자열 복사
- `ft_strlcat`      : 버퍼 크기를 고려한 안전한 문자열 덧붙이기
- `ft_strchr`       : 문자열에서 특정 문자 탐색 (앞에서부터)
- `ft_strrchr`      : 문자열에서 특정 문자 탐색 (뒤에서부터)
- `ft_strncmp`      : 문자열 앞 n글자 비교
- `ft_strnstr`      : 문자열 내 부분 문자열 탐색 (길이 제한)
- `ft_strdup`       : 문자열을 복사하여 새 메모리 반환
- `ft_substr`       : 문자열의 일부를 추출 (부분 문자열 만들기)
- `ft_strjoin`      : 두 문자열 연결
- `ft_strtrim`      : 앞뒤 불필요한 문자 제거 (예: 공백 제거)
- `ft_split`        : 구분자를 기준으로 문자열 나누기
- `ft_strmapi`      : 각 문자를 함수에 매핑하여 새 문자열 생성
- `ft_striteri`     : 각 문자를 함수에 적용 (in-place 처리)

### 3. 문자 확인/변환 함수
- `ft_isalpha`      : 알파벳 여부 확인
- `ft_isdigit`      : 숫자 여부 확인
- `ft_isalnum`      : 영문자 또는 숫자인지 확인
- `ft_isascii`      : ASCII 범위에 있는지 확인
- `ft_isprint`      : 출력 가능한 문자인지 확인
- `ft_toupper`      : 소문자를 대문자로 변환
- `ft_tolower`      : 대문자를 소문자로 변환

### 4. 변환 함수
- `ft_atoi`         : 문자열을 정수로 변환 (예: `"42"` → `42`)
- `ft_itoa`         : 정수를 문자열로 변환 (예: `-42` → `"-42"`)

### 5. 파일 디스크립터 관련 함수
- `ft_putchar_fd`   : 파일 디스크립터로 문자 출력
- `ft_putstr_fd`    : 문자열 출력
- `ft_putendl_fd`   : 문자열 + 개행 출력
- `ft_putnbr_fd`    : 숫자를 문자열로 출력

### 6. 연결 리스트 (Bonus 파트)
- `ft_lstnew`       : 새 노드 생성
- `ft_lstadd_front` : 리스트 앞에 노드 추가
- `ft_lstsize`      : 리스트 노드 개수 반환
- `ft_lstlast`      : 리스트의 마지막 노드 반환
- `ft_lstadd_back`  : 리스트 끝에 노드 추가
- `ft_lstdelone`    : 하나의 노드 제거
- `ft_lstclear`     : 전체 리스트 제거 및 메모리 해제
- `ft_lstiter`      : 리스트 순회하며 함수 적용
- `ft_lstmap`       : 리스트의 각 노드에 함수 적용 후 새 리스트 생성

## 🧪 빌드 및 테스트

```bash
make        # 라이브러리 컴파일 (libft.a 생성)
make clean  # 오브젝트 파일 삭제
make fclean # 오브젝트 및 라이브러리 파일 삭제
make re     # 재컴파일
