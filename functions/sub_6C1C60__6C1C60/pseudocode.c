int __cdecl sub_6C1C60(float a1, int a2, int a3, _BYTE *a4)
{
  int result; // eax

  result = a2; /*0x6c1c6f*/
  if ( a1 >= 1.0 ) /*0x6c1c73*/
    result = a3; /*0x6c1c75*/
  *a4 = *(_BYTE *)(result + 4); /*0x6c1c7c*/
  return result; /*0x6c1c7e*/
}
