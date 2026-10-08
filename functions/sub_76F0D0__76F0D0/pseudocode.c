int __cdecl sub_76F0D0(int a1)
{
  _DWORD *v1; // edx
  int result; // eax
  int v3; // esi
  _DWORD *i; // edi

  v1 = *(_DWORD **)(a1 + 0x24); /*0x76f0d4*/
  result = 0; /*0x76f0d8*/
  v3 = 0; /*0x76f0da*/
  for ( i = *(_DWORD **)(a1 + 0x10); (unsigned __int16)v3 < *(_WORD *)(a1 + 8); ++v3 ) /*0x76f0dc*/
  {
    if ( i ) /*0x76f0e9*/
    {
      *v1 = *i; /*0x76f0ed*/
      i = (_DWORD *)((char *)i + *(_DWORD *)(a1 + 0x18)); /*0x76f0ef*/
    }
    else
    {
      *v1 = 0xFFFFFFFF; /*0x76f105*/
    }
    v1 = (_DWORD *)((char *)v1 + *(_DWORD *)(a1 + 0x20)); /*0x76f0f2*/
    result += *(_DWORD *)(a1 + 0x1C); /*0x76f0f5*/
  }
  return result; /*0x76f102*/
}
