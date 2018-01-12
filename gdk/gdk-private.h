#ifndef __GDK__PRIVATE_H__
#define __GDK__PRIVATE_H__

#include <gdk/gdk.h>
#include "gdk/gdkinternals.h"

/* Private API for use in GTK+ */

GdkDisplay *    gdk_display_open_default        (void);

gboolean        gdk_device_grab_info            (GdkDisplay  *display,
                                                 GdkDevice   *device,
                                                 GdkWindow  **grab_window,
                                                 gboolean    *owner_events);

void            gdk_add_option_entries          (GOptionGroup *group);

void            gdk_pre_parse                   (void);

void            gdk_window_freeze_toplevel_updates      (GdkWindow *window);
void            gdk_window_thaw_toplevel_updates        (GdkWindow *window);

gboolean        gdk_window_supports_edge_constraints    (GdkWindow *window);

void            gdk_window_move_to_rect         (GdkWindow          *window,
                                                 const GdkRectangle *rect,
                                                 GdkGravity          rect_anchor,
                                                 GdkGravity          window_anchor,
                                                 GdkAnchorHints      anchor_hints,
                                                 gint                rect_anchor_dx,
                                                 gint                rect_anchor_dy);

GObject *       gdk_event_get_user_data         (const GdkEvent *event);

guint32         gdk_display_get_last_seen_time  (GdkDisplay *display);

void gdk_display_set_double_click_time     (GdkDisplay   *display,
                                            guint         msec);
void gdk_display_set_double_click_distance (GdkDisplay   *display,
                                            guint         distance);
void gdk_display_set_cursor_theme          (GdkDisplay   *display,
                                            const char   *theme,
                                            int           size);

#endif /* __GDK__PRIVATE_H__ */
