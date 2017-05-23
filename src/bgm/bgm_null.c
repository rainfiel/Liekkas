
#include "lua.h"
#include "lauxlib.h"
#include <stdbool.h>


static int
l_bgm_load(lua_State* L) {
    return 0;
}


static int
l_bgm_play(lua_State* L) {
    return 0;
}

static int
l_bgm_stop(lua_State* L) {
    return 0;
}

static int
l_bgm_pause(lua_State* L) {
    return 0;
}

int
bgm_null(lua_State* L) {
    luaL_Reg l[] = {
        {"load", l_bgm_load},
        {"play", l_bgm_play},
        {"stop", l_bgm_stop},
        {"pause", l_bgm_pause},

        {NULL, NULL},
    };

    luaL_newlib(L, l);
    return 1;
}