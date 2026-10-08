char *__cdecl sub_73BAD0(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  char *result; // eax

  v2 = strlen(ArgList) + 0x19; /*0x73baeb*/
  v3 = (char *)FormHeapAlloc(v2); /*0x73baf4*/
  switch ( a2 ) /*0x73bb02*/
  {
    case 0: /*0x73bb02*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = WORLD_PARALLEL", v2), ArgList); /*0x73bb11*/
      result = v3; /*0x73bb19*/
      break; /*0x73bb1e*/
    case 1: /*0x73bb02*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = WORLD_PERSPECTIVE", v2), ArgList); /*0x73bb27*/
      result = v3; /*0x73bb2f*/
      break; /*0x73bb34*/
    case 2: /*0x73bb02*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = SPHERE_MAP", v2), ArgList); /*0x73bb3d*/
      result = v3; /*0x73bb45*/
      break; /*0x73bb4a*/
    case 3: /*0x73bb02*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = SPECULAR_CUBE_MAP", v2), ArgList); /*0x73bb53*/
      result = v3; /*0x73bb5b*/
      break; /*0x73bb60*/
    case 4: /*0x73bb02*/
      sub_6C5D40(v3, v3, __PAIR64__("%s = DIFFUSE_CUBE_MAP", v2), ArgList); /*0x73bb69*/
      result = (char *)def_73BB02((int)v3); /*0x73bb6f*/
      break; /*0x73bb6f*/
    default:
      JUMPOUT(0x73BB71); /*0x73bb71*/
  }
  return result; /*0x73bb1b*/
}
