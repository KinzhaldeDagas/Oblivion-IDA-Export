char *__cdecl sub_721A90(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x16;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALWAYS_FACE_CAMERA", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ROTATE_ABOUT_UP", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = RIGID_FACE_CAMERA", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ALWAYS_FACE_CENTER", v2), ArgList);
      result = v3;
      break;
    case 4:
      sub_6C5D40(v3, v3, __PAIR64__("%s = RIGID_FACE_CENTER", v2), ArgList);
      result = v3;
      break;
    case 5:
      sub_6C5D40(v3, v3, __PAIR64__("%s = BSROTATE_ABOUT_UP", v2), ArgList);
      result = def_721AC6();
      break;
    default:
      JUMPOUT(0x721B4B);
  }
  return result;
}
