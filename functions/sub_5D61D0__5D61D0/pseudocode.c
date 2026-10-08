double __userpurge sub_5D61D0@<st0>(_DWORD *a1@<ecx>, double result@<st0>, int a3, _DWORD *a4)
{
  void *v5; // eax

  if ( a3 == 0x63 ) /*0x5d61da*/
  {
    Tile_GetFloat(a4, 0xFB0); /*0x5d61e5*/
    v5 = (void *)Double_To_SInt32(result); /*0x5d61ea*/
    SkillsMenu_UpdateDetails(a1, v5); /*0x5d61f2*/
    sub_57DE50(4); /*0x5d61f9*/
  }
  else if ( a3 == 4 || a3 == 5 || a3 == 6 || a3 == 7 && Tile_GetFloat((_DWORD *)a1[1], 0xFB7) == fConstant_2 ) /*0x5d6231*/
  {
    sub_57DE50(4); /*0x5d6235*/
  }
  return result; /*0x5d6201*/
}
