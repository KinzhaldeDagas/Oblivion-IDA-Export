char *__cdecl sub_73BAD0(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x19;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = WORLD_PARALLEL", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = WORLD_PERSPECTIVE", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = SPHERE_MAP", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = SPECULAR_CUBE_MAP", v2), ArgList);
      result = v3;
      break;
    case 4:
      sub_6C5D40(v3, v3, __PAIR64__("%s = DIFFUSE_CUBE_MAP", v2), ArgList);
      result = def_73BB02();
      break;
    default:
      JUMPOUT(0x73BB71);
  }
  return result;
}
