_WORD *__cdecl sub_8F0BA0(_WORD *a1)
{
  _WORD *result; // eax

  if ( a1 ) /*0x8f0ba7*/
  {
    result = sub_9156C0(a1); /*0x8f0bab*/
    *(_DWORD *)a1 = &off_A9B198; /*0x8f0bb0*/
  }
  return result; /*0x8f0bb6*/
}
