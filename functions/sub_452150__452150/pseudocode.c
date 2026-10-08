unsigned int __cdecl sub_452150(int a1, int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // cx

  v2 = *(_WORD *)(a1 + 0xA); /*0x452158*/
  v3 = *(_WORD *)(a2 + 0xA); /*0x45215c*/
  if ( v2 <= v3 ) /*0x452163*/
    return v2 < v3; /*0x45216b*/
  else
    return 0xFFFFFFFF; /*0x452165*/
}
