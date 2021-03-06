/* gtkrecentprivatechooser.h - Interface definitions for recent selectors UI
 *
 * Copyright (C) 2006 Emmanuele Bassi
 *
 * All rights reserved
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GTK_RECENT_CHOOSER_PRIVATE_H__
#define __GTK_RECENT_CHOOSER_PRIVATE_H__

#include "gtkrecentmanager.h"
#include "gtkrecentchooser.h"

G_BEGIN_DECLS

GtkRecentManager *_gtk_recent_chooser_get_recent_manager     (GtkRecentChooser  *chooser);
GList *           _gtk_recent_chooser_get_items              (GtkRecentChooser  *chooser,
							      GtkRecentFilter   *filter,
							      GtkRecentSortFunc  func,
							      gpointer           data);

void              _gtk_recent_chooser_item_activated         (GtkRecentChooser  *chooser);
void              _gtk_recent_chooser_selection_changed      (GtkRecentChooser  *chooser);

G_END_DECLS

#endif /* ! __GTK_RECENT_CHOOSER_PRIVATE_H__ */
