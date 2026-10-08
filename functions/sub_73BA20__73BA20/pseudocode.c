char *__cdecl sub_73BA20(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x19; /*0x73ba3b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x73ba44*/
  switch ( a2 ) /*0x73ba52*/
  {
    case 0: /*0x73ba52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = PROJECTED_LIGHT", v2), ArgList); /*0x73ba61*/
      result = v3; /*0x73ba69*/
      break; /*0x73ba6e*/
    case 1: /*0x73ba52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = PROJECTED_SHADOW", v2), ArgList); /*0x73ba77*/
      result = v3; /*0x73ba7f*/
      break; /*0x73ba84*/
    case 2: /*0x73ba52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = ENVIRONMENT_MAP", v2), ArgList); /*0x73ba8d*/
      result = v3; /*0x73ba95*/
      break; /*0x73ba9a*/
    case 3: /*0x73ba52*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = FOG_MAP", v2), ArgList); /*0x73baa3*/
      result = (char *)def_73BA52((int)v3); /*0x73baa9*/
      break; /*0x73baa9*/
    default:
      JUMPOUT(0x73BAAB); /*0x73baab*/
  }
  return result; /*0x73ba6b*/
}
