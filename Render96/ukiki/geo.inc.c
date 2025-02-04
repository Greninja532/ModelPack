// 0x0C000110
const GeoLayout ukiki_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 80),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_root_mesh),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 99, -11, NULL),
            GEO_OPEN_NODE(),
               GEO_SWITCH_CASE(6, geo_switch_anim_state),
               GEO_OPEN_NODE(),
                  GEO_NODE_START(),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_001_mesh),
                  GEO_CLOSE_NODE(),
                  GEO_NODE_START(),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_001_mesh),
                  GEO_CLOSE_NODE(),
                  GEO_NODE_START(),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_001_mesh),
                     GEO_OPEN_NODE(),
                        GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 120, 10, 0, -90, -90, 0, mario_capbase),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
                  GEO_NODE_START(),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(1, 64, 0, 0, ukiki_000_offset_001_mesh),
                     GEO_OPEN_NODE(),
                        GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 120, 10, 0, -90, -90, 0, mario_capbase),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
				GEO_NODE_START(),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_001_mesh),
                     GEO_OPEN_NODE(),
                        GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 120, 10, 0, -90, -90, 0, luigi_capbase),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
				      GEO_NODE_START(),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_001_mesh),
                     GEO_OPEN_NODE(),
                        GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 120, 10, 0, -90, -90, 0, wario_capbase),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 69, -9, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_002_mesh),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 86, 0, 0, ukiki_000_offset_003_mesh),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 64, 0, 0, ukiki_000_offset_004_mesh),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, -71, 68, -9, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_005_mesh),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 86, 0, 0, ukiki_000_offset_006_mesh),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 64, 0, 0, ukiki_000_offset_007_mesh),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 43, -22, -1, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 46, 0, 0, ukiki_000_offset_009_mesh),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 36, 0, 0, ukiki_000_offset_010_mesh),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, -43, -22, -1, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_011_mesh),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 46, 0, 0, NULL),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 36, 0, 0, ukiki_000_offset_013_mesh),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -15, -57, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_014_mesh),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 45, 0, 0, ukiki_000_offset_015_mesh),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 46, 0, 0, ukiki_000_offset_016_mesh),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
