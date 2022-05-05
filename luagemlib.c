/* 
 * luagemlib.c
 * Charlotte Koch <dressupgeekout@gmail.com>
 */

#include <lua.h>
#include <lauxlib.h>

#include <gem.h>

static int l_appl_bvset(lua_State *L);
static int l_appl_control(lua_State *L);
static int l_appl_exit(lua_State *L);
static int l_appl_find(lua_State *L);
static int l_appl_getinfo(lua_State *L);
static int l_appl_xgetinfo(lua_State *L);
static int l_appl_getinfo_str(lua_State *L);
static int l_appl_read(lua_State *L);
static int l_appl_search(lua_State *L);
static int l_appl_tplay(lua_State *L);
static int l_appl_trecord(lua_State *L);
static int l_appl_write(lua_State *L);
static int l_appl_yield(lua_State *L);
static int l_appl_getcicon(lua_State *L);
static int l_appl_get_cicon(lua_State *L);
static int l_appl_init(lua_State *L);

static int l_rsrc_free(lua_State *L);
static int l_rsrc_gaddr(lua_State *L);
static int l_rsrc_load(lua_State *L);
static int l_rsrc_obfix(lua_State *L);
static int l_rsrc_rcfix(lua_State *L);
static int l_rsrc_saddr(lua_State *L);

static int l_wind_calc(lua_State *L);
static int l_wind_close(lua_State *L);
static int l_wind_create(lua_State *L);
static int l_wind_delete(lua_State *L);
static int l_wind_draw(lua_State *L);
static int l_wind_find(lua_State *L);
static int l_wind_get(lua_State *L);
static int l_wind_new(lua_State *L);
static int l_wind_open(lua_State *L);
static int l_wind_set(lua_State *L);
static int l_wind_update(lua_State *L);
static int l_wind_get_int(lua_State *L);
static int l_wind_get_ptr(lua_State *L);
static int l_wind_set_int(lua_State *L);
static int l_wind_set_ptr(lua_State *L);
static int l_wind_set_ptr_int(lua_State *L);

/* ********** */

static luaL_Reg appl_functions[] = {
	{"bvset", l_appl_bvset},
	{"control", l_appl_control},
	{"exit", l_appl_exit},
	{"find", l_appl_find},
	{"getinfo", l_appl_getinfo},
	{"xgetinfo", l_appl_xgetinfo},
	{"getinfo_str", l_appl_getinfo_str},
	{"read", l_appl_read},
	{"search", l_appl_search},
	{"tplay", l_appl_tplay},
	{"trecord", l_appl_trecord},
	{"write", l_appl_write},
	{"yield", l_appl_yield},
	{"geticon", l_appl_getcicon},
	{"get_cicon", l_appl_get_cicon},
	{"init", l_appl_init},
	{NULL, NULL}
};

static luaL_Reg rsrc_functions[] = {
	{"free", l_rsrc_free},
	{"gaddr", l_rsrc_gaddr},
	{"load", l_rsrc_load},
	{"obfix", l_rsrc_obfix},
	{"rcfix", l_rsrc_rcfix},
	{"rsrc_saddr", l_rsrc_saddr},
	{NULL, NULL}
}

static luaL_Reg wind_functions[] = {
	{"calc", l_wind_calc},
	{"close", l_wind_close},
	{"create", l_wind_create},
	{"delete", l_wind_delete},
	{"draw", l_wind_draw},
	{"find", l_wind_find},
	{"get", l_wind_get},
	{"new", l_wind_new},
	{"open", l_wind_open},
	{"set", l_wind_set},
	{"update", l_wind_update},
	{"get_int", l_wind_get_int},
	{"get_ptr", l_wind_get_ptr},
	{"set_int", l_wind_set_int},
	{"set_ptr", l_wind_set_ptr},
	{"set_ptr_int", l_wind_set_ptr_int},
	{NULL, NULL}
};

/* ********** */

static int
l_appl_bvset(lua_State *L);
{
	return 0;
}

static int
l_appl_control(lua_State *L);
{
	return 0;
}


/*
 * errno = appl.exit()
 */
static int
l_appl_exit(lua_State *L);
{
	short rv = appl_exit();
	lua_pushinteger(L, (int)rv);
	return 1;
}

static int
l_appl_find(lua_State *L);
{
	return 0;
}

static int
l_appl_getinfo(lua_State *L);
{
	return 0;
}

static int
l_appl_xgetinfo(lua_State *L);
{
	return 0;
}

static int
l_appl_getinfo_str(lua_State *L);
{
	return 0;
}

static int
l_appl_read(lua_State *L);
{
	return 0;
}

static int
l_appl_search(lua_State *L);
{
	return 0;
}

static int
l_appl_tplay(lua_State *L);
{
	return 0;
}

static int
l_appl_trecord(lua_State *L);
{
	return 0;
}

static int
l_appl_write(lua_State *L);
{
	return 0;
}

static int
l_appl_yield(lua_State *L);
{
	return 0;
}

static int
l_appl_getcicon(lua_State *L);
{
	return 0;
}

static int
l_appl_get_cicon(lua_State *L);
{
	return 0;
}


/*
 * app_id = appl.init()
 */
static int
l_appl_init(lua_State *L);
{
	short app_id = appl_init();
	lua_pushinteger(L, (int)app_id);
	return 1;
}

/* ********** */

static int
l_rsrc_free(lua_State *L)
{
	return 0;
}

static int
l_rsrc_gaddr(lua_State *L)
{
	return 0;
}

static int
l_rsrc_load(lua_State *L);
{
	return 0;
}

static int
l_rsrc_obfix(lua_State *L);
{
	return 0;
}

static int
l_rsrc_rcfix(lua_State *L);
{
	return 0;
}

static int
l_rsrc_saddr(lua_State *L);
{
	return 0;
}

/* ********** */

static int
l_wind_calc(lua_State *L)
{
	return 0;
}

static int
l_wind_close(lua_State *L)
{
	return 0;
}

static int
l_wind_create(lua_State *L)
{
	return 0;
}

static int
l_wind_delete(lua_State *L)
{
	return 0;
}

static int
l_wind_draw(lua_State *L)
{
	return 0;
}

static int
l_wind_find(lua_State *L)
{
	return 0;
}

static int
l_wind_get(lua_State *L)
{
	return 0;
}

static int
l_wind_new(lua_State *L)
{
	return 0;
}

static int
l_wind_open(lua_State *L)
{
	return 0;
}

static int
l_wind_set(lua_State *L)
{
	return 0;
}

static int
l_wind_update(lua_State *L)
{
	return 0;
}

static int
l_wind_get_int(lua_State *L)
{
	return 0;
}

static int
l_wind_get_ptr(lua_State *L)
{
	return 0;
}

static int
l_wind_set_int(lua_State *L)
{
	return 0;
}

static int
l_wind_set_ptr(lua_State *L)
{
	return 0;
}

static int
l_wind_set_ptr_int(lua_State *L)
{
	return 0;
}


/* ********** */

int
luaopen_luagemlib(lua_State *L)
{
	/* XXX register everything */
	return 1;
}

/* ********** */

#if 0
#ifndef _GEMLIB_H_
# define _GEMLIB_H_

#ifndef _MT_GEMLIB_H_
#include <mt_gem.h>
#endif

__BEGIN_DECLS

#ifdef __GEMLIB_AES

/** @addtogroup AES
 *  @{
 */

extern short gl_apid, gl_ap_version;			/* initialized in appl_init */

/** global AES array */
extern short aes_global[];

/** AES version number */
#define	_AESversion   (aes_global[0])

/** Number of concurrent applications possible (normally 1).
    MultiTOS will return -1. */
#define	_AESnumapps   (aes_global[1])

/** Application identifier (same as mt_appl_init() return value). */
#define	_AESapid 	  (aes_global[2])

/** LONG global available for use by the application */
#define	_AESappglobal (*((long *)&aes_global[3]))

/** Pointer to the base of the trees loaded via rsrc_load(). */
#define	_AESrscfile   (*((OBJECT ***)&aes_global[5]))

/** Pointer to the memory of the resource loaded via mt_rsrc_load(). */
#define	_AESrscmem   (*((void **)&aes_global[7]))

/* length of that memory. Only valid for resource files <64K */
#define	_AESrsclen   (aes_global[9])

/** Current maximum character used by the AES to do vst_height() prior to
    writing to the screen. This entry is only present as of AES version 0x0400.*/
#define	_AESmaxchar   (aes_global[13])

/** Current minimum character used by the AES to do vst_height() prior to
    writing to the screen. This entry is only present as of AES version 0x0400.*/
#define	_AESminchar   (aes_global[14])

/**@}*/


/** @addtogroup a_evnt
 *  @{
 */
/** single-thread version of mt_evnt_button() */
#define evnt_button(a,b,c,d,e,f,g)		mt_evnt_button(a,b,c,d,e,f,g,aes_global)
/** single-thread version of mt_evnt_dclick() */
#define evnt_dclick(a,b)				mt_evnt_dclick(a,b,aes_global)
/** single-thread version of mt_evnt_keybd() */
#define evnt_keybd()					mt_evnt_keybd(aes_global)
/** single-thread version of mt_evnt_mesag() */
#define evnt_mesag(a)					mt_evnt_mesag(a,aes_global)
/** single-thread version of mt_evnt_mouse() */
#define evnt_mouse(a,b,c,d,e,f,g,h,i)	mt_evnt_mouse(a,b,c,d,e,f,g,h,i,aes_global)
/** single-thread version of mt_evnt_multi() */
#define evnt_multi(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v) \
										mt_evnt_multi(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,aes_global)
/** single-thread version of mt_evnt_multi_fast() */
#define evnt_multi_fast(a,b,c)			mt_evnt_multi_fast(a,b,c,aes_global)
/** single-thread version of mt_evnt_timer() */
#define evnt_timer(a)					mt_evnt_timer(a,aes_global)
/**@}*/

/** @addtogroup a_form
 *  @{
 */
/** single-thread version of mt_form_alert() */
#define form_alert(a,b) mt_form_alert(a,b,aes_global)
/** single-thread version of mt_form_button() */
#define form_button(a,b,c,d) mt_form_button(a,b,c,d,aes_global)
/** single-thread version of mt_form_center() */
#define form_center(a, b,c,d,e) mt_form_center(a,b,c,d,e,aes_global)
/** single-thread version of mt_form_center_grect() */
#define form_center_grect(a,b) mt_form_center_grect(a,b,aes_global)
/** single-thread version of mt_form_dial() */
#define form_dial(a, b,c,d,e, f,g,h,i) mt_form_dial(a,b,c,d,e,f,g,h,i,aes_global)
/** single-thread version of mt_form_dial_grect() */
#define form_dial_grect(a,b,c) mt_form_dial_grect(a,b,c,aes_global)
/** single-thread version of mt_form_do() */
#define form_do(a,b) mt_form_do(a,b,aes_global)
/** single-thread version of mt_form_error() */
#define form_error(a) mt_form_error(a,aes_global)
/** single-thread version of mt_form_keybd() */
#define form_keybd(a, b,c,d,e,f) mt_form_keybd(a,b,c,d,e,f,aes_global)
/**@}*/

/** @addtogroup a_fsel
 *  @{
 */
/** single-thread version of mt_fsel_exinput() */
#define fsel_exinput(a,b,c,d)		mt_fsel_exinput(a,b,c,d,aes_global)
/** single-thread version of mt_fsel_input() */
#define fsel_input(a,b,c)			mt_fsel_input(a,b,c,aes_global)
/** single-thread version of mt_fsel_exinput() */
#define fsel_boxinput(a,b,c,d,e)	mt_fsel_exinput(a,b,c,d,e,aes_global)
/**@}*/

/** @addtogroup a_graf
 *  @{
 */
/** single-thread version of mt_graf_dragbox() */
#define graf_dragbox(a,b,c,d,e,f,g,h,i,j)	mt_graf_dragbox(a,b,c,d,e,f,g,h,i,j,aes_global)
/** single-thread version of mt_graf_growbox() */
#define graf_growbox(a,b,c,d, e,f,g,h)		mt_graf_growbox(a,b,c,d,e,f,g,h,aes_global)
/** single-thread version of mt_graf_growbox_grect() */
#define graf_growbox_grect(a,b)				mt_graf_growbox_grect(a,b,aes_global)
/** single-thread version of mt_graf_handle() */
#define graf_handle(a,b,c,d)				mt_graf_handle(a,b,c,d,aes_global)
/** single-thread version of mt_graf_xhandle() */
#define graf_xhandle(a,b,c,d,e)				mt_graf_xhandle(a,b,c,d,e,aes_global)
/** single-thread version of mt_graf_mbox() */
#define graf_mbox(a,b,c,d,e,f)				mt_graf_mbox(a,b,c,d,e,f,aes_global)
/** single-thread version of mt_graf_mkstate() */
#define graf_mkstate(a,b,c,d)				mt_graf_mkstate(a,b,c,d,aes_global)
/** single-thread version of mt_graf_mouse() */
#define graf_mouse(a,b)						mt_graf_mouse(a,b,aes_global)
/** single-thread version of mt_graf_rubberbox() */
#define graf_rubberbox(a,b,c,d,e,f)			mt_graf_rubberbox(a,b,c,d,e,f,aes_global)
/** single-thread version of mt_graf_multirubber() */
#define graf_multirubber(a,b,c,d,e,f,g)		mt_graf_multirubber(a,b,c,d,e,f,g,aes_global)
/** single-thread version of mt_graf_shrinkbox() */
#define graf_shrinkbox(a,b,c,d,e,f,g,h)		mt_graf_shrinkbox(a,b,c,d,e,f,g,h,aes_global)
/** single-thread version of mt_graf_shrinkbox_grect() */
#define graf_shrinkbox_grect(a,b)			mt_graf_shrinkbox_grect(a,b,aes_global)
/** single-thread version of mt_graf_slidebox() */
#define graf_slidebox(a,b,c,d)				mt_graf_slidebox(a,b,c,d,aes_global)
/** single-thread version of mt_graf_watchbox() */
#define graf_watchbox(a,b,c,d)				mt_graf_watchbox(a,b,c,d,aes_global)
/** single-thread version of mt_graf_wwatchbox() */
#define graf_wwatchbox(a,b,c,d,e)			mt_graf_wwatchbox(a,b,c,d,e,aes_global)

/* the old names */
/** single-thread version of mt_graf_mbox() */
#define graf_movebox(a,b,c,d,e,f) mt_graf_mbox(a,b,c,d,e,f,aes_global)
/** single-thread version of mt_graf_rubberbox() */
#define graf_rubbbox(a,b,c,d,e,f) mt_graf_rubberbox(a,b,c,d,e,f,aes_global)
/** single-thread version of mt_graf_rubberbox() */
#define graf_rubbox(a,b,c,d,e,f)  mt_graf_rubberbox(a,b,c,d,e,f,aes_global)
/**@}*/

/** @addtogroup a_menu
 *  @{
 */
/** single-thread version of mt_menu_attach() */
#define menu_attach(a,b,c,d)	mt_menu_attach(a,b,c,d,aes_global)
/** single-thread version of mt_menu_bar() */
#define menu_bar(a,b)			mt_menu_bar(a,b,aes_global)
/** single-thread version of mt_menu_click() */
#define menu_click(a,b)			mt_menu_click(a,b,aes_global)
/** single-thread version of mt_menu_icheck() */
#define menu_icheck(a,b,c)		mt_menu_icheck(a,b,c,aes_global)
/** single-thread version of mt_menu_ienable() */
#define menu_ienable(a,b,c)		mt_menu_ienable(a,b,c,aes_global)
/** single-thread version of mt_menu_istart() */
#define menu_istart(a,b,c,d)	mt_menu_istart(a,b,c,d,aes_global)
/** single-thread version of mt_menu_popup() */
#define menu_popup(a,b,c,d)		mt_menu_popup(a,b,c,d,aes_global)
/** single-thread version of mt_menu_register() */
#define menu_register(a,b)		mt_menu_register(a,b,aes_global)
/** single-thread version of mt_menu_settings() */
#define menu_settings(a,b)		mt_menu_settings(a,b,aes_global)
/** single-thread version of mt_menu_text() */
#define menu_text(a,b,c)		mt_menu_text(a,b,c,aes_global)
/** single-thread version of mt_menu_tnormal() */
#define menu_tnormal(a,b,c)		mt_menu_tnormal(a,b,c,aes_global)
/** single-thread version of mt_menu_unregister() */
#define menu_unregister(a)		mt_menu_unregister(a,aes_global)
/**@}*/

/** @addtogroup a_objc
 *  @{
 */
/** single-thread version of mt_objc_add() */
#define objc_add(a,b,c)					mt_objc_add(a,b,c,aes_global)
/** single-thread version of mt_objc_change() */
#define objc_change(a,b,c,d,e,f,g,h,i)	mt_objc_change(a,b,c,d,e,f,g,h,i,aes_global)
/** single-thread version of mt_objc_change_grect() */
#define objc_change_grect(a,b,c,d,e,f)		mt_objc_change_grect(a,b,c,d,e,f,aes_global)
/** single-thread version of mt_objc_delete() */
#define objc_delete(a,b)				mt_objc_delete(a,b,aes_global)
/** single-thread version of mt_objc_draw() */
#define objc_draw(a,b,c,d,e,f,g)		mt_objc_draw(a,b,c,d,e,f,g,aes_global)
/** single-thread version of mt_objc_draw_grect() */
#define objc_draw_grect(a,b,c,d)		mt_objc_draw_grect(a,b,c,d,aes_global)
/** single-thread version of mt_objc_edit() */
#define objc_edit(a,b,c,d,e)			mt_objc_edit(a,b,c,d,e,aes_global)
/** single-thread version of mt_objc_find() */
#define objc_find(a,b,c,d,e)			mt_objc_find(a,b,c,d,e,aes_global)
/** single-thread version of mt_objc_xfind() */
#define objc_xfind(a,b,c,d,e)			mt_objc_xfind(a,b,c,d,e,aes_global)
/** single-thread version of mt_objc_offset() */
#define objc_offset(a,b,c,d)			mt_objc_offset(a,b,c,d,aes_global)
/** single-thread version of mt_objc_order() */
#define objc_order(a,b,c)				mt_objc_order(a,b,c,aes_global)
/** single-thread version of mt_objc_sysvar() */
#define objc_sysvar(a,b,c,d,e,f)		mt_objc_sysvar(a,b,c,d,e,f,aes_global)
/**@}*/

/** @addtogroup a_rsrc
 *  @{
 */
/** single-thread version of mt_rsrc_free() */
#define rsrc_free() mt_rsrc_free(aes_global)
/** single-thread version of mt_rsrc_gaddr() */
#define rsrc_gaddr(a,b,c) mt_rsrc_gaddr(a,b,c,aes_global)
/** single-thread version of mt_rsrc_load() */
#define rsrc_load(a) mt_rsrc_load(a,aes_global)
/** single-thread version of mt_rsrc_obfix() */
#define rsrc_obfix(a,b) mt_rsrc_obfix(a,b,aes_global)
/** single-thread version of mt_rsrc_rcfix() */
#define rsrc_rcfix(a) mt_rsrc_rcfix(a,aes_global)
/** single-thread version of mt_rsrc_saddr() */
#define rsrc_saddr(a,b,c) mt_rsrc_saddr(a,b,c,aes_global)
/**@}*/

/** @addtogroup a_scrp
 *  @{
 */
/** single-thread version of mt_scrp_clear() */
#define scrp_clear() mt_scrp_clear(aes_global)
/** single-thread version of mt_scrp_read() */
#define scrp_read(a) mt_scrp_read(a,aes_global)
/** single-thread version of mt_scrp_write() */
#define scrp_write(a) mt_scrp_write(a,aes_global)
/**@}*/

/** @addtogroup a_shel
 *  @{
 */
/** single-thread version of mt_shel_envrn() */
#define shel_envrn(a,b) mt_shel_envrn(a,b,aes_global)
/** single-thread version of mt_shel_find() */
#define shel_find(a) mt_shel_find(a,aes_global)
/** single-thread version of mt_shel_get() */
#define shel_get(a,b) mt_shel_get(a,b,aes_global)
/** single-thread version of mt_shel_help() */
#define shel_help(a,b,c) mt_shel_help(a,b,c,aes_global)
/** single-thread version of mt_shel_put() */
#define shel_put(a,b) mt_shel_put(a,b,aes_global)
/** single-thread version of mt_shel_rdef() */
#define shel_rdef(a,b) mt_shel_rdef(a,b,aes_global)
/** single-thread version of mt_shel_read() */
#define shel_read(a,b) mt_shel_read(a,b,aes_global)
/** single-thread version of mt_shel_wdef() */
#define shel_wdef(a,b) mt_shel_wdef(a,b,aes_global)
/** single-thread version of mt_shel_write() */
#define shel_write(a,b,c,d,e) mt_shel_write(a,b,c,d,e,aes_global)
/**@}*/


/*
 * Some useful extensions
 */
/** single-thread version of mt_wind_calc_grect() */
#define wind_calc_grect(a,b,c,d) mt_wind_calc_grect(a,b,c,d,aes_global)  
/** single-thread version of mt_wind_create_grect() */
#define wind_create_grect(a,b) mt_wind_create_grect(a,b,aes_global)
/** single-thread version of mt_wind_xcreate_grect() */
#define wind_xcreate_grect(a,b,c) mt_wind_xcreate_grect(a,b,c,aes_global)
/** single-thread version of mt_wind_get_grect() */
#define wind_get_grect(a,b,c) mt_wind_get_grect(a,b,c,aes_global)
/** single-thread version of mt_wind_xget_grect() */
#define wind_xget_grect(a,b,c,d) mt_wind_xget_grect(a,b,c,d,aes_global)
/** single-thread version of mt_wind_open_grect() */
#define wind_open_grect(a,b) mt_wind_open_grect(a,b,aes_global)
/** single-thread version of mt_wind_set_grect() */
#define wind_set_grect(a,b,c) mt_wind_set_grect(a,b,c,aes_global)
/** single-thread version of mt_wind_xset_grect() */
#define wind_xset_grect(a,b,c,d) mt_wind_xset_grect(a,b,c,d,aes_global)
/** single-thread version of mt_wind_set_str() */
#define wind_set_str(a,b,c) mt_wind_set_str(a,b,c,aes_global)
/**@}*/


#endif /* AES */


__END_DECLS

#endif /* _GEMLIB_H_ */
#endif /* 0 */
