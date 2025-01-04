#define TIME_OUT 1000
typedef unsigned short int num;

num lives = 3;

const char* empty = " ";
const char* body = "O";
const char* apple = "@";
const char* wall = "#";
const char* snake_head = "O";

num rows, cols;
num nrows, ncols;
num num_apples = 0;
num score = 0;
int time_out = TIME_OUT;

char** disp_arr;

typedef struct ListNode
{
   void *data;
   struct ListNode *next;
} ListNode;

typedef struct List
{
   int size;
   int (*equals)(const void *key1, const void *key2);
   void (*destroy)(void *data);
   ListNode *head;
   ListNode *tail;
} List;


typedef struct SnakeNode
{
   num x;
   num y;
   bool head;
} SnakeNode;


typedef struct Node
{
   num x;
   num y;
} Node;

typedef struct WallSegment
{
   num start_x;
   num start_y;
   num end_x;
   num end_y;
} WallSegment;


typedef struct Level
{
   num number;
   char name[64];
   num apples_to_eat;
   num penalty_time;
   num wall_count;
   WallSegment* walls;
} Level;

Level levels_array[16];

typedef Node Apple;

typedef enum e_dir
{
   up, down, left, right
} e_dir;

typedef struct Snake
{
   List* body;
   e_dir dir;
   num size;
} Snake;

typedef struct Apples
{
   List* list;
   num count;
} Apples;


Snake* snake = NULL;
Apples* papples = NULL;

#define list_size(list) ((list)->size)
#define list_head(list) ((list)->head)
#define list_tail(list) ((list)->tail)
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)
#define list_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define list_data(element) ((element)->data)
#define list_next(element) ((element)->next)

int list_rem_next(List *list, ListNode *element, void **data);
int collision(Snake* psnake);
void get_random_apple(Snake* psnake, Apples* apples);
int list_init(List **list, void (*destroy)(void *data),
      int (*equals)(const void* key1, const void* key2));
void list_destroy(List **list);
int list_ins_next(List *list, ListNode *element, const void *data);
int list_rem_next(List *list, ListNode *element, void **data);
int delete_element(List* list, void* key, void** deleted); 
int delete_tail(List* list);
int find_element(List* list, void *key, void** found);
void iterate(List* list, void (*iterator)(void* data));
void display();
void clear_display();
void destroy(void* data);
int equals(const void* key1, const void* key2); 
int init_apples(Apples** apples);
int init_snake(Snake** psnake, const unsigned int size);
void draw_apple(void* data);
void draw_node(void* data);
void erase_node(void* data);
void display_snake(Snake* psnake);
void erase_snake(Snake* psnake);
int destroy_snake(Snake** psnake);
int destroy_apples(Apples** papples); 
int found_apple(SnakeNode* head);
void eat_apple(SnakeNode* head);
void move_snake(Snake* psnake); 
void display_apples(); 
int self_collision(Snake* psnake, int x, int y);
int collision(Snake* psnake);
void get_input(Snake* psnake);
void get_random_apple(Snake* psnake, Apples* apples);
void check_timeout(Snake* psnake, Apples* apples); 
void display_walls();
void display_timeout();  
void display_score();
void display_final_score(); 
void display_game_over();
void display_title();    
void display_lives_left();





