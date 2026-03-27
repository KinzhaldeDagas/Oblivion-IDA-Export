int __cdecl sub_4802E0(int a1)
{
  unsigned __int16 v1; // ax
  int v2; // esi

  if ( !a1 )
    return 0;
  v1 = *(_WORD *)(*(_DWORD *)(a1 + 0xB4) + 8);
  if ( !v1 )
    return 0;
  v2 = FormHeapAlloc((0xC * (unsigned __int64)v1) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v1);
  off_B27168(*(_WORD *)(*(_DWORD *)(a1 + 0xB4) + 8), *(_DWORD *)(*(_DWORD *)(a1 + 0xB4) + 0x1C), v2, a1 + 0x64);
  return v2;
}
