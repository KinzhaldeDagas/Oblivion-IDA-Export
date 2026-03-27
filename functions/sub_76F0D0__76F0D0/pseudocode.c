int __cdecl sub_76F0D0(int a1)
{
  _DWORD *v1; // edx
  int result; // eax
  int v3; // esi
  _DWORD *i; // edi

  v1 = *(_DWORD **)(a1 + 0x24);
  result = 0;
  v3 = 0;
  for ( i = *(_DWORD **)(a1 + 0x10); (unsigned __int16)v3 < *(_WORD *)(a1 + 8); ++v3 )
  {
    if ( i )
    {
      *v1 = *i;
      i = (_DWORD *)((char *)i + *(_DWORD *)(a1 + 0x18));
    }
    else
    {
      *v1 = 0xFFFFFFFF;
    }
    v1 = (_DWORD *)((char *)v1 + *(_DWORD *)(a1 + 0x20));
    result += *(_DWORD *)(a1 + 0x1C);
  }
  return result;
}
