#include "src/game/envfx_snow.h"

const GeoLayout king_bobomb_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 300),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_ALPHA, king_bobomb_000_displaylist_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -243, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 488, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 110, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, king_bobomb_000_offset_005_mesh),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, king_bobomb_004_offset_mesh),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, king_bobomb_005_offset_mesh),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, king_bobomb_006_offset_mesh),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 243, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 488, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 110, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, king_bobomb_000_offset_009_mesh),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -1, 36, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 548, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(LAYER_ALPHA, king_bobomb_000_displaylist_003_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 189, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_ALPHA, king_bobomb_000_displaylist_004_mesh),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ASM(0, geo_update_held_mario_pos),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 1, 36, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 548, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(LAYER_ALPHA, king_bobomb_000_displaylist_005_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 189, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_ALPHA, king_bobomb_000_displaylist_006_mesh),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, king_bobomb_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, king_bobomb_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
