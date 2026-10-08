signed int __cdecl sub_6F8FC0(_DWORD *a1)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  if ( a1 ) /*0x6f8fe7*/
  {
    if ( !*a1 ) /*0x6f8fe9*/
    {
      v2 = (_DWORD *)FormHeapAlloc(8u); /*0x6f8ff0*/
      if ( v2 ) /*0x6f9006*/
        v3 = sub_6F8DF0(v2, 0); /*0x6f900c*/
      else
        v3 = 0; /*0x6f9013*/
      *a1 = v3; /*0x6f9015*/
    }
  }
  return 2; /*0x6f901c*/
}
