const char *__cdecl sub_90BA40(int a1)
{
  const char *result; // eax

  switch ( a1 ) /*0x90ba4e*/
  {
    case 0xFFFFFFFF: /*0x90ba4e*/
      result = "HK_SHAPE_ALL"; /*0x90ba55*/
      break; /*0x90ba5a*/
    case 1: /*0x90ba4e*/
      result = "HK_SHAPE_CONVEX"; /*0x90ba5b*/
      break; /*0x90ba60*/
    case 2: /*0x90ba4e*/
      result = "HK_SHAPE_COLLECTION"; /*0x90ba61*/
      break; /*0x90ba66*/
    case 3: /*0x90ba4e*/
      result = "HK_SHAPE_BV_TREE"; /*0x90ba67*/
      break; /*0x90ba6c*/
    case 4: /*0x90ba4e*/
      result = "HK_SHAPE_SPHERE"; /*0x90ba6d*/
      break; /*0x90ba72*/
    case 5: /*0x90ba4e*/
      result = "HK_SHAPE_CYLINDER"; /*0x90ba85*/
      break; /*0x90ba8a*/
    case 6: /*0x90ba4e*/
      result = "HK_SHAPE_TRIANGLE"; /*0x90ba73*/
      break; /*0x90ba78*/
    case 7: /*0x90ba4e*/
      result = "HK_SHAPE_BOX"; /*0x90ba79*/
      break; /*0x90ba7e*/
    case 8: /*0x90ba4e*/
      result = "HK_SHAPE_CAPSULE"; /*0x90ba7f*/
      break; /*0x90ba84*/
    case 9: /*0x90ba4e*/
      result = "HK_SHAPE_CONVEX_VERTICES"; /*0x90ba8b*/
      break; /*0x90ba90*/
    case 0xA: /*0x90ba4e*/
      result = "HK_SHAPE_CONVEX_PIECE"; /*0x90ba91*/
      break; /*0x90ba96*/
    case 0xB: /*0x90ba4e*/
      result = "HK_SHAPE_MULTI_SPHERE"; /*0x90ba97*/
      break; /*0x90ba9c*/
    case 0xC: /*0x90ba4e*/
      result = "HK_SHAPE_LIST"; /*0x90ba9d*/
      break; /*0x90baa2*/
    case 0xD: /*0x90ba4e*/
      result = "HK_SHAPE_CONVEX_LIST"; /*0x90baa3*/
      break; /*0x90baa8*/
    case 0xE: /*0x90ba4e*/
      result = "HK_SHAPE_CONVEX_TRANSLATE"; /*0x90bae5*/
      break; /*0x90baea*/
    case 0xF: /*0x90ba4e*/
      result = "HK_SHAPE_CONVEX_TRANSFORM"; /*0x90baeb*/
      break; /*0x90baf0*/
    case 0x10: /*0x90ba4e*/
      result = "HK_SHAPE_TRIANGLE_COLLECTION"; /*0x90baa9*/
      break; /*0x90baae*/
    case 0x11: /*0x90ba4e*/
      result = "HK_SHAPE_MULTI_RAY"; /*0x90baaf*/
      break; /*0x90bab4*/
    case 0x12: /*0x90ba4e*/
      result = "HK_SHAPE_HEIGHT_FIELD"; /*0x90bab5*/
      break; /*0x90baba*/
    case 0x13: /*0x90ba4e*/
      result = "HK_SHAPE_SAMPLED_HEIGHT_FIELD"; /*0x90babb*/
      break; /*0x90bac0*/
    case 0x14: /*0x90ba4e*/
      result = "HK_SHAPE_TRI_PATCH"; /*0x90bac7*/
      break; /*0x90bacc*/
    case 0x15: /*0x90ba4e*/
      result = "HK_SHAPE_SPHERE_REP"; /*0x90bac1*/
      break; /*0x90bac6*/
    case 0x16: /*0x90ba4e*/
      result = "HK_SHAPE_BV"; /*0x90bacd*/
      break; /*0x90bad2*/
    case 0x17: /*0x90ba4e*/
      result = "HK_SHAPE_PLANE"; /*0x90bad3*/
      break; /*0x90bad8*/
    case 0x18: /*0x90ba4e*/
      result = "HK_SHAPE_MOPP"; /*0x90bad9*/
      break; /*0x90bade*/
    case 0x19: /*0x90ba4e*/
      result = "HK_SHAPE_TRANSFORM"; /*0x90badf*/
      break; /*0x90bae4*/
    case 0x1A: /*0x90ba4e*/
      result = "HK_SHAPE_PHANTOM_CALLBACK"; /*0x90baf1*/
      break; /*0x90baf6*/
    case 0x1B: /*0x90ba4e*/
      result = "HK_SHAPE_USER0"; /*0x90baf7*/
      break; /*0x90bafc*/
    case 0x1C: /*0x90ba4e*/
      result = "HK_SHAPE_USER1"; /*0x90bafd*/
      break; /*0x90bb02*/
    case 0x1D: /*0x90ba4e*/
      result = "HK_SHAPE_USER2"; /*0x90bb03*/
      break; /*0x90bb08*/
    default:
      result = "unknown"; /*0x90bb09*/
      break; /*0x90bb09*/
  }
  return result; /*0x90ba5a*/
}
