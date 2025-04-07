#include <SDL2/SDL.h>
#include <stdio.h>

typedef void (*l_SDL_ptr__char_ptr__int__int__int__int__int_to_void_r)(void*, char*, int, int, int, int, int);
typedef struct {int _0; int _1;} tup_int__int_le;
typedef void (*l_SDL_ptr__int_to_void_r)(void*, int);
typedef void (*l_Perkio_ptr__int__int_to_void_r)(void*, int, int);
typedef void (*l_SDL_ptr__int__int__int__int_to_void_r)(void*, int, int, int, int);
typedef void (*l_SDL_ptr__int__int_to_void_r)(void*, int, int);
typedef void (*l_Strozno_ptr__int__int_to_void_r)(void*, int, int);

struct Window {
    int oops;
};
typedef struct Window* Window;

typedef int (*l_SDL_ptr__int_to_int_r)(void*, int);
typedef void (*l_SDL_ptr_to_void_r)(void*);

struct Renderer {
    int oops;
};
typedef struct Renderer* Renderer;

typedef void (*l_void_ptr__int__int_to_void_r)(void*, int, int);
typedef struct {int _0; int _1; int _2; int _3;} tup_int__int__int__int_le;
typedef void (*l_Rect_ptr__tup_int__int_le__tup_int__int_le_to_void_r)(void*, tup_int__int_le, tup_int__int_le);
typedef struct Window_opt {int is_some; void* contents;} Window_opt;
typedef struct Renderer_opt {int is_some; void* contents;} Renderer_opt;
typedef void (*l_SDL_ptr__tup_int__int__int__int_le_to_void_r)(void*, tup_int__int__int__int_le);

struct Rect {
    tup_int__int_le pos;
    tup_int__int_le size;
    l_Rect_ptr__tup_int__int_le__tup_int__int_le_to_void_r constructor;
};
typedef struct Rect* Rect;

typedef void (*l_SDL_ptr__Rect_to_void_r)(void*, void*);
typedef char* (*l_SDL_ptr_to_char_ptr_r)(void*);

struct SDL {
    Window_opt window;
    Renderer_opt renderer;
    l_SDL_ptr__int_to_int_r init;
    l_SDL_ptr__char_ptr__int__int__int__int__int_to_void_r create_window;
    l_SDL_ptr_to_char_ptr_r get_error;
    l_SDL_ptr__tup_int__int__int__int_le_to_void_r set_renderer_draw_color_tup;
    l_SDL_ptr__int__int__int__int_to_void_r set_renderer_draw_color;
    l_SDL_ptr_to_void_r render_clear;
    l_SDL_ptr_to_void_r render_present;
    l_SDL_ptr__int__int_to_void_r create_renderer;
    l_SDL_ptr_to_void_r destroy_window;
    l_SDL_ptr_to_void_r quit;
    l_SDL_ptr__Rect_to_void_r render_fill_rect;
    l_SDL_ptr__int_to_void_r delay;
};
typedef struct SDL* SDL;

typedef void (*l_GameController_ptr__SDL__tup_int__int_le_to_void_r)(void*, void*, tup_int__int_le);
typedef void (*l_Strozno_ptr__SDL_to_void_r)(void*, void*);
typedef void (*l_void_ptr__SDL_to_void_r)(void*, SDL);
typedef void (*l_Perkio_ptr__SDL_to_void_r)(void*, void*);

struct Drawable {
    tup_int__int_le* position;
    l_void_ptr__int__int_to_void_r move;
    l_void_ptr__SDL_to_void_r draw;
};
typedef struct Drawable Drawable;
struct SumDrawable {Drawable Drawable; void* self;};
typedef struct SumDrawable SumDrawable;
typedef struct SumDrawable_opt {int is_some; SumDrawable contents;} SumDrawable_opt;
typedef void (*l_List_ptr__SumDrawable_to_void_r)(void*, SumDrawable);
typedef void (*l_SumDrawable__SDL_to_void_r)(SumDrawable, SDL);
typedef void (*l_List_ptr__l_SumDrawable__SDL_to_void_r__SDL_to_void_r)(void*, void (*)(SumDrawable, SDL), void*);

struct Strozno {
    tup_int__int_le position;
    l_Strozno_ptr__int__int_to_void_r move;
    l_Strozno_ptr__SDL_to_void_r draw;

    struct Drawable Drawable;
};
typedef struct Strozno* Strozno;


struct Perkio {
    tup_int__int_le position;
    l_Perkio_ptr__int__int_to_void_r move;
    l_Perkio_ptr__SDL_to_void_r draw;

    struct Drawable Drawable;
};
typedef struct Perkio* Perkio;

typedef void* (*l_List_ptr__SumDrawable_to_List_r)(void*, SumDrawable);
typedef struct List_opt {int is_some; void* contents;} List_opt;

struct List {
    SumDrawable_opt head;
    List_opt tail;
    l_List_ptr__SumDrawable_to_List_r push_head;
    l_List_ptr__SumDrawable_to_void_r push_tail;
    l_List_ptr__l_SumDrawable__SDL_to_void_r__SDL_to_void_r foreach;
};
typedef struct List* List;


struct GameController {
    List state;
    Rect world_bounds;
    tup_int__int_le gravity;
    l_GameController_ptr__SDL__tup_int__int_le_to_void_r loop;
};
typedef struct GameController* GameController;

int main ();
static int __perkelang_lambda_1 (struct SDL*, int);
static void __perkelang_lambda_6 (struct SDL*);
static void __perkelang_lambda_15 (struct Strozno*, int, int);
static void __perkelang_lambda_12 (struct SDL*, int);
static void __perkelang_lambda_19 (struct List*, l_SumDrawable__SDL_to_void_r, SDL);
static void __perkelang_lambda_11 (struct SDL*, Rect);
static void __perkelang_lambda_9 (struct SDL*);
static void __perkelang_lambda_8 (struct SDL*, int, int);
static void __perkelang_lambda_14 (struct Perkio*, SDL);
static void __perkelang_lambda_4 (struct SDL*, tup_int__int__int__int_le);
static void __perkelang_lambda_21 (SumDrawable, SDL);
static void __perkelang_lambda_7 (struct SDL*);
static char* __perkelang_lambda_3 (struct SDL*);
static void __perkelang_lambda_20 (struct GameController*, SDL, tup_int__int_le);
static void __perkelang_lambda_0 (struct Rect*, tup_int__int_le, tup_int__int_le);
static void __perkelang_lambda_10 (struct SDL*);
static void __perkelang_lambda_5 (struct SDL*, int, int, int, int);
static void __perkelang_lambda_22 (SumDrawable, SDL);
static void __perkelang_lambda_16 (struct Strozno*, SDL);
static void __perkelang_lambda_2 (struct SDL*, char*, int, int, int, int, int);
static void __perkelang_lambda_18 (struct List*, SumDrawable);
static void __perkelang_lambda_13 (struct Perkio*, int, int);
static List __perkelang_lambda_17 (struct List*, SumDrawable);

tup_int__int__int__int_le ground_green = (tup_int__int__int__int_le){0, 150, 0, 255};

tup_int__int__int__int_le sky_blue = (tup_int__int__int__int_le){0, 128, 255, 255};

tup_int__int__int__int_le shite_my_pantalogno = (tup_int__int__int__int_le){74, 65, 42, 255};

tup_int__int__int__int_le perwinkle = (tup_int__int__int__int_le){142, 130, 254, 255};

tup_int__int__int__int_le perkio_red = (tup_int__int__int__int_le){255, 0, 0, 255};

Window Window_init() {
    Window self = malloc(sizeof(struct Window));
    self->oops = (int) 0;

    return self;
}

Renderer Renderer_init() {
    Renderer self = malloc(sizeof(struct Renderer));
    self->oops = (int) 0;

    return self;
}

Rect Rect_init(tup_int__int_le arg_0, tup_int__int_le arg_1) {
    Rect self = malloc(sizeof(struct Rect));
    self->pos = (tup_int__int_le) (tup_int__int_le){0, 0};
    self->size = (tup_int__int_le) (tup_int__int_le){0, 0};
    self->constructor = (l_Rect_ptr__tup_int__int_le__tup_int__int_le_to_void_r) __perkelang_lambda_0;

    self->constructor(self, arg_0, arg_1);
    return self;
}

SDL SDL_init() {
    SDL self = malloc(sizeof(struct SDL));
    self->window = (Window_opt) ((Window_opt) {0, 0});
    self->renderer = (Renderer_opt) ((Renderer_opt) {0, 0});
    self->init = (l_SDL_ptr__int_to_int_r) __perkelang_lambda_1;
    self->create_window = (l_SDL_ptr__char_ptr__int__int__int__int__int_to_void_r) __perkelang_lambda_2;
    self->get_error = (l_SDL_ptr_to_char_ptr_r) __perkelang_lambda_3;
    self->set_renderer_draw_color_tup = (l_SDL_ptr__tup_int__int__int__int_le_to_void_r) __perkelang_lambda_4;
    self->set_renderer_draw_color = (l_SDL_ptr__int__int__int__int_to_void_r) __perkelang_lambda_5;
    self->render_clear = (l_SDL_ptr_to_void_r) __perkelang_lambda_6;
    self->render_present = (l_SDL_ptr_to_void_r) __perkelang_lambda_7;
    self->create_renderer = (l_SDL_ptr__int__int_to_void_r) __perkelang_lambda_8;
    self->destroy_window = (l_SDL_ptr_to_void_r) __perkelang_lambda_9;
    self->quit = (l_SDL_ptr_to_void_r) __perkelang_lambda_10;
    self->render_fill_rect = (l_SDL_ptr__Rect_to_void_r) __perkelang_lambda_11;
    self->delay = (l_SDL_ptr__int_to_void_r) __perkelang_lambda_12;

    return self;
}


Perkio Perkio_init() {
    Perkio self = malloc(sizeof(struct Perkio));
    self->position = (tup_int__int_le) (tup_int__int_le){200, 200};
    self->move = (l_Perkio_ptr__int__int_to_void_r) __perkelang_lambda_13;
    self->draw = (l_Perkio_ptr__SDL_to_void_r) __perkelang_lambda_14;
    self->Drawable.position = (tup_int__int_le*) &self->position;
    self->Drawable.move = (l_void_ptr__int__int_to_void_r) self->move;
    self->Drawable.draw = (l_void_ptr__SDL_to_void_r) self->draw;
    return self;
}

Strozno Strozno_init() {
    Strozno self = malloc(sizeof(struct Strozno));
    self->position = (tup_int__int_le) (tup_int__int_le){400, 200};
    self->move = (l_Strozno_ptr__int__int_to_void_r) __perkelang_lambda_15;
    self->draw = (l_Strozno_ptr__SDL_to_void_r) __perkelang_lambda_16;
    self->Drawable.position = (tup_int__int_le*) &self->position;
    self->Drawable.move = (l_void_ptr__int__int_to_void_r) self->move;
    self->Drawable.draw = (l_void_ptr__SDL_to_void_r) self->draw;
    return self;
}

List List_init() {
    List self = malloc(sizeof(struct List));
    self->head = (SumDrawable_opt) ((SumDrawable_opt) {0, 0});
    self->tail = (List_opt) ((List_opt) {0, 0});
    self->push_head = (l_List_ptr__SumDrawable_to_List_r) __perkelang_lambda_17;
    self->push_tail = (l_List_ptr__SumDrawable_to_void_r) __perkelang_lambda_18;
    self->foreach = (l_List_ptr__l_SumDrawable__SDL_to_void_r__SDL_to_void_r) __perkelang_lambda_19;

    return self;
}

GameController GameController_init() {
    GameController self = malloc(sizeof(struct GameController));
    self->state = (List) List_init();
    self->world_bounds = (Rect) Rect_init((tup_int__int_le){0, 0}, (tup_int__int_le){800, 500});
    self->gravity = (tup_int__int_le) (tup_int__int_le){0, 1};
    self->loop = (l_GameController_ptr__SDL__tup_int__int_le_to_void_r) __perkelang_lambda_20;

    return self;
}

float delta_t = 1. / 60.;

int main() {
    tup_int__int_le window_size = (tup_int__int_le){800, 600};
    SDL sdl = SDL_init();
    if (sdl->init(sdl, SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", sdl->get_error(sdl));
        return 1;
    } else {

    }
    sdl->create_window(sdl, "Simple SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, window_size._0, window_size._1, SDL_WINDOW_SHOWN);
    if (!sdl->window.is_some) {
        printf("Window could not be created! SDL_Error: %s\n", sdl->get_error(sdl));
        sdl->quit(sdl);
        return 1;
    } else {

    }
    sdl->create_renderer(sdl, -1, SDL_RENDERER_ACCELERATED);
    if (!sdl->renderer.is_some) {
        printf("Renderer could not be created! SDL_Error: %s\n", sdl->get_error(sdl));
        sdl->destroy_window(sdl);
        sdl->quit(sdl);
        return 1;
    } else {

    }
    GameController game = GameController_init();
    Perkio perkio = Perkio_init();
    Strozno strozno = Strozno_init();
    game->state = game->state->push_head(game->state, ((SumDrawable) {perkio->Drawable, perkio}));
    game->state = game->state->push_head(game->state, ((SumDrawable) {strozno->Drawable, strozno}));
    int quit = 0;
    while (!quit) {

        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = 1;
            }
        }
        
        game->loop(game, sdl, window_size);
        sdl->delay(sdl, 16);
    }
    free(strozno);
    strozno = NULL;
    free(perkio);
    perkio = NULL;
    free(game);
    game = NULL;
    return 0;
}

static void __perkelang_lambda_7(struct SDL* self) {
    Renderer _r = ((Renderer)self->renderer.contents);

        SDL_RenderPresent((SDL_Renderer*)_r);
        
}

static char* __perkelang_lambda_3(struct SDL* self) {

        return SDL_GetError();
        
}

static void __perkelang_lambda_18(struct List* self, SumDrawable x) {
    List newList = List_init();
    newList->head = ((SumDrawable_opt) {1, x});
    List current = self;
    while (current->tail.is_some) {
        current = ((List)current->tail.contents);
    }
    current->tail = ((List_opt){1, newList});
}

static void __perkelang_lambda_15(struct Strozno* self, int dirx, int diry) {
    self->position._0 = self->position._0 + dirx;
    self->position._1 = self->position._1 + diry;
}

static void __perkelang_lambda_9(struct SDL* self) {
    Window _w = ((Window)self->window.contents);

        SDL_DestroyWindow((SDL_Window*)_w);
        
}

static void __perkelang_lambda_4(struct SDL* self, tup_int__int__int__int_le colour) {
    self->set_renderer_draw_color(self, colour._0, colour._1, colour._2, colour._3);
}

static void __perkelang_lambda_2(struct SDL* self, char* title, int x, int y, int w, int h, int flags) {
    Window _w = ((Window)self->window.contents);
    int set = 0;

        _w = (void*) SDL_CreateWindow(title, x, y, w, h, flags);
        set = (int) _w;
        
    if (set) {
        self->window = ((Window_opt) {1, _w});
    } else {

    }
}

static void __perkelang_lambda_22(SumDrawable d, SDL sdl) {
    d.Drawable.draw(d.self, sdl);
}

static List __perkelang_lambda_17(struct List* self, SumDrawable x) {
    if (!self->head.is_some) {
        self->head = ((SumDrawable_opt) {1, x});
        return self;
    } else {
        List newList = List_init();
        newList->head = ((SumDrawable_opt) {1, x});
        newList->tail = ((List_opt){1, self});
        return newList;
    }
}

static void __perkelang_lambda_5(struct SDL* self, int a, int b, int c, int d) {
    Renderer _r = ((Renderer)self->renderer.contents);

        SDL_SetRenderDrawColor((SDL_Renderer*)_r, a, b, c, d); // 0, 128, 255, 255 for Blue background
        
}

static void __perkelang_lambda_0(struct Rect* self, tup_int__int_le pos, tup_int__int_le size) {
    self->pos = pos;
    self->size = size;
}

static void __perkelang_lambda_21(SumDrawable d, SDL sdl) {
    d.Drawable.move(d.self, 0, 2);
}

static void __perkelang_lambda_11(struct SDL* self, Rect rect) {
    int x = rect->pos._0;
    int y = rect->pos._1;
    int w = rect->size._0;
    int h = rect->size._1;
    Renderer _r = ((Renderer)self->renderer.contents);

        SDL_Rect _rect = { x, y, w, h };
        SDL_RenderFillRect((SDL_Renderer*)_r, &_rect);
        
}

static void __perkelang_lambda_16(struct Strozno* self, SDL sdl) {
    sdl->set_renderer_draw_color_tup(sdl, shite_my_pantalogno);
    Rect rect = Rect_init((tup_int__int_le){self->position._0 - 10, self->position._1 - 40}, (tup_int__int_le){20, 40});
    sdl->render_fill_rect(sdl, rect);
    free(rect);
    rect = NULL;
}

static void __perkelang_lambda_14(struct Perkio* self, SDL sdl) {
    sdl->set_renderer_draw_color_tup(sdl, perkio_red);
    Rect rect = Rect_init((tup_int__int_le){self->position._0 - 10, self->position._1 - 40}, (tup_int__int_le){20, 40});
    sdl->render_fill_rect(sdl, rect);
    free(rect);
    rect = NULL;
}

static void __perkelang_lambda_10(struct SDL* self) {

        SDL_Quit();
        
}

static void __perkelang_lambda_8(struct SDL* self, int a, int b) {
    Renderer _r = ((Renderer)self->renderer.contents);
    Window _w = ((Window)self->window.contents);
    int set = 0;

        _r = (void*)SDL_CreateRenderer((SDL_Window*)_w, a, b);
        set = (int) _r;
        
    if (set) {
        self->renderer = ((Renderer_opt) {1, _r});
    } else {

    }
}

static int __perkelang_lambda_1(struct SDL* self, int x) {

        return SDL_Init(x);
        
}

static void __perkelang_lambda_12(struct SDL* self, int ms) {

        SDL_Delay(ms);
        
}

static void __perkelang_lambda_6(struct SDL* self) {
    Renderer _r = ((Renderer)self->renderer.contents);

        SDL_RenderClear((SDL_Renderer*)_r);
        
}

static void __perkelang_lambda_20(struct GameController* self, SDL sdl, tup_int__int_le window_size) {
    sdl->set_renderer_draw_color_tup(sdl, sky_blue);
    sdl->render_clear(sdl);
    sdl->set_renderer_draw_color_tup(sdl, ground_green);
    Rect rect = Rect_init((tup_int__int_le){0, window_size._1 - 200}, (tup_int__int_le){window_size._0, 200});
    sdl->render_fill_rect(sdl, rect);
    free(rect);
    rect = NULL;
    self->state->foreach(self->state, __perkelang_lambda_21, sdl);
    self->state->foreach(self->state, __perkelang_lambda_22, sdl);
    sdl->render_present(sdl);
}

static void __perkelang_lambda_19(struct List* self, l_SumDrawable__SDL_to_void_r f, SDL sdl) {
    if (self->head.is_some) {
        f(((SumDrawable)self->head.contents), sdl);
        if (self->tail.is_some) {
            ((List)self->tail.contents)->foreach(((List)self->tail.contents), f, sdl);
        } else {

        }
    } else {

    }
}

static void __perkelang_lambda_13(struct Perkio* self, int dirx, int diry) {
    self->position._0 = self->position._0 + dirx;
    self->position._1 = self->position._1 + diry;
}
