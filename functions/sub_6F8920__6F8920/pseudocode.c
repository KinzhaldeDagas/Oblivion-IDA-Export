signed int __cdecl sub_6F8920(_DWORD *a1)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  if ( a1 ) /*0x6f8947*/
  {
    if ( !*a1 ) /*0x6f8949*/
    {
      v2 = (_DWORD *)FormHeapAlloc(0x18u); /*0x6f8950*/
      if ( v2 ) /*0x6f8966*/
        v3 = sub_6F8630(v2, 0, 0, 0); /*0x6f8970*/
      else
        v3 = 0; /*0x6f8977*/
      *a1 = v3; /*0x6f8979*/
    }
  }
  return 2; /*0x6f8980*/
}
