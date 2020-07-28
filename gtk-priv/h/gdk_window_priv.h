/* This file is part of gtk-layer-shell
 *
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
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

#ifndef GDK_WINDOW_PRIV_H
#define GDK_WINDOW_PRIV_H

typedef struct _GdkWindow GdkWindow;

// Version ID 0
// Valid for GTK v3.22.0 - v3.22.18
struct _GdkWindow_v3_22_0
{
  GObject parent_instance;
  GdkWindowImpl *impl;
  GdkWindow *parent;
  GdkWindow *transient_for;
  GdkVisual *visual;
  gpointer user_data;
  gint x;
  gint y;
  GdkEventMask event_mask;
  guint8 window_type;
  guint8 depth;
  guint8 resize_count;
  gint8 toplevel_window_type;
  GList *filters;
  GList *children;
  GList children_list_node;
  GList *native_children;
  cairo_pattern_t *background;
  struct {
    cairo_surface_t *surface;
    cairo_region_t *region;
    cairo_region_t *flushed_region;
    cairo_region_t *need_blend_region;
    gboolean surface_needs_composite;
    gboolean use_gl;
  } current_paint;
  GdkGLContext *gl_paint_context;
  cairo_region_t *update_area;
  guint update_freeze_count;
  cairo_region_t *active_update_area;
  cairo_region_t * old_updated_area[2];
  GdkWindowState old_state;
  GdkWindowState state;
  guint8 alpha;
  guint8 fullscreen_mode;
  guint input_only : 1;
  guint pass_through : 1;
  guint modal_hint : 1;
  guint composited : 1;
  guint has_alpha_background : 1;
  guint destroyed : 2;
  guint accept_focus : 1;
  guint focus_on_map : 1;
  guint shaped : 1;
  guint support_multidevice : 1;
  guint synthesize_crossing_event_queued : 1;
  guint effective_visibility : 2;
  guint visibility : 2;
  guint native_visibility : 2;
  guint viewable : 1;
  guint applied_shape : 1;
  guint in_update : 1;
  guint geometry_dirty : 1;
  guint event_compression : 1;
  guint frame_clock_events_paused : 1;
  GdkWindow *impl_window;
  guint update_and_descendants_freeze_count;
  gint abs_x;
  gint abs_y;;
  gint width;
  gint height;;
  gint shadow_top;
  gint shadow_left;
  gint shadow_right;
  gint shadow_bottom;
  guint num_offscreen_children;
  cairo_region_t *clip_region;
  GdkCursor *cursor;
  GHashTable *device_cursor;
  cairo_region_t *shape;
  cairo_region_t *input_shape;
  GList *devices_inside;
  GHashTable *device_events;
  GHashTable *source_event_masks;
  gulong device_added_handler_id;
  gulong device_changed_handler_id;
  GdkFrameClock *frame_clock;
  GdkWindowInvalidateHandlerFunc invalidate_handler;
  GdkDrawingContext *drawing_context;
};

// Version ID 1
// Valid for GTK v3.22.19 - v3.24.10
struct _GdkWindow_v3_22_19
{
  GObject parent_instance;
  GdkWindowImpl *impl;
  GdkWindow *parent;
  GdkWindow *transient_for;
  GdkVisual *visual;
  gpointer user_data;
  gint x;
  gint y;
  GdkEventMask event_mask;
  guint8 window_type;
  guint8 depth;
  guint8 resize_count;
  gint8 toplevel_window_type;
  GList *filters;
  GList *children;
  GList children_list_node;
  GList *native_children;
  cairo_pattern_t *background;
  struct {
    cairo_surface_t *surface;
    cairo_region_t *region;
    cairo_region_t *flushed_region;
    cairo_region_t *need_blend_region;
    gboolean surface_needs_composite;
    gboolean use_gl;
  } current_paint;
  GdkGLContext *gl_paint_context;
  cairo_region_t *update_area;
  guint update_freeze_count;
  cairo_region_t *active_update_area;
  cairo_region_t * old_updated_area[2];
  GdkWindowState old_state;
  GdkWindowState state;
  guint8 alpha;
  guint8 fullscreen_mode;
  guint input_only : 1;
  guint pass_through : 1;
  guint modal_hint : 1;
  guint composited : 1;
  guint has_alpha_background : 1;
  guint destroyed : 2;
  guint accept_focus : 1;
  guint focus_on_map : 1;
  guint shaped : 1;
  guint support_multidevice : 1;
  guint synthesize_crossing_event_queued : 1;
  guint effective_visibility : 2;
  guint visibility : 2;
  guint native_visibility : 2;
  guint viewable : 1;
  guint applied_shape : 1;
  guint in_update : 1;
  guint geometry_dirty : 1;
  guint event_compression : 1;
  guint frame_clock_events_paused : 1;
  GdkWindow *impl_window;
  guint update_and_descendants_freeze_count;
  gint abs_x;
  gint abs_y;;
  gint width;
  gint height;;
  gint shadow_top;
  gint shadow_left;
  gint shadow_right;
  gint shadow_bottom;
  guint num_offscreen_children;
  cairo_region_t *clip_region;
  GdkCursor *cursor;
  GHashTable *device_cursor;
  cairo_region_t *shape;
  cairo_region_t *input_shape;
  GList *devices_inside;
  GHashTable *device_events;
  GHashTable *source_event_masks;
  gulong device_added_handler_id;
  gulong device_changed_handler_id;
  GdkFrameClock *frame_clock;
  GdkWindowInvalidateHandlerFunc invalidate_handler;
  GdkDrawingContext *drawing_context;
  cairo_region_t *opaque_region;
};

// Version ID 2
// Valid for GTK v3.24.11 - v3.24.22 (unreleased)
struct _GdkWindow_v3_24_11
{
  GObject parent_instance;
  GdkWindowImpl *impl;
  GdkWindow *parent;
  GdkWindow *transient_for;
  GdkVisual *visual;
  gpointer user_data;
  gint x;
  gint y;
  GdkEventMask event_mask;
  guint8 window_type;
  guint8 depth;
  guint8 resize_count;
  gint8 toplevel_window_type;
  GList *filters;
  GList *children;
  GList children_list_node;
  GList *native_children;
  cairo_pattern_t *background;
  struct {
    cairo_surface_t *surface;
    cairo_region_t *region;
    cairo_region_t *flushed_region;
    cairo_region_t *need_blend_region;
    gboolean surface_needs_composite;
    gboolean use_gl;
  } current_paint;
  GdkGLContext *gl_paint_context;
  cairo_region_t *update_area;
  guint update_freeze_count;
  cairo_region_t *active_update_area;
  cairo_region_t * old_updated_area[2];
  GdkWindowState old_state;
  GdkWindowState state;
  guint synthesized_crossing_event_id;
  guint8 alpha;
  guint8 fullscreen_mode;
  guint input_only : 1;
  guint pass_through : 1;
  guint modal_hint : 1;
  guint composited : 1;
  guint has_alpha_background : 1;
  guint destroyed : 2;
  guint accept_focus : 1;
  guint focus_on_map : 1;
  guint shaped : 1;
  guint support_multidevice : 1;
  guint effective_visibility : 2;
  guint visibility : 2;
  guint native_visibility : 2;
  guint viewable : 1;
  guint applied_shape : 1;
  guint in_update : 1;
  guint geometry_dirty : 1;
  guint event_compression : 1;
  guint frame_clock_events_paused : 1;
  GdkWindow *impl_window;
  guint update_and_descendants_freeze_count;
  gint abs_x;
  gint abs_y;;
  gint width;
  gint height;;
  gint shadow_top;
  gint shadow_left;
  gint shadow_right;
  gint shadow_bottom;
  guint num_offscreen_children;
  cairo_region_t *clip_region;
  GdkCursor *cursor;
  GHashTable *device_cursor;
  cairo_region_t *shape;
  cairo_region_t *input_shape;
  GList *devices_inside;
  GHashTable *device_events;
  GHashTable *source_event_masks;
  gulong device_added_handler_id;
  gulong device_changed_handler_id;
  GdkFrameClock *frame_clock;
  GdkWindowInvalidateHandlerFunc invalidate_handler;
  GdkDrawingContext *drawing_context;
  cairo_region_t *opaque_region;
};

// For internal use only
int gdk_window_priv_get_version_id() {
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
  
    if (combo >= 24011) {
      version_id = 2;
    } else if (combo >= 22019) {
      version_id = 1;
    } else {
      version_id = 0;
    }
  }
  
  return version_id;
}

// GdkWindow::parent_instance

GObject * gdk_window_priv_get_parent_instance_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (GObject *)&((struct _GdkWindow_v3_22_0*)self)->parent_instance;
    case 1: return (GObject *)&((struct _GdkWindow_v3_22_19*)self)->parent_instance;
    case 2: return (GObject *)&((struct _GdkWindow_v3_24_11*)self)->parent_instance;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::impl

GdkWindowImpl * gdk_window_priv_get_impl(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->impl;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->impl;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->impl;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_impl(GdkWindow * self, GdkWindowImpl * impl) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->impl = impl; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->impl = impl; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->impl = impl; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::parent

GdkWindow * gdk_window_priv_get_parent(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->parent;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->parent;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->parent;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_parent(GdkWindow * self, GdkWindow * parent) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->parent = parent; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->parent = parent; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->parent = parent; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::transient_for

GdkWindow * gdk_window_priv_get_transient_for(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->transient_for;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->transient_for;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->transient_for;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_transient_for(GdkWindow * self, GdkWindow * transient_for) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->transient_for = transient_for; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->transient_for = transient_for; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->transient_for = transient_for; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::visual

GdkVisual * gdk_window_priv_get_visual(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->visual;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->visual;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->visual;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_visual(GdkWindow * self, GdkVisual * visual) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->visual = visual; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->visual = visual; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->visual = visual; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::user_data

gpointer gdk_window_priv_get_user_data(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->user_data;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->user_data;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->user_data;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_user_data(GdkWindow * self, gpointer user_data) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->user_data = user_data; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->user_data = user_data; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->user_data = user_data; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::x

gint gdk_window_priv_get_x(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->x;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->x;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->x;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_x(GdkWindow * self, gint x) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->x = x; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->x = x; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->x = x; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::y

gint gdk_window_priv_get_y(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->y;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->y;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->y;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_y(GdkWindow * self, gint y) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->y = y; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->y = y; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->y = y; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::event_mask

GdkEventMask * gdk_window_priv_get_event_mask_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (GdkEventMask *)&((struct _GdkWindow_v3_22_0*)self)->event_mask;
    case 1: return (GdkEventMask *)&((struct _GdkWindow_v3_22_19*)self)->event_mask;
    case 2: return (GdkEventMask *)&((struct _GdkWindow_v3_24_11*)self)->event_mask;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::window_type

guint8 * gdk_window_priv_get_window_type_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (guint8 *)&((struct _GdkWindow_v3_22_0*)self)->window_type;
    case 1: return (guint8 *)&((struct _GdkWindow_v3_22_19*)self)->window_type;
    case 2: return (guint8 *)&((struct _GdkWindow_v3_24_11*)self)->window_type;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::depth

guint8 * gdk_window_priv_get_depth_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (guint8 *)&((struct _GdkWindow_v3_22_0*)self)->depth;
    case 1: return (guint8 *)&((struct _GdkWindow_v3_22_19*)self)->depth;
    case 2: return (guint8 *)&((struct _GdkWindow_v3_24_11*)self)->depth;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::resize_count

guint8 * gdk_window_priv_get_resize_count_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (guint8 *)&((struct _GdkWindow_v3_22_0*)self)->resize_count;
    case 1: return (guint8 *)&((struct _GdkWindow_v3_22_19*)self)->resize_count;
    case 2: return (guint8 *)&((struct _GdkWindow_v3_24_11*)self)->resize_count;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::toplevel_window_type

gint8 * gdk_window_priv_get_toplevel_window_type_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (gint8 *)&((struct _GdkWindow_v3_22_0*)self)->toplevel_window_type;
    case 1: return (gint8 *)&((struct _GdkWindow_v3_22_19*)self)->toplevel_window_type;
    case 2: return (gint8 *)&((struct _GdkWindow_v3_24_11*)self)->toplevel_window_type;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::filters

GList * gdk_window_priv_get_filters(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->filters;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->filters;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->filters;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_filters(GdkWindow * self, GList * filters) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->filters = filters; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->filters = filters; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->filters = filters; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::children

GList * gdk_window_priv_get_children(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->children;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->children;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->children;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_children(GdkWindow * self, GList * children) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->children = children; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->children = children; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->children = children; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::children_list_node

GList * gdk_window_priv_get_children_list_node_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (GList *)&((struct _GdkWindow_v3_22_0*)self)->children_list_node;
    case 1: return (GList *)&((struct _GdkWindow_v3_22_19*)self)->children_list_node;
    case 2: return (GList *)&((struct _GdkWindow_v3_24_11*)self)->children_list_node;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::native_children

GList * gdk_window_priv_get_native_children(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->native_children;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->native_children;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->native_children;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_native_children(GdkWindow * self, GList * native_children) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->native_children = native_children; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->native_children = native_children; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->native_children = native_children; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::background

cairo_pattern_t * gdk_window_priv_get_background(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->background;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->background;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->background;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_background(GdkWindow * self, cairo_pattern_t * background) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->background = background; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->background = background; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->background = background; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::current_paint.surface

cairo_surface_t * gdk_window_priv_get_current_paint_surface(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->current_paint.surface;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->current_paint.surface;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->current_paint.surface;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_current_paint_surface(GdkWindow * self, cairo_surface_t * current_paint_surface) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->current_paint.surface = current_paint_surface; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->current_paint.surface = current_paint_surface; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->current_paint.surface = current_paint_surface; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::current_paint.region

cairo_region_t * gdk_window_priv_get_current_paint_region(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->current_paint.region;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->current_paint.region;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->current_paint.region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_current_paint_region(GdkWindow * self, cairo_region_t * current_paint_region) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->current_paint.region = current_paint_region; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->current_paint.region = current_paint_region; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->current_paint.region = current_paint_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::current_paint.flushed_region

cairo_region_t * gdk_window_priv_get_current_paint_flushed_region(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->current_paint.flushed_region;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->current_paint.flushed_region;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->current_paint.flushed_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_current_paint_flushed_region(GdkWindow * self, cairo_region_t * current_paint_flushed_region) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->current_paint.flushed_region = current_paint_flushed_region; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->current_paint.flushed_region = current_paint_flushed_region; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->current_paint.flushed_region = current_paint_flushed_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::current_paint.need_blend_region

cairo_region_t * gdk_window_priv_get_current_paint_need_blend_region(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->current_paint.need_blend_region;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->current_paint.need_blend_region;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->current_paint.need_blend_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_current_paint_need_blend_region(GdkWindow * self, cairo_region_t * current_paint_need_blend_region) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->current_paint.need_blend_region = current_paint_need_blend_region; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->current_paint.need_blend_region = current_paint_need_blend_region; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->current_paint.need_blend_region = current_paint_need_blend_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::current_paint.surface_needs_composite

gboolean gdk_window_priv_get_current_paint_surface_needs_composite(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->current_paint.surface_needs_composite;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->current_paint.surface_needs_composite;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->current_paint.surface_needs_composite;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_current_paint_surface_needs_composite(GdkWindow * self, gboolean current_paint_surface_needs_composite) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->current_paint.surface_needs_composite = current_paint_surface_needs_composite; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->current_paint.surface_needs_composite = current_paint_surface_needs_composite; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->current_paint.surface_needs_composite = current_paint_surface_needs_composite; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::current_paint.use_gl

gboolean gdk_window_priv_get_current_paint_use_gl(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->current_paint.use_gl;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->current_paint.use_gl;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->current_paint.use_gl;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_current_paint_use_gl(GdkWindow * self, gboolean current_paint_use_gl) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->current_paint.use_gl = current_paint_use_gl; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->current_paint.use_gl = current_paint_use_gl; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->current_paint.use_gl = current_paint_use_gl; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::gl_paint_context

GdkGLContext * gdk_window_priv_get_gl_paint_context(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->gl_paint_context;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->gl_paint_context;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->gl_paint_context;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_gl_paint_context(GdkWindow * self, GdkGLContext * gl_paint_context) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->gl_paint_context = gl_paint_context; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->gl_paint_context = gl_paint_context; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->gl_paint_context = gl_paint_context; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::update_area

cairo_region_t * gdk_window_priv_get_update_area(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->update_area;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->update_area;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->update_area;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_update_area(GdkWindow * self, cairo_region_t * update_area) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->update_area = update_area; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->update_area = update_area; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->update_area = update_area; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::update_freeze_count

guint gdk_window_priv_get_update_freeze_count(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->update_freeze_count;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->update_freeze_count;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->update_freeze_count;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_update_freeze_count(GdkWindow * self, guint update_freeze_count) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->update_freeze_count = update_freeze_count; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->update_freeze_count = update_freeze_count; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->update_freeze_count = update_freeze_count; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::active_update_area

cairo_region_t * gdk_window_priv_get_active_update_area(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->active_update_area;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->active_update_area;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->active_update_area;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_active_update_area(GdkWindow * self, cairo_region_t * active_update_area) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->active_update_area = active_update_area; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->active_update_area = active_update_area; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->active_update_area = active_update_area; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::old_updated_area

cairo_region_t ** * gdk_window_priv_get_old_updated_area_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (cairo_region_t ** *)&((struct _GdkWindow_v3_22_0*)self)->old_updated_area;
    case 1: return (cairo_region_t ** *)&((struct _GdkWindow_v3_22_19*)self)->old_updated_area;
    case 2: return (cairo_region_t ** *)&((struct _GdkWindow_v3_24_11*)self)->old_updated_area;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::old_state

GdkWindowState * gdk_window_priv_get_old_state_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (GdkWindowState *)&((struct _GdkWindow_v3_22_0*)self)->old_state;
    case 1: return (GdkWindowState *)&((struct _GdkWindow_v3_22_19*)self)->old_state;
    case 2: return (GdkWindowState *)&((struct _GdkWindow_v3_24_11*)self)->old_state;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::state

GdkWindowState * gdk_window_priv_get_state_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (GdkWindowState *)&((struct _GdkWindow_v3_22_0*)self)->state;
    case 1: return (GdkWindowState *)&((struct _GdkWindow_v3_22_19*)self)->state;
    case 2: return (GdkWindowState *)&((struct _GdkWindow_v3_24_11*)self)->state;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::alpha

guint8 * gdk_window_priv_get_alpha_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (guint8 *)&((struct _GdkWindow_v3_22_0*)self)->alpha;
    case 1: return (guint8 *)&((struct _GdkWindow_v3_22_19*)self)->alpha;
    case 2: return (guint8 *)&((struct _GdkWindow_v3_24_11*)self)->alpha;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::fullscreen_mode

guint8 * gdk_window_priv_get_fullscreen_mode_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (guint8 *)&((struct _GdkWindow_v3_22_0*)self)->fullscreen_mode;
    case 1: return (guint8 *)&((struct _GdkWindow_v3_22_19*)self)->fullscreen_mode;
    case 2: return (guint8 *)&((struct _GdkWindow_v3_24_11*)self)->fullscreen_mode;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::input_only

guint gdk_window_priv_get_input_only(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->input_only;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->input_only;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->input_only;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_input_only(GdkWindow * self, guint input_only) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->input_only = input_only; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->input_only = input_only; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->input_only = input_only; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::pass_through

guint gdk_window_priv_get_pass_through(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->pass_through;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->pass_through;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->pass_through;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_pass_through(GdkWindow * self, guint pass_through) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->pass_through = pass_through; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->pass_through = pass_through; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->pass_through = pass_through; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::modal_hint

guint gdk_window_priv_get_modal_hint(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->modal_hint;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->modal_hint;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->modal_hint;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_modal_hint(GdkWindow * self, guint modal_hint) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->modal_hint = modal_hint; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->modal_hint = modal_hint; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->modal_hint = modal_hint; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::composited

guint gdk_window_priv_get_composited(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->composited;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->composited;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->composited;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_composited(GdkWindow * self, guint composited) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->composited = composited; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->composited = composited; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->composited = composited; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::has_alpha_background

guint gdk_window_priv_get_has_alpha_background(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->has_alpha_background;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->has_alpha_background;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->has_alpha_background;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_has_alpha_background(GdkWindow * self, guint has_alpha_background) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->has_alpha_background = has_alpha_background; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->has_alpha_background = has_alpha_background; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->has_alpha_background = has_alpha_background; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::destroyed

guint gdk_window_priv_get_destroyed(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->destroyed;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->destroyed;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->destroyed;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_destroyed(GdkWindow * self, guint destroyed) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->destroyed = destroyed; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->destroyed = destroyed; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->destroyed = destroyed; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::accept_focus

guint gdk_window_priv_get_accept_focus(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->accept_focus;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->accept_focus;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->accept_focus;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_accept_focus(GdkWindow * self, guint accept_focus) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->accept_focus = accept_focus; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->accept_focus = accept_focus; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->accept_focus = accept_focus; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::focus_on_map

guint gdk_window_priv_get_focus_on_map(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->focus_on_map;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->focus_on_map;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->focus_on_map;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_focus_on_map(GdkWindow * self, guint focus_on_map) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->focus_on_map = focus_on_map; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->focus_on_map = focus_on_map; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->focus_on_map = focus_on_map; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::shaped

guint gdk_window_priv_get_shaped(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->shaped;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->shaped;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->shaped;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_shaped(GdkWindow * self, guint shaped) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->shaped = shaped; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->shaped = shaped; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->shaped = shaped; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::support_multidevice

guint gdk_window_priv_get_support_multidevice(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->support_multidevice;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->support_multidevice;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->support_multidevice;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_support_multidevice(GdkWindow * self, guint support_multidevice) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->support_multidevice = support_multidevice; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->support_multidevice = support_multidevice; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->support_multidevice = support_multidevice; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::synthesize_crossing_event_queued

gboolean gdk_window_priv_get_synthesize_crossing_event_queued_supported() {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return TRUE;
    case 1: return TRUE;
    case 2: return FALSE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

guint gdk_window_priv_get_synthesize_crossing_event_queued_or_abort(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->synthesize_crossing_event_queued;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->synthesize_crossing_event_queued;
    case 2: g_error("GdkWindow::synthesize_crossing_event_queued not supported on this GTK"); g_abort();
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_synthesize_crossing_event_queued_or_abort(GdkWindow * self, guint synthesize_crossing_event_queued) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->synthesize_crossing_event_queued = synthesize_crossing_event_queued; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->synthesize_crossing_event_queued = synthesize_crossing_event_queued; break;
    case 2: g_error("GdkWindow::synthesize_crossing_event_queued not supported on this GTK"); g_abort();
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::effective_visibility

guint gdk_window_priv_get_effective_visibility(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->effective_visibility;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->effective_visibility;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->effective_visibility;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_effective_visibility(GdkWindow * self, guint effective_visibility) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->effective_visibility = effective_visibility; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->effective_visibility = effective_visibility; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->effective_visibility = effective_visibility; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::visibility

guint gdk_window_priv_get_visibility(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->visibility;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->visibility;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->visibility;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_visibility(GdkWindow * self, guint visibility) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->visibility = visibility; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->visibility = visibility; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->visibility = visibility; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::native_visibility

guint gdk_window_priv_get_native_visibility(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->native_visibility;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->native_visibility;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->native_visibility;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_native_visibility(GdkWindow * self, guint native_visibility) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->native_visibility = native_visibility; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->native_visibility = native_visibility; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->native_visibility = native_visibility; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::viewable

guint gdk_window_priv_get_viewable(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->viewable;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->viewable;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->viewable;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_viewable(GdkWindow * self, guint viewable) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->viewable = viewable; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->viewable = viewable; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->viewable = viewable; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::applied_shape

guint gdk_window_priv_get_applied_shape(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->applied_shape;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->applied_shape;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->applied_shape;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_applied_shape(GdkWindow * self, guint applied_shape) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->applied_shape = applied_shape; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->applied_shape = applied_shape; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->applied_shape = applied_shape; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::in_update

guint gdk_window_priv_get_in_update(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->in_update;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->in_update;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->in_update;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_in_update(GdkWindow * self, guint in_update) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->in_update = in_update; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->in_update = in_update; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->in_update = in_update; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::geometry_dirty

guint gdk_window_priv_get_geometry_dirty(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->geometry_dirty;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->geometry_dirty;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->geometry_dirty;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_geometry_dirty(GdkWindow * self, guint geometry_dirty) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->geometry_dirty = geometry_dirty; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->geometry_dirty = geometry_dirty; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->geometry_dirty = geometry_dirty; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::event_compression

guint gdk_window_priv_get_event_compression(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->event_compression;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->event_compression;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->event_compression;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_event_compression(GdkWindow * self, guint event_compression) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->event_compression = event_compression; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->event_compression = event_compression; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->event_compression = event_compression; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::frame_clock_events_paused

guint gdk_window_priv_get_frame_clock_events_paused(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->frame_clock_events_paused;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->frame_clock_events_paused;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->frame_clock_events_paused;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_frame_clock_events_paused(GdkWindow * self, guint frame_clock_events_paused) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->frame_clock_events_paused = frame_clock_events_paused; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->frame_clock_events_paused = frame_clock_events_paused; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->frame_clock_events_paused = frame_clock_events_paused; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::impl_window

GdkWindow * gdk_window_priv_get_impl_window(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->impl_window;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->impl_window;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->impl_window;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_impl_window(GdkWindow * self, GdkWindow * impl_window) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->impl_window = impl_window; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->impl_window = impl_window; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->impl_window = impl_window; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::update_and_descendants_freeze_count

guint gdk_window_priv_get_update_and_descendants_freeze_count(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->update_and_descendants_freeze_count;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->update_and_descendants_freeze_count;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->update_and_descendants_freeze_count;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_update_and_descendants_freeze_count(GdkWindow * self, guint update_and_descendants_freeze_count) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->update_and_descendants_freeze_count = update_and_descendants_freeze_count; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->update_and_descendants_freeze_count = update_and_descendants_freeze_count; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->update_and_descendants_freeze_count = update_and_descendants_freeze_count; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::abs_x

gint gdk_window_priv_get_abs_x(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->abs_x;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->abs_x;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->abs_x;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_abs_x(GdkWindow * self, gint abs_x) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->abs_x = abs_x; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->abs_x = abs_x; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->abs_x = abs_x; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::abs_y

gint gdk_window_priv_get_abs_y(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->abs_y;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->abs_y;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->abs_y;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_abs_y(GdkWindow * self, gint abs_y) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->abs_y = abs_y; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->abs_y = abs_y; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->abs_y = abs_y; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::width

gint gdk_window_priv_get_width(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->width;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->width;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->width;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_width(GdkWindow * self, gint width) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->width = width; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->width = width; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->width = width; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::height

gint gdk_window_priv_get_height(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->height;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->height;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->height;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_height(GdkWindow * self, gint height) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->height = height; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->height = height; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->height = height; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::shadow_top

gint gdk_window_priv_get_shadow_top(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->shadow_top;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->shadow_top;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->shadow_top;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_shadow_top(GdkWindow * self, gint shadow_top) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->shadow_top = shadow_top; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->shadow_top = shadow_top; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->shadow_top = shadow_top; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::shadow_left

gint gdk_window_priv_get_shadow_left(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->shadow_left;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->shadow_left;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->shadow_left;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_shadow_left(GdkWindow * self, gint shadow_left) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->shadow_left = shadow_left; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->shadow_left = shadow_left; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->shadow_left = shadow_left; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::shadow_right

gint gdk_window_priv_get_shadow_right(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->shadow_right;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->shadow_right;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->shadow_right;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_shadow_right(GdkWindow * self, gint shadow_right) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->shadow_right = shadow_right; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->shadow_right = shadow_right; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->shadow_right = shadow_right; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::shadow_bottom

gint gdk_window_priv_get_shadow_bottom(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->shadow_bottom;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->shadow_bottom;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->shadow_bottom;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_shadow_bottom(GdkWindow * self, gint shadow_bottom) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->shadow_bottom = shadow_bottom; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->shadow_bottom = shadow_bottom; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->shadow_bottom = shadow_bottom; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::num_offscreen_children

guint gdk_window_priv_get_num_offscreen_children(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->num_offscreen_children;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->num_offscreen_children;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->num_offscreen_children;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_num_offscreen_children(GdkWindow * self, guint num_offscreen_children) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->num_offscreen_children = num_offscreen_children; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->num_offscreen_children = num_offscreen_children; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->num_offscreen_children = num_offscreen_children; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::clip_region

cairo_region_t * gdk_window_priv_get_clip_region(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->clip_region;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->clip_region;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->clip_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_clip_region(GdkWindow * self, cairo_region_t * clip_region) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->clip_region = clip_region; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->clip_region = clip_region; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->clip_region = clip_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::cursor

GdkCursor * gdk_window_priv_get_cursor(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->cursor;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->cursor;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->cursor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_cursor(GdkWindow * self, GdkCursor * cursor) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->cursor = cursor; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->cursor = cursor; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->cursor = cursor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::device_cursor

GHashTable * gdk_window_priv_get_device_cursor(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->device_cursor;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->device_cursor;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->device_cursor;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_device_cursor(GdkWindow * self, GHashTable * device_cursor) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->device_cursor = device_cursor; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->device_cursor = device_cursor; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->device_cursor = device_cursor; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::shape

cairo_region_t * gdk_window_priv_get_shape(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->shape;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->shape;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->shape;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_shape(GdkWindow * self, cairo_region_t * shape) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->shape = shape; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->shape = shape; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->shape = shape; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::input_shape

cairo_region_t * gdk_window_priv_get_input_shape(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->input_shape;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->input_shape;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->input_shape;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_input_shape(GdkWindow * self, cairo_region_t * input_shape) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->input_shape = input_shape; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->input_shape = input_shape; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->input_shape = input_shape; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::devices_inside

GList * gdk_window_priv_get_devices_inside(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->devices_inside;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->devices_inside;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->devices_inside;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_devices_inside(GdkWindow * self, GList * devices_inside) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->devices_inside = devices_inside; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->devices_inside = devices_inside; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->devices_inside = devices_inside; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::device_events

GHashTable * gdk_window_priv_get_device_events(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->device_events;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->device_events;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->device_events;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_device_events(GdkWindow * self, GHashTable * device_events) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->device_events = device_events; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->device_events = device_events; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->device_events = device_events; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::source_event_masks

GHashTable * gdk_window_priv_get_source_event_masks(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->source_event_masks;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->source_event_masks;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->source_event_masks;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_source_event_masks(GdkWindow * self, GHashTable * source_event_masks) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->source_event_masks = source_event_masks; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->source_event_masks = source_event_masks; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->source_event_masks = source_event_masks; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::device_added_handler_id

gulong * gdk_window_priv_get_device_added_handler_id_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (gulong *)&((struct _GdkWindow_v3_22_0*)self)->device_added_handler_id;
    case 1: return (gulong *)&((struct _GdkWindow_v3_22_19*)self)->device_added_handler_id;
    case 2: return (gulong *)&((struct _GdkWindow_v3_24_11*)self)->device_added_handler_id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::device_changed_handler_id

gulong * gdk_window_priv_get_device_changed_handler_id_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (gulong *)&((struct _GdkWindow_v3_22_0*)self)->device_changed_handler_id;
    case 1: return (gulong *)&((struct _GdkWindow_v3_22_19*)self)->device_changed_handler_id;
    case 2: return (gulong *)&((struct _GdkWindow_v3_24_11*)self)->device_changed_handler_id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::frame_clock

GdkFrameClock * gdk_window_priv_get_frame_clock(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->frame_clock;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->frame_clock;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->frame_clock;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_frame_clock(GdkWindow * self, GdkFrameClock * frame_clock) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->frame_clock = frame_clock; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->frame_clock = frame_clock; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->frame_clock = frame_clock; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::invalidate_handler

GdkWindowInvalidateHandlerFunc * gdk_window_priv_get_invalidate_handler_ptr(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return (GdkWindowInvalidateHandlerFunc *)&((struct _GdkWindow_v3_22_0*)self)->invalidate_handler;
    case 1: return (GdkWindowInvalidateHandlerFunc *)&((struct _GdkWindow_v3_22_19*)self)->invalidate_handler;
    case 2: return (GdkWindowInvalidateHandlerFunc *)&((struct _GdkWindow_v3_24_11*)self)->invalidate_handler;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::drawing_context

GdkDrawingContext * gdk_window_priv_get_drawing_context(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return ((struct _GdkWindow_v3_22_0*)self)->drawing_context;
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->drawing_context;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->drawing_context;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_drawing_context(GdkWindow * self, GdkDrawingContext * drawing_context) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: ((struct _GdkWindow_v3_22_0*)self)->drawing_context = drawing_context; break;
    case 1: ((struct _GdkWindow_v3_22_19*)self)->drawing_context = drawing_context; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->drawing_context = drawing_context; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::opaque_region

gboolean gdk_window_priv_get_opaque_region_supported() {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return TRUE;
    case 2: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

cairo_region_t * gdk_window_priv_get_opaque_region_or_abort(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: g_error("GdkWindow::opaque_region not supported on this GTK"); g_abort();
    case 1: return ((struct _GdkWindow_v3_22_19*)self)->opaque_region;
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->opaque_region;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_opaque_region_or_abort(GdkWindow * self, cairo_region_t * opaque_region) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: g_error("GdkWindow::opaque_region not supported on this GTK"); g_abort();
    case 1: ((struct _GdkWindow_v3_22_19*)self)->opaque_region = opaque_region; break;
    case 2: ((struct _GdkWindow_v3_24_11*)self)->opaque_region = opaque_region; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

// GdkWindow::synthesized_crossing_event_id

gboolean gdk_window_priv_get_synthesized_crossing_event_id_supported() {
  switch (gdk_window_priv_get_version_id()) {
    case 0: return FALSE;
    case 1: return FALSE;
    case 2: return TRUE;
    default: g_error("Invalid version ID"); g_abort();
  }
}

guint gdk_window_priv_get_synthesized_crossing_event_id_or_abort(GdkWindow * self) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: g_error("GdkWindow::synthesized_crossing_event_id not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindow::synthesized_crossing_event_id not supported on this GTK"); g_abort();
    case 2: return ((struct _GdkWindow_v3_24_11*)self)->synthesized_crossing_event_id;
    default: g_error("Invalid version ID"); g_abort();
  }
}

void gdk_window_priv_set_synthesized_crossing_event_id_or_abort(GdkWindow * self, guint synthesized_crossing_event_id) {
  switch (gdk_window_priv_get_version_id()) {
    case 0: g_error("GdkWindow::synthesized_crossing_event_id not supported on this GTK"); g_abort();
    case 1: g_error("GdkWindow::synthesized_crossing_event_id not supported on this GTK"); g_abort();
    case 2: ((struct _GdkWindow_v3_24_11*)self)->synthesized_crossing_event_id = synthesized_crossing_event_id; break;
    default: g_error("Invalid version ID"); g_abort();
  }
}

#endif // GDK_WINDOW_PRIV_H
