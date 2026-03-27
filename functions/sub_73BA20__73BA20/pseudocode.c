char *__cdecl sub_73BA20(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x19;
  v3 = (char *)FormHeapAlloc(v2);
  switch ( a2 )
  {
    case 0:
      sub_6C5D40(v3, v3, __PAIR64__("%s = PROJECTED_LIGHT", v2), ArgList);
      result = v3;
      break;
    case 1:
      sub_6C5D40(v3, v3, __PAIR64__("%s = PROJECTED_SHADOW", v2), ArgList);
      result = v3;
      break;
    case 2:
      sub_6C5D40(v3, v3, __PAIR64__("%s = ENVIRONMENT_MAP", v2), ArgList);
      result = v3;
      break;
    case 3:
      sub_6C5D40(v3, v3, __PAIR64__("%s = FOG_MAP", v2), ArgList);
      result = def_73BA52();
      break;
    default:
      JUMPOUT(0x73BAAB);
  }
  return result;
}
