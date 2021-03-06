/* player/class.c
 * Copyright (c) 2011 elly+angband@leptoquark.net. See COPYING.
 */

#include "angband.h"

struct player_class *player_id2class(guid id)
{
	struct player_class *c;
	for (c = classes; c; c = c->next)
		if (guid_eq(c->cidx, id))
			break;
	return c;
}
