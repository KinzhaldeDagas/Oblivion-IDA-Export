const char *__cdecl sub_90BA40(int a1)
{
  const char *result; // eax

  switch ( a1 )
  {
    case 0xFFFFFFFF:
      result = "HK_SHAPE_ALL";
      break;
    case 1:
      result = "HK_SHAPE_CONVEX";
      break;
    case 2:
      result = "HK_SHAPE_COLLECTION";
      break;
    case 3:
      result = "HK_SHAPE_BV_TREE";
      break;
    case 4:
      result = "HK_SHAPE_SPHERE";
      break;
    case 5:
      result = "HK_SHAPE_CYLINDER";
      break;
    case 6:
      result = "HK_SHAPE_TRIANGLE";
      break;
    case 7:
      result = "HK_SHAPE_BOX";
      break;
    case 8:
      result = "HK_SHAPE_CAPSULE";
      break;
    case 9:
      result = "HK_SHAPE_CONVEX_VERTICES";
      break;
    case 0xA:
      result = "HK_SHAPE_CONVEX_PIECE";
      break;
    case 0xB:
      result = "HK_SHAPE_MULTI_SPHERE";
      break;
    case 0xC:
      result = "HK_SHAPE_LIST";
      break;
    case 0xD:
      result = "HK_SHAPE_CONVEX_LIST";
      break;
    case 0xE:
      result = "HK_SHAPE_CONVEX_TRANSLATE";
      break;
    case 0xF:
      result = "HK_SHAPE_CONVEX_TRANSFORM";
      break;
    case 0x10:
      result = "HK_SHAPE_TRIANGLE_COLLECTION";
      break;
    case 0x11:
      result = "HK_SHAPE_MULTI_RAY";
      break;
    case 0x12:
      result = "HK_SHAPE_HEIGHT_FIELD";
      break;
    case 0x13:
      result = "HK_SHAPE_SAMPLED_HEIGHT_FIELD";
      break;
    case 0x14:
      result = "HK_SHAPE_TRI_PATCH";
      break;
    case 0x15:
      result = "HK_SHAPE_SPHERE_REP";
      break;
    case 0x16:
      result = "HK_SHAPE_BV";
      break;
    case 0x17:
      result = "HK_SHAPE_PLANE";
      break;
    case 0x18:
      result = "HK_SHAPE_MOPP";
      break;
    case 0x19:
      result = "HK_SHAPE_TRANSFORM";
      break;
    case 0x1A:
      result = "HK_SHAPE_PHANTOM_CALLBACK";
      break;
    case 0x1B:
      result = "HK_SHAPE_USER0";
      break;
    case 0x1C:
      result = "HK_SHAPE_USER1";
      break;
    case 0x1D:
      result = "HK_SHAPE_USER2";
      break;
    default:
      result = "unknown";
      break;
  }
  return result;
}
