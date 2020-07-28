/* This file is part of gtk-layer-shell
 *
 * Copyright © 2010 Intel Corporation
 * Copyright © 2020 gtk-priv/scripts/code.py
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef GDK_WINDOW_IMPL_WAYLAND_PRIV_H
#define GDK_WINDOW_IMPL_WAYLAND_PRIV_H

typedef struct _GdkWindowImplWayland GdkWindowImplWayland;

// Version ID 0
// Valid for GTK v3.22.0 - v3.22.15
struct _GdkWindowImplWayland_v3_22_0
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct zxdg_surface_v6 *xdg_surface;
    struct zxdg_toplevel_v6 *xdg_toplevel;
    struct zxdg_popup_v6 *xdg_popup;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    GdkWaylandWindowExported callback;
    gpointer user_data;
    GDestroyNotify destroy_func;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
};

// Version ID 1
// Valid for GTK v3.22.16 - v3.22.17
struct _GdkWindowImplWayland_v3_22_16
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct zxdg_surface_v6 *xdg_surface;
    struct zxdg_toplevel_v6 *xdg_toplevel;
    struct zxdg_popup_v6 *xdg_popup;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
};

// Version ID 2
// Valid for GTK v3.22.18 - v3.22.24
struct _GdkWindowImplWayland_v3_22_18
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct zxdg_surface_v6 *xdg_surface;
    struct zxdg_toplevel_v6 *xdg_toplevel;
    struct zxdg_popup_v6 *xdg_popup;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// Version ID 3
// Valid for GTK v3.22.25 - v3.22.29
struct _GdkWindowImplWayland_v3_22_25
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct zxdg_surface_v6 *xdg_surface;
    struct zxdg_toplevel_v6 *xdg_toplevel;
    struct zxdg_popup_v6 *xdg_popup;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
    struct org_kde_kwin_server_decoration *server_decoration;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// Version ID 4
// Valid for GTK v3.22.30 - v3.23.0
struct _GdkWindowImplWayland_v3_22_30
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct xdg_surface *xdg_surface;
    struct xdg_toplevel *xdg_toplevel;
    struct xdg_popup *xdg_popup;
    struct zxdg_surface_v6 *zxdg_surface_v6;
    struct zxdg_toplevel_v6 *zxdg_toplevel_v6;
    struct zxdg_popup_v6 *zxdg_popup_v6;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
    struct org_kde_kwin_server_decoration *server_decoration;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// Version ID 5
// Valid for GTK v3.23.1 - v3.23.2
struct _GdkWindowImplWayland_v3_23_1
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct xdg_surface *xdg_surface;
    struct xdg_toplevel *xdg_toplevel;
    struct xdg_popup *xdg_popup;
    struct zxdg_surface_v6 *zxdg_surface_v6;
    struct zxdg_toplevel_v6 *zxdg_toplevel_v6;
    struct zxdg_popup_v6 *zxdg_popup_v6;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
    struct org_kde_kwin_server_decoration *server_decoration;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  unsigned int using_csd : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// Version ID 6
// Valid for GTK v3.23.3 - v3.24.3
struct _GdkWindowImplWayland_v3_23_3
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct xdg_surface *xdg_surface;
    struct xdg_toplevel *xdg_toplevel;
    struct xdg_popup *xdg_popup;
    struct zxdg_surface_v6 *zxdg_surface_v6;
    struct zxdg_toplevel_v6 *zxdg_toplevel_v6;
    struct zxdg_popup_v6 *zxdg_popup_v6;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
    struct org_kde_kwin_server_decoration *server_decoration;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  unsigned int using_csd : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  int subsurface_x;
  int subsurface_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// Version ID 7
// Valid for GTK v3.24.4 - v3.24.16
struct _GdkWindowImplWayland_v3_24_4
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct xdg_surface *xdg_surface;
    struct xdg_toplevel *xdg_toplevel;
    struct xdg_popup *xdg_popup;
    struct zxdg_surface_v6 *zxdg_surface_v6;
    struct zxdg_toplevel_v6 *zxdg_toplevel_v6;
    struct zxdg_popup_v6 *zxdg_popup_v6;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
    struct org_kde_kwin_server_decoration *server_decoration;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int configuring_popup : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  unsigned int using_csd : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  int subsurface_x;
  int subsurface_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// Version ID 8
// Valid for GTK v3.24.17 - v3.24.21
struct _GdkWindowImplWayland_v3_24_17
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct xdg_surface *xdg_surface;
    struct xdg_toplevel *xdg_toplevel;
    struct xdg_popup *xdg_popup;
    struct zxdg_surface_v6 *zxdg_surface_v6;
    struct zxdg_toplevel_v6 *zxdg_toplevel_v6;
    struct zxdg_popup_v6 *zxdg_popup_v6;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
    struct org_kde_kwin_server_decoration *server_decoration;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int configuring_popup : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  unsigned int using_csd : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  int subsurface_x;
  int subsurface_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  int unconfigured_width;
  int unconfigured_height;
  int fixed_size_width;
  int fixed_size_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// Version ID 9
// Valid for GTK v3.24.22 (unreleased)
struct _GdkWindowImplWayland_v3_24_22
{
  struct _GdkWindowImpl_v3_22_0 parent_instance;
  GdkWindow *wrapper;
  struct {
    GSList *outputs;
    struct wl_surface *wl_surface;
    struct xdg_surface *xdg_surface;
    struct xdg_toplevel *xdg_toplevel;
    struct xdg_popup *xdg_popup;
    struct zxdg_surface_v6 *zxdg_surface_v6;
    struct zxdg_toplevel_v6 *zxdg_toplevel_v6;
    struct zxdg_popup_v6 *zxdg_popup_v6;
    struct gtk_surface1 *gtk_surface;
    struct wl_subsurface *wl_subsurface;
    struct wl_egl_window *egl_window;
    struct wl_egl_window *dummy_egl_window;
    struct zxdg_exported_v1 *xdg_exported;
    struct org_kde_kwin_server_decoration *server_decoration;
  } display_server;
  EGLSurface egl_surface;
  EGLSurface dummy_egl_surface;
  unsigned int initial_configure_received : 1;
  unsigned int configuring_popup : 1;
  unsigned int mapped : 1;
  unsigned int use_custom_surface : 1;
  unsigned int pending_buffer_attached : 1;
  unsigned int pending_commit : 1;
  unsigned int awaiting_frame : 1;
  unsigned int using_csd : 1;
  GdkWindowTypeHint hint;
  GdkWindow *transient_for;
  GdkWindow *popup_parent;
  PositionMethod position_method;
  cairo_surface_t *staging_cairo_surface;
  cairo_surface_t *committed_cairo_surface;
  cairo_surface_t *backfill_cairo_surface;
  int pending_buffer_offset_x;
  int pending_buffer_offset_y;
  int subsurface_x;
  int subsurface_y;
  gchar *title;
  struct {
    gboolean was_set;
    gchar *application_id;
    gchar *app_menu_path;
    gchar *menubar_path;
    gchar *window_object_path;
    gchar *application_object_path;
    gchar *unique_bus_name;
  } application;
  GdkGeometry geometry_hints;
  GdkWindowHints geometry_mask;
  GdkSeat *grab_input_seat;
  gint64 pending_frame_counter;
  guint32 scale;
  int margin_left;
  int margin_right;
  int margin_top;
  int margin_bottom;
  gboolean margin_dirty;
  int initial_fullscreen_monitor;
  cairo_region_t *opaque_region;
  gboolean opaque_region_dirty;
  cairo_region_t *input_region;
  gboolean input_region_dirty;
  cairo_region_t *staged_updates_region;
  int saved_width;
  int saved_height;
  gboolean saved_size_changed;
  int unconfigured_width;
  int unconfigured_height;
  int fixed_size_width;
  int fixed_size_height;
  gulong parent_surface_committed_handler;
  struct {
    GdkRectangle rect;
    GdkGravity rect_anchor;
    GdkGravity window_anchor;
    GdkAnchorHints anchor_hints;
    gint rect_anchor_dx;
    gint rect_anchor_dy;
  } pending_move_to_rect;
  struct {
    int width;
    int height;
    GdkWindowState state;
  } pending;
  struct {
    char *handle;
    int export_count;
    GList *closures;
    guint idle_source_id;
  } exported;
  struct zxdg_imported_v1 *imported_transient_for;
  GHashTable *shortcuts_inhibitors;
};

// For internal use only
int gdk_window_impl_wayland_priv_get_version_id() {
  static int version_id = -1;
  
  if (version_id == -1) {
    if (gtk_get_major_version() != 3) {
      g_error("gtk-layer-shell only supports GTK3");
      g_abort();
    }
  
    int combo = gtk_get_minor_version() * 1000 + gtk_get_micro_version();
  
    switch (combo) {
      case 22000:
      case 22001:
      case 22002:
      case 22003:
      case 22004:
      case 22005:
      case 22006:
      case 22007:
      case 22008:
      case 22009:
      case 22010:
      case 22011:
      case 22012:
      case 22013:
      case 22014:
      case 22015:
      case 22016:
      case 22017:
      case 22018:
      case 22019:
      case 22020:
      case 22021:
      case 22022:
      case 22023:
      case 22024:
      case 22025:
      case 22026:
      case 22027:
      case 22028:
      case 22029:
      case 22030:
      case 23000:
      case 23001:
      case 23002:
      case 23003:
      case 24000:
      case 24001:
      case 24002:
      case 24003:
      case 24004:
      case 24005:
      case 24006:
      case 24007:
      case 24008:
      case 24009:
      case 24010:
      case 24011:
      case 24012:
      case 24013:
      case 24014:
      case 24015:
      case 24016:
      case 24017:
      case 24018:
      case 24020:
      case 24021:
        break;
  
      default:
        g_warning(
          "gtk-layer-shell was not compiled with support for GTK v%d.%d.%d, program may crash",
          gtk_get_major_version(),
          gtk_get_minor_version(),
          gtk_get_micro_version());
    }
  
    if (combo >= 24022) {
      version_id = 9;
    } else if (combo >= 24017) {
      version_id = 8;
    } else if (combo >= 24004) {
      version_id = 7;
    } else if (combo >= 23003) {
      version_id = 6;
    } else if (combo >= 23001) {
      version_id = 5;
    } else if (combo >= 22030) {
      version_id = 4;
    } else if (combo >= 22025) {
      version_id = 3;
    } else if (combo >= 22018) {
      version_id = 2;
    } else if (combo >= 22016) {
      version_id = 1;
    } else {
      version_id = 0;
    }
  }
  
  return version_id;
}

// GdkWindowImplWayland::parent_instance

GdkWindowImpl * gdk_window_impl_wayland_priv_get_parent_instance_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->parent_instance;
    case 1: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->parent_instance;
    case 2: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->parent_instance;
    case 3: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->parent_instance;
    case 4: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->parent_instance;
    case 5: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->parent_instance;
    case 6: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->parent_instance;
    case 7: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->parent_instance;
    case 8: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->parent_instance;
    case 9: return (GdkWindowImpl *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->parent_instance;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::wrapper

GdkWindow * gdk_window_impl_wayland_priv_get_wrapper(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->wrapper;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->wrapper;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->wrapper;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->wrapper;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->wrapper;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->wrapper;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->wrapper;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->wrapper;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->wrapper;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->wrapper;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_wrapper(GdkWindowImplWayland * self, GdkWindow * wrapper) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->wrapper = wrapper; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->wrapper = wrapper; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->wrapper = wrapper; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->wrapper = wrapper; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->wrapper = wrapper; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->wrapper = wrapper; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->wrapper = wrapper; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->wrapper = wrapper; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->wrapper = wrapper; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->wrapper = wrapper; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.outputs

GSList * gdk_window_impl_wayland_priv_get_display_server_outputs(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.outputs;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.outputs;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.outputs;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.outputs;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.outputs;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.outputs;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.outputs;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.outputs;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.outputs;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.outputs;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_outputs(GdkWindowImplWayland * self, GSList * display_server_outputs) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.outputs = display_server_outputs; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.outputs = display_server_outputs; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.outputs = display_server_outputs; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.outputs = display_server_outputs; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.outputs = display_server_outputs; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.outputs = display_server_outputs; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.outputs = display_server_outputs; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.outputs = display_server_outputs; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.outputs = display_server_outputs; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.outputs = display_server_outputs; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.wl_surface

struct wl_surface * gdk_window_impl_wayland_priv_get_display_server_wl_surface(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.wl_surface;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.wl_surface;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.wl_surface;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.wl_surface;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.wl_surface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.wl_surface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.wl_surface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.wl_surface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.wl_surface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.wl_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_wl_surface(GdkWindowImplWayland * self, struct wl_surface * display_server_wl_surface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.wl_surface = display_server_wl_surface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.wl_surface = display_server_wl_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.gtk_surface

struct gtk_surface1 * gdk_window_impl_wayland_priv_get_display_server_gtk_surface(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.gtk_surface;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.gtk_surface;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.gtk_surface;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.gtk_surface;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.gtk_surface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.gtk_surface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.gtk_surface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.gtk_surface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.gtk_surface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.gtk_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_gtk_surface(GdkWindowImplWayland * self, struct gtk_surface1 * display_server_gtk_surface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.gtk_surface = display_server_gtk_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.wl_subsurface

struct wl_subsurface * gdk_window_impl_wayland_priv_get_display_server_wl_subsurface(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.wl_subsurface;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.wl_subsurface;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.wl_subsurface;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.wl_subsurface;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.wl_subsurface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.wl_subsurface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.wl_subsurface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.wl_subsurface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.wl_subsurface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.wl_subsurface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_wl_subsurface(GdkWindowImplWayland * self, struct wl_subsurface * display_server_wl_subsurface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.wl_subsurface = display_server_wl_subsurface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.egl_window

struct wl_egl_window * gdk_window_impl_wayland_priv_get_display_server_egl_window(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.egl_window;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.egl_window;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.egl_window;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.egl_window;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.egl_window;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.egl_window;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.egl_window;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.egl_window;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.egl_window;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.egl_window;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_egl_window(GdkWindowImplWayland * self, struct wl_egl_window * display_server_egl_window) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.egl_window = display_server_egl_window; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.egl_window = display_server_egl_window; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.egl_window = display_server_egl_window; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.egl_window = display_server_egl_window; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.egl_window = display_server_egl_window; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.egl_window = display_server_egl_window; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.egl_window = display_server_egl_window; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.egl_window = display_server_egl_window; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.egl_window = display_server_egl_window; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.egl_window = display_server_egl_window; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.dummy_egl_window

struct wl_egl_window * gdk_window_impl_wayland_priv_get_display_server_dummy_egl_window(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.dummy_egl_window;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.dummy_egl_window;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.dummy_egl_window;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.dummy_egl_window;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.dummy_egl_window;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.dummy_egl_window;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.dummy_egl_window;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.dummy_egl_window;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.dummy_egl_window;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.dummy_egl_window;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_dummy_egl_window(GdkWindowImplWayland * self, struct wl_egl_window * display_server_dummy_egl_window) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.dummy_egl_window = display_server_dummy_egl_window; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.xdg_exported

struct zxdg_exported_v1 * gdk_window_impl_wayland_priv_get_display_server_xdg_exported(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.xdg_exported;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.xdg_exported;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.xdg_exported;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.xdg_exported;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_exported;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_exported;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_exported;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_exported;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_exported;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_exported;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_xdg_exported(GdkWindowImplWayland * self, struct zxdg_exported_v1 * display_server_xdg_exported) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_exported = display_server_xdg_exported; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::egl_surface

EGLSurface * gdk_window_impl_wayland_priv_get_egl_surface_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->egl_surface;
    case 1: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->egl_surface;
    case 2: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->egl_surface;
    case 3: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->egl_surface;
    case 4: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->egl_surface;
    case 5: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->egl_surface;
    case 6: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->egl_surface;
    case 7: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->egl_surface;
    case 8: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->egl_surface;
    case 9: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->egl_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::dummy_egl_surface

EGLSurface * gdk_window_impl_wayland_priv_get_dummy_egl_surface_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->dummy_egl_surface;
    case 1: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->dummy_egl_surface;
    case 2: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->dummy_egl_surface;
    case 3: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->dummy_egl_surface;
    case 4: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->dummy_egl_surface;
    case 5: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->dummy_egl_surface;
    case 6: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->dummy_egl_surface;
    case 7: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->dummy_egl_surface;
    case 8: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->dummy_egl_surface;
    case 9: return (EGLSurface *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->dummy_egl_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::initial_configure_received

unsigned int gdk_window_impl_wayland_priv_get_initial_configure_received(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->initial_configure_received;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->initial_configure_received;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->initial_configure_received;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->initial_configure_received;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->initial_configure_received;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->initial_configure_received;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->initial_configure_received;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->initial_configure_received;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->initial_configure_received;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->initial_configure_received;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_initial_configure_received(GdkWindowImplWayland * self, unsigned int initial_configure_received) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->initial_configure_received = initial_configure_received; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->initial_configure_received = initial_configure_received; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->initial_configure_received = initial_configure_received; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->initial_configure_received = initial_configure_received; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->initial_configure_received = initial_configure_received; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->initial_configure_received = initial_configure_received; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->initial_configure_received = initial_configure_received; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->initial_configure_received = initial_configure_received; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->initial_configure_received = initial_configure_received; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->initial_configure_received = initial_configure_received; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::mapped

unsigned int gdk_window_impl_wayland_priv_get_mapped(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->mapped;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->mapped;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->mapped;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->mapped;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->mapped;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->mapped;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->mapped;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->mapped;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->mapped;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->mapped;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_mapped(GdkWindowImplWayland * self, unsigned int mapped) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->mapped = mapped; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->mapped = mapped; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->mapped = mapped; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->mapped = mapped; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->mapped = mapped; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->mapped = mapped; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->mapped = mapped; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->mapped = mapped; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->mapped = mapped; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->mapped = mapped; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::use_custom_surface

unsigned int gdk_window_impl_wayland_priv_get_use_custom_surface(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->use_custom_surface;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->use_custom_surface;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->use_custom_surface;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->use_custom_surface;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->use_custom_surface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->use_custom_surface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->use_custom_surface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->use_custom_surface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->use_custom_surface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->use_custom_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_use_custom_surface(GdkWindowImplWayland * self, unsigned int use_custom_surface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->use_custom_surface = use_custom_surface; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->use_custom_surface = use_custom_surface; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->use_custom_surface = use_custom_surface; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->use_custom_surface = use_custom_surface; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->use_custom_surface = use_custom_surface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->use_custom_surface = use_custom_surface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->use_custom_surface = use_custom_surface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->use_custom_surface = use_custom_surface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->use_custom_surface = use_custom_surface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->use_custom_surface = use_custom_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_buffer_attached

unsigned int gdk_window_impl_wayland_priv_get_pending_buffer_attached(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_buffer_attached;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_buffer_attached;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_buffer_attached;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_buffer_attached;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_buffer_attached;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_buffer_attached;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_buffer_attached;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_buffer_attached;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_buffer_attached;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_buffer_attached;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_buffer_attached(GdkWindowImplWayland * self, unsigned int pending_buffer_attached) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_buffer_attached = pending_buffer_attached; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_buffer_attached = pending_buffer_attached; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_commit

unsigned int gdk_window_impl_wayland_priv_get_pending_commit(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_commit;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_commit;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_commit;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_commit;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_commit;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_commit;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_commit;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_commit;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_commit;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_commit;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_commit(GdkWindowImplWayland * self, unsigned int pending_commit) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_commit = pending_commit; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_commit = pending_commit; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_commit = pending_commit; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_commit = pending_commit; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_commit = pending_commit; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_commit = pending_commit; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_commit = pending_commit; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_commit = pending_commit; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_commit = pending_commit; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_commit = pending_commit; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::awaiting_frame

unsigned int gdk_window_impl_wayland_priv_get_awaiting_frame(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->awaiting_frame;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->awaiting_frame;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->awaiting_frame;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->awaiting_frame;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->awaiting_frame;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->awaiting_frame;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->awaiting_frame;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->awaiting_frame;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->awaiting_frame;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->awaiting_frame;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_awaiting_frame(GdkWindowImplWayland * self, unsigned int awaiting_frame) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->awaiting_frame = awaiting_frame; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->awaiting_frame = awaiting_frame; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->awaiting_frame = awaiting_frame; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->awaiting_frame = awaiting_frame; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->awaiting_frame = awaiting_frame; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->awaiting_frame = awaiting_frame; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->awaiting_frame = awaiting_frame; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->awaiting_frame = awaiting_frame; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->awaiting_frame = awaiting_frame; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->awaiting_frame = awaiting_frame; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::hint

GdkWindowTypeHint * gdk_window_impl_wayland_priv_get_hint_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->hint;
    case 1: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->hint;
    case 2: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->hint;
    case 3: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->hint;
    case 4: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->hint;
    case 5: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->hint;
    case 6: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->hint;
    case 7: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->hint;
    case 8: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->hint;
    case 9: return (GdkWindowTypeHint *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::transient_for

GdkWindow * gdk_window_impl_wayland_priv_get_transient_for(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->transient_for;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->transient_for;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->transient_for;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->transient_for;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->transient_for;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->transient_for;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->transient_for;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->transient_for;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->transient_for;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->transient_for;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_transient_for(GdkWindowImplWayland * self, GdkWindow * transient_for) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->transient_for = transient_for; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->transient_for = transient_for; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->transient_for = transient_for; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->transient_for = transient_for; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->transient_for = transient_for; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->transient_for = transient_for; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->transient_for = transient_for; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->transient_for = transient_for; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->transient_for = transient_for; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->transient_for = transient_for; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::popup_parent

GdkWindow * gdk_window_impl_wayland_priv_get_popup_parent(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->popup_parent;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->popup_parent;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->popup_parent;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->popup_parent;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->popup_parent;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->popup_parent;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->popup_parent;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->popup_parent;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->popup_parent;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->popup_parent;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_popup_parent(GdkWindowImplWayland * self, GdkWindow * popup_parent) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->popup_parent = popup_parent; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->popup_parent = popup_parent; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->popup_parent = popup_parent; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->popup_parent = popup_parent; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->popup_parent = popup_parent; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->popup_parent = popup_parent; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->popup_parent = popup_parent; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->popup_parent = popup_parent; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->popup_parent = popup_parent; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->popup_parent = popup_parent; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::position_method

PositionMethod * gdk_window_impl_wayland_priv_get_position_method_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->position_method;
    case 1: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->position_method;
    case 2: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->position_method;
    case 3: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->position_method;
    case 4: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->position_method;
    case 5: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->position_method;
    case 6: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->position_method;
    case 7: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->position_method;
    case 8: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->position_method;
    case 9: return (PositionMethod *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->position_method;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::staging_cairo_surface

cairo_surface_t * gdk_window_impl_wayland_priv_get_staging_cairo_surface(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->staging_cairo_surface;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->staging_cairo_surface;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->staging_cairo_surface;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->staging_cairo_surface;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->staging_cairo_surface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->staging_cairo_surface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->staging_cairo_surface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->staging_cairo_surface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->staging_cairo_surface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->staging_cairo_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_staging_cairo_surface(GdkWindowImplWayland * self, cairo_surface_t * staging_cairo_surface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->staging_cairo_surface = staging_cairo_surface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->staging_cairo_surface = staging_cairo_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::committed_cairo_surface

cairo_surface_t * gdk_window_impl_wayland_priv_get_committed_cairo_surface(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->committed_cairo_surface;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->committed_cairo_surface;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->committed_cairo_surface;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->committed_cairo_surface;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->committed_cairo_surface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->committed_cairo_surface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->committed_cairo_surface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->committed_cairo_surface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->committed_cairo_surface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->committed_cairo_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_committed_cairo_surface(GdkWindowImplWayland * self, cairo_surface_t * committed_cairo_surface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->committed_cairo_surface = committed_cairo_surface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->committed_cairo_surface = committed_cairo_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::backfill_cairo_surface

cairo_surface_t * gdk_window_impl_wayland_priv_get_backfill_cairo_surface(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->backfill_cairo_surface;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->backfill_cairo_surface;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->backfill_cairo_surface;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->backfill_cairo_surface;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->backfill_cairo_surface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->backfill_cairo_surface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->backfill_cairo_surface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->backfill_cairo_surface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->backfill_cairo_surface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->backfill_cairo_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_backfill_cairo_surface(GdkWindowImplWayland * self, cairo_surface_t * backfill_cairo_surface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->backfill_cairo_surface = backfill_cairo_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_buffer_offset_x

int gdk_window_impl_wayland_priv_get_pending_buffer_offset_x(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_buffer_offset_x;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_buffer_offset_x;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_buffer_offset_x;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_buffer_offset_x;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_buffer_offset_x;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_buffer_offset_x;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_buffer_offset_x;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_buffer_offset_x;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_buffer_offset_x;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_buffer_offset_x;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_buffer_offset_x(GdkWindowImplWayland * self, int pending_buffer_offset_x) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_buffer_offset_x = pending_buffer_offset_x; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_buffer_offset_y

int gdk_window_impl_wayland_priv_get_pending_buffer_offset_y(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_buffer_offset_y;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_buffer_offset_y;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_buffer_offset_y;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_buffer_offset_y;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_buffer_offset_y;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_buffer_offset_y;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_buffer_offset_y;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_buffer_offset_y;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_buffer_offset_y;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_buffer_offset_y;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_buffer_offset_y(GdkWindowImplWayland * self, int pending_buffer_offset_y) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_buffer_offset_y = pending_buffer_offset_y; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::title

gchar * gdk_window_impl_wayland_priv_get_title(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->title;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->title;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->title;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->title;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->title;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->title;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->title;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->title;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->title;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->title;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_title(GdkWindowImplWayland * self, gchar * title) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->title = title; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->title = title; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->title = title; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->title = title; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->title = title; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->title = title; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->title = title; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->title = title; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->title = title; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->title = title; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::application.was_set

gboolean gdk_window_impl_wayland_priv_get_application_was_set(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.was_set;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.was_set;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.was_set;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.was_set;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.was_set;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.was_set;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.was_set;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.was_set;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.was_set;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.was_set;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_application_was_set(GdkWindowImplWayland * self, gboolean application_was_set) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.was_set = application_was_set; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.was_set = application_was_set; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.was_set = application_was_set; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.was_set = application_was_set; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.was_set = application_was_set; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.was_set = application_was_set; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.was_set = application_was_set; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.was_set = application_was_set; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.was_set = application_was_set; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.was_set = application_was_set; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::application.application_id

gchar * gdk_window_impl_wayland_priv_get_application_application_id(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.application_id;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.application_id;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.application_id;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.application_id;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.application_id;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.application_id;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.application_id;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.application_id;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.application_id;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.application_id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_application_application_id(GdkWindowImplWayland * self, gchar * application_application_id) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.application_id = application_application_id; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.application_id = application_application_id; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.application_id = application_application_id; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.application_id = application_application_id; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.application_id = application_application_id; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.application_id = application_application_id; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.application_id = application_application_id; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.application_id = application_application_id; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.application_id = application_application_id; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.application_id = application_application_id; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::application.app_menu_path

gchar * gdk_window_impl_wayland_priv_get_application_app_menu_path(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.app_menu_path;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.app_menu_path;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.app_menu_path;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.app_menu_path;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.app_menu_path;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.app_menu_path;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.app_menu_path;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.app_menu_path;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.app_menu_path;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.app_menu_path;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_application_app_menu_path(GdkWindowImplWayland * self, gchar * application_app_menu_path) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.app_menu_path = application_app_menu_path; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.app_menu_path = application_app_menu_path; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.app_menu_path = application_app_menu_path; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.app_menu_path = application_app_menu_path; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.app_menu_path = application_app_menu_path; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.app_menu_path = application_app_menu_path; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.app_menu_path = application_app_menu_path; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.app_menu_path = application_app_menu_path; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.app_menu_path = application_app_menu_path; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.app_menu_path = application_app_menu_path; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::application.menubar_path

gchar * gdk_window_impl_wayland_priv_get_application_menubar_path(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.menubar_path;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.menubar_path;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.menubar_path;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.menubar_path;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.menubar_path;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.menubar_path;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.menubar_path;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.menubar_path;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.menubar_path;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.menubar_path;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_application_menubar_path(GdkWindowImplWayland * self, gchar * application_menubar_path) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.menubar_path = application_menubar_path; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.menubar_path = application_menubar_path; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.menubar_path = application_menubar_path; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.menubar_path = application_menubar_path; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.menubar_path = application_menubar_path; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.menubar_path = application_menubar_path; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.menubar_path = application_menubar_path; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.menubar_path = application_menubar_path; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.menubar_path = application_menubar_path; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.menubar_path = application_menubar_path; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::application.window_object_path

gchar * gdk_window_impl_wayland_priv_get_application_window_object_path(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.window_object_path;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.window_object_path;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.window_object_path;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.window_object_path;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.window_object_path;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.window_object_path;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.window_object_path;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.window_object_path;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.window_object_path;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.window_object_path;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_application_window_object_path(GdkWindowImplWayland * self, gchar * application_window_object_path) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.window_object_path = application_window_object_path; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.window_object_path = application_window_object_path; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.window_object_path = application_window_object_path; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.window_object_path = application_window_object_path; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.window_object_path = application_window_object_path; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.window_object_path = application_window_object_path; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.window_object_path = application_window_object_path; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.window_object_path = application_window_object_path; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.window_object_path = application_window_object_path; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.window_object_path = application_window_object_path; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::application.application_object_path

gchar * gdk_window_impl_wayland_priv_get_application_application_object_path(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.application_object_path;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.application_object_path;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.application_object_path;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.application_object_path;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.application_object_path;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.application_object_path;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.application_object_path;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.application_object_path;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.application_object_path;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.application_object_path;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_application_application_object_path(GdkWindowImplWayland * self, gchar * application_application_object_path) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.application_object_path = application_application_object_path; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.application_object_path = application_application_object_path; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.application_object_path = application_application_object_path; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.application_object_path = application_application_object_path; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.application_object_path = application_application_object_path; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.application_object_path = application_application_object_path; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.application_object_path = application_application_object_path; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.application_object_path = application_application_object_path; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.application_object_path = application_application_object_path; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.application_object_path = application_application_object_path; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::application.unique_bus_name

gchar * gdk_window_impl_wayland_priv_get_application_unique_bus_name(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.unique_bus_name;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.unique_bus_name;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.unique_bus_name;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.unique_bus_name;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.unique_bus_name;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.unique_bus_name;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.unique_bus_name;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.unique_bus_name;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.unique_bus_name;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.unique_bus_name;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_application_unique_bus_name(GdkWindowImplWayland * self, gchar * application_unique_bus_name) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->application.unique_bus_name = application_unique_bus_name; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->application.unique_bus_name = application_unique_bus_name; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::geometry_hints

GdkGeometry * gdk_window_impl_wayland_priv_get_geometry_hints_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->geometry_hints;
    case 1: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->geometry_hints;
    case 2: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->geometry_hints;
    case 3: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->geometry_hints;
    case 4: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->geometry_hints;
    case 5: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->geometry_hints;
    case 6: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->geometry_hints;
    case 7: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->geometry_hints;
    case 8: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->geometry_hints;
    case 9: return (GdkGeometry *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->geometry_hints;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::geometry_mask

GdkWindowHints * gdk_window_impl_wayland_priv_get_geometry_mask_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->geometry_mask;
    case 1: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->geometry_mask;
    case 2: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->geometry_mask;
    case 3: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->geometry_mask;
    case 4: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->geometry_mask;
    case 5: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->geometry_mask;
    case 6: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->geometry_mask;
    case 7: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->geometry_mask;
    case 8: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->geometry_mask;
    case 9: return (GdkWindowHints *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->geometry_mask;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::grab_input_seat

GdkSeat * gdk_window_impl_wayland_priv_get_grab_input_seat(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->grab_input_seat;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->grab_input_seat;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->grab_input_seat;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->grab_input_seat;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->grab_input_seat;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->grab_input_seat;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->grab_input_seat;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->grab_input_seat;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->grab_input_seat;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->grab_input_seat;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_grab_input_seat(GdkWindowImplWayland * self, GdkSeat * grab_input_seat) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->grab_input_seat = grab_input_seat; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->grab_input_seat = grab_input_seat; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->grab_input_seat = grab_input_seat; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->grab_input_seat = grab_input_seat; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->grab_input_seat = grab_input_seat; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->grab_input_seat = grab_input_seat; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->grab_input_seat = grab_input_seat; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->grab_input_seat = grab_input_seat; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->grab_input_seat = grab_input_seat; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->grab_input_seat = grab_input_seat; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_frame_counter

gint64 * gdk_window_impl_wayland_priv_get_pending_frame_counter_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (gint64 *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_frame_counter;
    case 1: return (gint64 *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_frame_counter;
    case 2: return (gint64 *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_frame_counter;
    case 3: return (gint64 *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_frame_counter;
    case 4: return (gint64 *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_frame_counter;
    case 5: return (gint64 *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_frame_counter;
    case 6: return (gint64 *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_frame_counter;
    case 7: return (gint64 *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_frame_counter;
    case 8: return (gint64 *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_frame_counter;
    case 9: return (gint64 *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_frame_counter;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::scale

guint32 * gdk_window_impl_wayland_priv_get_scale_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (guint32 *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->scale;
    case 1: return (guint32 *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->scale;
    case 2: return (guint32 *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->scale;
    case 3: return (guint32 *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->scale;
    case 4: return (guint32 *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->scale;
    case 5: return (guint32 *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->scale;
    case 6: return (guint32 *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->scale;
    case 7: return (guint32 *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->scale;
    case 8: return (guint32 *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->scale;
    case 9: return (guint32 *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->scale;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::margin_left

int gdk_window_impl_wayland_priv_get_margin_left(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_left;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_left;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_left;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_left;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_left;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_left;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_left;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_left;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_left;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_left;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_margin_left(GdkWindowImplWayland * self, int margin_left) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_left = margin_left; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_left = margin_left; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_left = margin_left; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_left = margin_left; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_left = margin_left; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_left = margin_left; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_left = margin_left; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_left = margin_left; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_left = margin_left; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_left = margin_left; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::margin_right

int gdk_window_impl_wayland_priv_get_margin_right(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_right;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_right;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_right;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_right;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_right;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_right;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_right;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_right;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_right;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_right;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_margin_right(GdkWindowImplWayland * self, int margin_right) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_right = margin_right; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_right = margin_right; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_right = margin_right; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_right = margin_right; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_right = margin_right; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_right = margin_right; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_right = margin_right; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_right = margin_right; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_right = margin_right; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_right = margin_right; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::margin_top

int gdk_window_impl_wayland_priv_get_margin_top(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_top;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_top;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_top;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_top;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_top;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_top;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_top;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_top;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_top;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_top;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_margin_top(GdkWindowImplWayland * self, int margin_top) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_top = margin_top; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_top = margin_top; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_top = margin_top; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_top = margin_top; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_top = margin_top; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_top = margin_top; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_top = margin_top; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_top = margin_top; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_top = margin_top; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_top = margin_top; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::margin_bottom

int gdk_window_impl_wayland_priv_get_margin_bottom(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_bottom;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_bottom;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_bottom;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_bottom;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_bottom;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_bottom;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_bottom;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_bottom;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_bottom;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_bottom;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_margin_bottom(GdkWindowImplWayland * self, int margin_bottom) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_bottom = margin_bottom; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_bottom = margin_bottom; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_bottom = margin_bottom; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_bottom = margin_bottom; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_bottom = margin_bottom; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_bottom = margin_bottom; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_bottom = margin_bottom; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_bottom = margin_bottom; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_bottom = margin_bottom; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_bottom = margin_bottom; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::margin_dirty

gboolean gdk_window_impl_wayland_priv_get_margin_dirty(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_dirty;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_dirty;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_dirty;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_dirty;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_dirty;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_dirty;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_dirty;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_dirty;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_dirty;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_dirty;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_margin_dirty(GdkWindowImplWayland * self, gboolean margin_dirty) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->margin_dirty = margin_dirty; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->margin_dirty = margin_dirty; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->margin_dirty = margin_dirty; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->margin_dirty = margin_dirty; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->margin_dirty = margin_dirty; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->margin_dirty = margin_dirty; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->margin_dirty = margin_dirty; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->margin_dirty = margin_dirty; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->margin_dirty = margin_dirty; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->margin_dirty = margin_dirty; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::initial_fullscreen_monitor

int gdk_window_impl_wayland_priv_get_initial_fullscreen_monitor(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->initial_fullscreen_monitor;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->initial_fullscreen_monitor;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->initial_fullscreen_monitor;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->initial_fullscreen_monitor;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->initial_fullscreen_monitor;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->initial_fullscreen_monitor;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->initial_fullscreen_monitor;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->initial_fullscreen_monitor;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->initial_fullscreen_monitor;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->initial_fullscreen_monitor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_initial_fullscreen_monitor(GdkWindowImplWayland * self, int initial_fullscreen_monitor) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->initial_fullscreen_monitor = initial_fullscreen_monitor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::opaque_region

cairo_region_t * gdk_window_impl_wayland_priv_get_opaque_region(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->opaque_region;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->opaque_region;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->opaque_region;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->opaque_region;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->opaque_region;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->opaque_region;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->opaque_region;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->opaque_region;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->opaque_region;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->opaque_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_opaque_region(GdkWindowImplWayland * self, cairo_region_t * opaque_region) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->opaque_region = opaque_region; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->opaque_region = opaque_region; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->opaque_region = opaque_region; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->opaque_region = opaque_region; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->opaque_region = opaque_region; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->opaque_region = opaque_region; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->opaque_region = opaque_region; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->opaque_region = opaque_region; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->opaque_region = opaque_region; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->opaque_region = opaque_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::opaque_region_dirty

gboolean gdk_window_impl_wayland_priv_get_opaque_region_dirty(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->opaque_region_dirty;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->opaque_region_dirty;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->opaque_region_dirty;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->opaque_region_dirty;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->opaque_region_dirty;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->opaque_region_dirty;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->opaque_region_dirty;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->opaque_region_dirty;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->opaque_region_dirty;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->opaque_region_dirty;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_opaque_region_dirty(GdkWindowImplWayland * self, gboolean opaque_region_dirty) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->opaque_region_dirty = opaque_region_dirty; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->opaque_region_dirty = opaque_region_dirty; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::input_region

cairo_region_t * gdk_window_impl_wayland_priv_get_input_region(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->input_region;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->input_region;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->input_region;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->input_region;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->input_region;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->input_region;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->input_region;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->input_region;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->input_region;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->input_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_input_region(GdkWindowImplWayland * self, cairo_region_t * input_region) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->input_region = input_region; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->input_region = input_region; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->input_region = input_region; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->input_region = input_region; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->input_region = input_region; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->input_region = input_region; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->input_region = input_region; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->input_region = input_region; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->input_region = input_region; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->input_region = input_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::input_region_dirty

gboolean gdk_window_impl_wayland_priv_get_input_region_dirty(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->input_region_dirty;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->input_region_dirty;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->input_region_dirty;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->input_region_dirty;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->input_region_dirty;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->input_region_dirty;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->input_region_dirty;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->input_region_dirty;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->input_region_dirty;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->input_region_dirty;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_input_region_dirty(GdkWindowImplWayland * self, gboolean input_region_dirty) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->input_region_dirty = input_region_dirty; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->input_region_dirty = input_region_dirty; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->input_region_dirty = input_region_dirty; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->input_region_dirty = input_region_dirty; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->input_region_dirty = input_region_dirty; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->input_region_dirty = input_region_dirty; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->input_region_dirty = input_region_dirty; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->input_region_dirty = input_region_dirty; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->input_region_dirty = input_region_dirty; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->input_region_dirty = input_region_dirty; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::staged_updates_region

cairo_region_t * gdk_window_impl_wayland_priv_get_staged_updates_region(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->staged_updates_region;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->staged_updates_region;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->staged_updates_region;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->staged_updates_region;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->staged_updates_region;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->staged_updates_region;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->staged_updates_region;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->staged_updates_region;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->staged_updates_region;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->staged_updates_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_staged_updates_region(GdkWindowImplWayland * self, cairo_region_t * staged_updates_region) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->staged_updates_region = staged_updates_region; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->staged_updates_region = staged_updates_region; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->staged_updates_region = staged_updates_region; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->staged_updates_region = staged_updates_region; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->staged_updates_region = staged_updates_region; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->staged_updates_region = staged_updates_region; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->staged_updates_region = staged_updates_region; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->staged_updates_region = staged_updates_region; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->staged_updates_region = staged_updates_region; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->staged_updates_region = staged_updates_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::saved_width

int gdk_window_impl_wayland_priv_get_saved_width(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->saved_width;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->saved_width;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->saved_width;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->saved_width;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->saved_width;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->saved_width;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->saved_width;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->saved_width;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->saved_width;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->saved_width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_saved_width(GdkWindowImplWayland * self, int saved_width) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->saved_width = saved_width; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->saved_width = saved_width; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->saved_width = saved_width; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->saved_width = saved_width; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->saved_width = saved_width; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->saved_width = saved_width; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->saved_width = saved_width; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->saved_width = saved_width; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->saved_width = saved_width; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->saved_width = saved_width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::saved_height

int gdk_window_impl_wayland_priv_get_saved_height(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->saved_height;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->saved_height;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->saved_height;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->saved_height;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->saved_height;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->saved_height;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->saved_height;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->saved_height;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->saved_height;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->saved_height;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_saved_height(GdkWindowImplWayland * self, int saved_height) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->saved_height = saved_height; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->saved_height = saved_height; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->saved_height = saved_height; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->saved_height = saved_height; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->saved_height = saved_height; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->saved_height = saved_height; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->saved_height = saved_height; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->saved_height = saved_height; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->saved_height = saved_height; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->saved_height = saved_height; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::parent_surface_committed_handler

gulong * gdk_window_impl_wayland_priv_get_parent_surface_committed_handler_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (gulong *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->parent_surface_committed_handler;
    case 1: return (gulong *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->parent_surface_committed_handler;
    case 2: return (gulong *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->parent_surface_committed_handler;
    case 3: return (gulong *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->parent_surface_committed_handler;
    case 4: return (gulong *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->parent_surface_committed_handler;
    case 5: return (gulong *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->parent_surface_committed_handler;
    case 6: return (gulong *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->parent_surface_committed_handler;
    case 7: return (gulong *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->parent_surface_committed_handler;
    case 8: return (gulong *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->parent_surface_committed_handler;
    case 9: return (gulong *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->parent_surface_committed_handler;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_move_to_rect.rect

GdkRectangle * gdk_window_impl_wayland_priv_get_pending_move_to_rect_rect_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.rect;
    case 1: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.rect;
    case 2: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.rect;
    case 3: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.rect;
    case 4: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.rect;
    case 5: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.rect;
    case 6: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.rect;
    case 7: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.rect;
    case 8: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.rect;
    case 9: return (GdkRectangle *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.rect;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_move_to_rect.rect_anchor

GdkGravity * gdk_window_impl_wayland_priv_get_pending_move_to_rect_rect_anchor_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.rect_anchor;
    case 1: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.rect_anchor;
    case 2: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.rect_anchor;
    case 3: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.rect_anchor;
    case 4: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.rect_anchor;
    case 5: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.rect_anchor;
    case 6: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.rect_anchor;
    case 7: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.rect_anchor;
    case 8: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.rect_anchor;
    case 9: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.rect_anchor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_move_to_rect.window_anchor

GdkGravity * gdk_window_impl_wayland_priv_get_pending_move_to_rect_window_anchor_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.window_anchor;
    case 1: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.window_anchor;
    case 2: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.window_anchor;
    case 3: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.window_anchor;
    case 4: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.window_anchor;
    case 5: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.window_anchor;
    case 6: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.window_anchor;
    case 7: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.window_anchor;
    case 8: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.window_anchor;
    case 9: return (GdkGravity *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.window_anchor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_move_to_rect.anchor_hints

GdkAnchorHints * gdk_window_impl_wayland_priv_get_pending_move_to_rect_anchor_hints_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.anchor_hints;
    case 1: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.anchor_hints;
    case 2: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.anchor_hints;
    case 3: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.anchor_hints;
    case 4: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.anchor_hints;
    case 5: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.anchor_hints;
    case 6: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.anchor_hints;
    case 7: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.anchor_hints;
    case 8: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.anchor_hints;
    case 9: return (GdkAnchorHints *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.anchor_hints;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_move_to_rect.rect_anchor_dx

gint gdk_window_impl_wayland_priv_get_pending_move_to_rect_rect_anchor_dx(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.rect_anchor_dx;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.rect_anchor_dx;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.rect_anchor_dx;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.rect_anchor_dx;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.rect_anchor_dx;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.rect_anchor_dx;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.rect_anchor_dx;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.rect_anchor_dx;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.rect_anchor_dx;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.rect_anchor_dx;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_move_to_rect_rect_anchor_dx(GdkWindowImplWayland * self, gint pending_move_to_rect_rect_anchor_dx) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.rect_anchor_dx = pending_move_to_rect_rect_anchor_dx; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending_move_to_rect.rect_anchor_dy

gint gdk_window_impl_wayland_priv_get_pending_move_to_rect_rect_anchor_dy(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.rect_anchor_dy;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.rect_anchor_dy;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.rect_anchor_dy;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.rect_anchor_dy;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.rect_anchor_dy;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.rect_anchor_dy;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.rect_anchor_dy;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.rect_anchor_dy;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.rect_anchor_dy;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.rect_anchor_dy;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_move_to_rect_rect_anchor_dy(GdkWindowImplWayland * self, gint pending_move_to_rect_rect_anchor_dy) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending_move_to_rect.rect_anchor_dy = pending_move_to_rect_rect_anchor_dy; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending.width

int gdk_window_impl_wayland_priv_get_pending_width(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending.width;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending.width;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending.width;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending.width;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending.width;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending.width;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending.width;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending.width;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending.width;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending.width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_width(GdkWindowImplWayland * self, int pending_width) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending.width = pending_width; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending.width = pending_width; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending.width = pending_width; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending.width = pending_width; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending.width = pending_width; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending.width = pending_width; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending.width = pending_width; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending.width = pending_width; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending.width = pending_width; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending.width = pending_width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending.height

int gdk_window_impl_wayland_priv_get_pending_height(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending.height;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending.height;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending.height;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending.height;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending.height;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending.height;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending.height;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending.height;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending.height;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending.height;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_pending_height(GdkWindowImplWayland * self, int pending_height) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->pending.height = pending_height; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->pending.height = pending_height; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->pending.height = pending_height; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->pending.height = pending_height; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->pending.height = pending_height; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->pending.height = pending_height; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->pending.height = pending_height; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->pending.height = pending_height; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->pending.height = pending_height; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->pending.height = pending_height; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::pending.state

GdkWindowState * gdk_window_impl_wayland_priv_get_pending_state_ptr(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->pending.state;
    case 1: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_22_16*)self)->pending.state;
    case 2: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_22_18*)self)->pending.state;
    case 3: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_22_25*)self)->pending.state;
    case 4: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_22_30*)self)->pending.state;
    case 5: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_23_1*)self)->pending.state;
    case 6: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_23_3*)self)->pending.state;
    case 7: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_24_4*)self)->pending.state;
    case 8: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_24_17*)self)->pending.state;
    case 9: return (GdkWindowState *)&((struct _GdkWindowImplWayland_v3_24_22*)self)->pending.state;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::exported.callback

gboolean gdk_window_impl_wayland_priv_get_exported_callback_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return TRUE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return FALSE;
    case 9: return FALSE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

GdkWaylandWindowExported * gdk_window_impl_wayland_priv_get_exported_callback_ptr_or_null(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GdkWaylandWindowExported *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->exported.callback;
    case 1: return NULL;
    case 2: return NULL;
    case 3: return NULL;
    case 4: return NULL;
    case 5: return NULL;
    case 6: return NULL;
    case 7: return NULL;
    case 8: return NULL;
    case 9: return NULL;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::exported.user_data

gboolean gdk_window_impl_wayland_priv_get_exported_user_data_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return TRUE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return FALSE;
    case 9: return FALSE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

gpointer gdk_window_impl_wayland_priv_get_exported_user_data_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->exported.user_data;
    case 1: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 8: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 9: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_exported_user_data_or_abort(GdkWindowImplWayland * self, gpointer exported_user_data) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->exported.user_data = exported_user_data; break;
    case 1: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 8: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    case 9: g_error("GdkWindowImplWayland::exported.user_data not supported on this GTK"); g_abort();
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::exported.destroy_func

gboolean gdk_window_impl_wayland_priv_get_exported_destroy_func_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return TRUE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return FALSE;
    case 9: return FALSE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

GDestroyNotify * gdk_window_impl_wayland_priv_get_exported_destroy_func_ptr_or_null(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return (GDestroyNotify *)&((struct _GdkWindowImplWayland_v3_22_0*)self)->exported.destroy_func;
    case 1: return NULL;
    case 2: return NULL;
    case 3: return NULL;
    case 4: return NULL;
    case 5: return NULL;
    case 6: return NULL;
    case 7: return NULL;
    case 8: return NULL;
    case 9: return NULL;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::imported_transient_for

struct zxdg_imported_v1 * gdk_window_impl_wayland_priv_get_imported_transient_for(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return ((struct _GdkWindowImplWayland_v3_22_0*)self)->imported_transient_for;
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->imported_transient_for;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->imported_transient_for;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->imported_transient_for;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->imported_transient_for;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->imported_transient_for;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->imported_transient_for;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->imported_transient_for;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->imported_transient_for;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->imported_transient_for;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_imported_transient_for(GdkWindowImplWayland * self, struct zxdg_imported_v1 * imported_transient_for) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: ((struct _GdkWindowImplWayland_v3_22_0*)self)->imported_transient_for = imported_transient_for; break;
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->imported_transient_for = imported_transient_for; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->imported_transient_for = imported_transient_for; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->imported_transient_for = imported_transient_for; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->imported_transient_for = imported_transient_for; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->imported_transient_for = imported_transient_for; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->imported_transient_for = imported_transient_for; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->imported_transient_for = imported_transient_for; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->imported_transient_for = imported_transient_for; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->imported_transient_for = imported_transient_for; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::exported.handle

gboolean gdk_window_impl_wayland_priv_get_exported_handle_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return TRUE;
    case 2: return TRUE;
    case 3: return TRUE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

char * gdk_window_impl_wayland_priv_get_exported_handle_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.handle not supported on this GTK"); g_abort();
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.handle;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.handle;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.handle;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.handle;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.handle;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.handle;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.handle;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.handle;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.handle;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_exported_handle_or_abort(GdkWindowImplWayland * self, char * exported_handle) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.handle not supported on this GTK"); g_abort();
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.handle = exported_handle; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.handle = exported_handle; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.handle = exported_handle; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.handle = exported_handle; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.handle = exported_handle; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.handle = exported_handle; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.handle = exported_handle; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.handle = exported_handle; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.handle = exported_handle; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::exported.export_count

gboolean gdk_window_impl_wayland_priv_get_exported_export_count_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return TRUE;
    case 2: return TRUE;
    case 3: return TRUE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

int gdk_window_impl_wayland_priv_get_exported_export_count_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.export_count not supported on this GTK"); g_abort();
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.export_count;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.export_count;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.export_count;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.export_count;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.export_count;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.export_count;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.export_count;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.export_count;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.export_count;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_exported_export_count_or_abort(GdkWindowImplWayland * self, int exported_export_count) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.export_count not supported on this GTK"); g_abort();
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.export_count = exported_export_count; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.export_count = exported_export_count; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.export_count = exported_export_count; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.export_count = exported_export_count; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.export_count = exported_export_count; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.export_count = exported_export_count; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.export_count = exported_export_count; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.export_count = exported_export_count; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.export_count = exported_export_count; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::exported.closures

gboolean gdk_window_impl_wayland_priv_get_exported_closures_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return TRUE;
    case 2: return TRUE;
    case 3: return TRUE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

GList * gdk_window_impl_wayland_priv_get_exported_closures_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.closures not supported on this GTK"); g_abort();
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.closures;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.closures;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.closures;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.closures;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.closures;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.closures;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.closures;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.closures;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.closures;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_exported_closures_or_abort(GdkWindowImplWayland * self, GList * exported_closures) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.closures not supported on this GTK"); g_abort();
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.closures = exported_closures; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.closures = exported_closures; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.closures = exported_closures; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.closures = exported_closures; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.closures = exported_closures; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.closures = exported_closures; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.closures = exported_closures; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.closures = exported_closures; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.closures = exported_closures; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::exported.idle_source_id

gboolean gdk_window_impl_wayland_priv_get_exported_idle_source_id_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return TRUE;
    case 2: return TRUE;
    case 3: return TRUE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

guint gdk_window_impl_wayland_priv_get_exported_idle_source_id_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.idle_source_id not supported on this GTK"); g_abort();
    case 1: return ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.idle_source_id;
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.idle_source_id;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.idle_source_id;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.idle_source_id;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.idle_source_id;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.idle_source_id;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.idle_source_id;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.idle_source_id;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.idle_source_id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_exported_idle_source_id_or_abort(GdkWindowImplWayland * self, guint exported_idle_source_id) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::exported.idle_source_id not supported on this GTK"); g_abort();
    case 1: ((struct _GdkWindowImplWayland_v3_22_16*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->exported.idle_source_id = exported_idle_source_id; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->exported.idle_source_id = exported_idle_source_id; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::shortcuts_inhibitors

gboolean gdk_window_impl_wayland_priv_get_shortcuts_inhibitors_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return TRUE;
    case 3: return TRUE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

GHashTable * gdk_window_impl_wayland_priv_get_shortcuts_inhibitors_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::shortcuts_inhibitors not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::shortcuts_inhibitors not supported on this GTK"); g_abort();
    case 2: return ((struct _GdkWindowImplWayland_v3_22_18*)self)->shortcuts_inhibitors;
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->shortcuts_inhibitors;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->shortcuts_inhibitors;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->shortcuts_inhibitors;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->shortcuts_inhibitors;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->shortcuts_inhibitors;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->shortcuts_inhibitors;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->shortcuts_inhibitors;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_shortcuts_inhibitors_or_abort(GdkWindowImplWayland * self, GHashTable * shortcuts_inhibitors) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::shortcuts_inhibitors not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::shortcuts_inhibitors not supported on this GTK"); g_abort();
    case 2: ((struct _GdkWindowImplWayland_v3_22_18*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->shortcuts_inhibitors = shortcuts_inhibitors; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.server_decoration

gboolean gdk_window_impl_wayland_priv_get_display_server_server_decoration_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return TRUE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

struct org_kde_kwin_server_decoration * gdk_window_impl_wayland_priv_get_display_server_server_decoration_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.server_decoration not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.server_decoration not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.server_decoration not supported on this GTK"); g_abort();
    case 3: return ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.server_decoration;
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.server_decoration;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.server_decoration;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.server_decoration;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.server_decoration;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.server_decoration;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.server_decoration;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_server_decoration_or_abort(GdkWindowImplWayland * self, struct org_kde_kwin_server_decoration * display_server_server_decoration) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.server_decoration not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.server_decoration not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.server_decoration not supported on this GTK"); g_abort();
    case 3: ((struct _GdkWindowImplWayland_v3_22_25*)self)->display_server.server_decoration = display_server_server_decoration; break;
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.server_decoration = display_server_server_decoration; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.server_decoration = display_server_server_decoration; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.server_decoration = display_server_server_decoration; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.server_decoration = display_server_server_decoration; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.server_decoration = display_server_server_decoration; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.server_decoration = display_server_server_decoration; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.xdg_surface

gboolean gdk_window_impl_wayland_priv_get_display_server_xdg_surface_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

struct xdg_surface * gdk_window_impl_wayland_priv_get_display_server_xdg_surface_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_surface;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_surface;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_surface;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_surface;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_surface;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_xdg_surface_or_abort(GdkWindowImplWayland * self, struct xdg_surface * display_server_xdg_surface) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.xdg_surface not supported on this GTK"); g_abort();
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_surface = display_server_xdg_surface; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_surface = display_server_xdg_surface; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_surface = display_server_xdg_surface; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_surface = display_server_xdg_surface; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_surface = display_server_xdg_surface; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_surface = display_server_xdg_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.xdg_toplevel

gboolean gdk_window_impl_wayland_priv_get_display_server_xdg_toplevel_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

struct xdg_toplevel * gdk_window_impl_wayland_priv_get_display_server_xdg_toplevel_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_toplevel;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_toplevel;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_toplevel;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_toplevel;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_toplevel;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_toplevel;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_xdg_toplevel_or_abort(GdkWindowImplWayland * self, struct xdg_toplevel * display_server_xdg_toplevel) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.xdg_toplevel not supported on this GTK"); g_abort();
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_toplevel = display_server_xdg_toplevel; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_toplevel = display_server_xdg_toplevel; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_toplevel = display_server_xdg_toplevel; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_toplevel = display_server_xdg_toplevel; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_toplevel = display_server_xdg_toplevel; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_toplevel = display_server_xdg_toplevel; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.xdg_popup

gboolean gdk_window_impl_wayland_priv_get_display_server_xdg_popup_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

struct xdg_popup * gdk_window_impl_wayland_priv_get_display_server_xdg_popup_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_popup;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_popup;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_popup;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_popup;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_popup;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_popup;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_xdg_popup_or_abort(GdkWindowImplWayland * self, struct xdg_popup * display_server_xdg_popup) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.xdg_popup not supported on this GTK"); g_abort();
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.xdg_popup = display_server_xdg_popup; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.xdg_popup = display_server_xdg_popup; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.xdg_popup = display_server_xdg_popup; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.xdg_popup = display_server_xdg_popup; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.xdg_popup = display_server_xdg_popup; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.xdg_popup = display_server_xdg_popup; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.zxdg_surface_v6

gboolean gdk_window_impl_wayland_priv_get_display_server_zxdg_surface_v6_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

struct zxdg_surface_v6 * gdk_window_impl_wayland_priv_get_display_server_zxdg_surface_v6_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.zxdg_surface_v6;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.zxdg_surface_v6;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.zxdg_surface_v6;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.zxdg_surface_v6;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.zxdg_surface_v6;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.zxdg_surface_v6;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_zxdg_surface_v6_or_abort(GdkWindowImplWayland * self, struct zxdg_surface_v6 * display_server_zxdg_surface_v6) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.zxdg_surface_v6 not supported on this GTK"); g_abort();
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.zxdg_surface_v6 = display_server_zxdg_surface_v6; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.zxdg_surface_v6 = display_server_zxdg_surface_v6; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.zxdg_surface_v6 = display_server_zxdg_surface_v6; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.zxdg_surface_v6 = display_server_zxdg_surface_v6; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.zxdg_surface_v6 = display_server_zxdg_surface_v6; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.zxdg_surface_v6 = display_server_zxdg_surface_v6; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.zxdg_toplevel_v6

gboolean gdk_window_impl_wayland_priv_get_display_server_zxdg_toplevel_v6_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

struct zxdg_toplevel_v6 * gdk_window_impl_wayland_priv_get_display_server_zxdg_toplevel_v6_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.zxdg_toplevel_v6;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.zxdg_toplevel_v6;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.zxdg_toplevel_v6;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.zxdg_toplevel_v6;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.zxdg_toplevel_v6;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.zxdg_toplevel_v6;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_zxdg_toplevel_v6_or_abort(GdkWindowImplWayland * self, struct zxdg_toplevel_v6 * display_server_zxdg_toplevel_v6) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.zxdg_toplevel_v6 not supported on this GTK"); g_abort();
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.zxdg_toplevel_v6 = display_server_zxdg_toplevel_v6; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.zxdg_toplevel_v6 = display_server_zxdg_toplevel_v6; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.zxdg_toplevel_v6 = display_server_zxdg_toplevel_v6; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.zxdg_toplevel_v6 = display_server_zxdg_toplevel_v6; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.zxdg_toplevel_v6 = display_server_zxdg_toplevel_v6; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.zxdg_toplevel_v6 = display_server_zxdg_toplevel_v6; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::display_server.zxdg_popup_v6

gboolean gdk_window_impl_wayland_priv_get_display_server_zxdg_popup_v6_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return TRUE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

struct zxdg_popup_v6 * gdk_window_impl_wayland_priv_get_display_server_zxdg_popup_v6_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 4: return ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.zxdg_popup_v6;
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.zxdg_popup_v6;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.zxdg_popup_v6;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.zxdg_popup_v6;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.zxdg_popup_v6;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.zxdg_popup_v6;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_display_server_zxdg_popup_v6_or_abort(GdkWindowImplWayland * self, struct zxdg_popup_v6 * display_server_zxdg_popup_v6) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::display_server.zxdg_popup_v6 not supported on this GTK"); g_abort();
    case 4: ((struct _GdkWindowImplWayland_v3_22_30*)self)->display_server.zxdg_popup_v6 = display_server_zxdg_popup_v6; break;
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->display_server.zxdg_popup_v6 = display_server_zxdg_popup_v6; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->display_server.zxdg_popup_v6 = display_server_zxdg_popup_v6; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->display_server.zxdg_popup_v6 = display_server_zxdg_popup_v6; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->display_server.zxdg_popup_v6 = display_server_zxdg_popup_v6; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->display_server.zxdg_popup_v6 = display_server_zxdg_popup_v6; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::using_csd

gboolean gdk_window_impl_wayland_priv_get_using_csd_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return TRUE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

unsigned int gdk_window_impl_wayland_priv_get_using_csd_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 5: return ((struct _GdkWindowImplWayland_v3_23_1*)self)->using_csd;
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->using_csd;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->using_csd;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->using_csd;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->using_csd;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_using_csd_or_abort(GdkWindowImplWayland * self, unsigned int using_csd) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::using_csd not supported on this GTK"); g_abort();
    case 5: ((struct _GdkWindowImplWayland_v3_23_1*)self)->using_csd = using_csd; break;
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->using_csd = using_csd; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->using_csd = using_csd; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->using_csd = using_csd; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->using_csd = using_csd; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::subsurface_x

gboolean gdk_window_impl_wayland_priv_get_subsurface_x_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

int gdk_window_impl_wayland_priv_get_subsurface_x_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->subsurface_x;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->subsurface_x;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->subsurface_x;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->subsurface_x;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_subsurface_x_or_abort(GdkWindowImplWayland * self, int subsurface_x) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::subsurface_x not supported on this GTK"); g_abort();
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->subsurface_x = subsurface_x; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->subsurface_x = subsurface_x; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->subsurface_x = subsurface_x; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->subsurface_x = subsurface_x; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::subsurface_y

gboolean gdk_window_impl_wayland_priv_get_subsurface_y_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return TRUE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

int gdk_window_impl_wayland_priv_get_subsurface_y_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 6: return ((struct _GdkWindowImplWayland_v3_23_3*)self)->subsurface_y;
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->subsurface_y;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->subsurface_y;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->subsurface_y;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_subsurface_y_or_abort(GdkWindowImplWayland * self, int subsurface_y) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::subsurface_y not supported on this GTK"); g_abort();
    case 6: ((struct _GdkWindowImplWayland_v3_23_3*)self)->subsurface_y = subsurface_y; break;
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->subsurface_y = subsurface_y; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->subsurface_y = subsurface_y; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->subsurface_y = subsurface_y; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::configuring_popup

gboolean gdk_window_impl_wayland_priv_get_configuring_popup_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return TRUE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

unsigned int gdk_window_impl_wayland_priv_get_configuring_popup_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 7: return ((struct _GdkWindowImplWayland_v3_24_4*)self)->configuring_popup;
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->configuring_popup;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->configuring_popup;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_configuring_popup_or_abort(GdkWindowImplWayland * self, unsigned int configuring_popup) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::configuring_popup not supported on this GTK"); g_abort();
    case 7: ((struct _GdkWindowImplWayland_v3_24_4*)self)->configuring_popup = configuring_popup; break;
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->configuring_popup = configuring_popup; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->configuring_popup = configuring_popup; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::unconfigured_width

gboolean gdk_window_impl_wayland_priv_get_unconfigured_width_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

int gdk_window_impl_wayland_priv_get_unconfigured_width_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->unconfigured_width;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->unconfigured_width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_unconfigured_width_or_abort(GdkWindowImplWayland * self, int unconfigured_width) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::unconfigured_width not supported on this GTK"); g_abort();
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->unconfigured_width = unconfigured_width; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->unconfigured_width = unconfigured_width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::unconfigured_height

gboolean gdk_window_impl_wayland_priv_get_unconfigured_height_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

int gdk_window_impl_wayland_priv_get_unconfigured_height_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->unconfigured_height;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->unconfigured_height;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_unconfigured_height_or_abort(GdkWindowImplWayland * self, int unconfigured_height) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::unconfigured_height not supported on this GTK"); g_abort();
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->unconfigured_height = unconfigured_height; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->unconfigured_height = unconfigured_height; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::fixed_size_width

gboolean gdk_window_impl_wayland_priv_get_fixed_size_width_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

int gdk_window_impl_wayland_priv_get_fixed_size_width_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->fixed_size_width;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->fixed_size_width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_fixed_size_width_or_abort(GdkWindowImplWayland * self, int fixed_size_width) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::fixed_size_width not supported on this GTK"); g_abort();
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->fixed_size_width = fixed_size_width; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->fixed_size_width = fixed_size_width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::fixed_size_height

gboolean gdk_window_impl_wayland_priv_get_fixed_size_height_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return TRUE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

int gdk_window_impl_wayland_priv_get_fixed_size_height_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 8: return ((struct _GdkWindowImplWayland_v3_24_17*)self)->fixed_size_height;
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->fixed_size_height;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_fixed_size_height_or_abort(GdkWindowImplWayland * self, int fixed_size_height) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::fixed_size_height not supported on this GTK"); g_abort();
    case 8: ((struct _GdkWindowImplWayland_v3_24_17*)self)->fixed_size_height = fixed_size_height; break;
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->fixed_size_height = fixed_size_height; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindowImplWayland::saved_size_changed

gboolean gdk_window_impl_wayland_priv_get_saved_size_changed_supported() {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return FALSE;
    case 3: return FALSE;
    case 4: return FALSE;
    case 5: return FALSE;
    case 6: return FALSE;
    case 7: return FALSE;
    case 8: return FALSE;
    case 9: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

gboolean gdk_window_impl_wayland_priv_get_saved_size_changed_or_abort(GdkWindowImplWayland * self) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 8: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 9: return ((struct _GdkWindowImplWayland_v3_24_22*)self)->saved_size_changed;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_impl_wayland_priv_set_saved_size_changed_or_abort(GdkWindowImplWayland * self, gboolean saved_size_changed) {
  switch (gdk_window_impl_wayland_priv_get_version_id()) {
    case 0: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 2: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 3: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 4: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 5: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 6: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 7: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 8: g_error("GdkWindowImplWayland::saved_size_changed not supported on this GTK"); g_abort();
    case 9: ((struct _GdkWindowImplWayland_v3_24_22*)self)->saved_size_changed = saved_size_changed; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

#endif // GDK_WINDOW_IMPL_WAYLAND_PRIV_H
