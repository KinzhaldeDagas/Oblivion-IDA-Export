unsigned int __stdcall sub_954860(int a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // ecx
  unsigned int result; // eax

  *(_DWORD *)(a3 + 0x34) = *(_DWORD *)(a2 + 0x34);
  v3 = *(_DWORD *)(a1 + 0x24);
  v4 = *(_DWORD *)(a3 + 0x38);
  result = v3 + v4 - *(_DWORD *)(a2 + 0x34);
  if ( result >= 0x20
    && (v4 > 2 || result >= 0x100)
    && (v4 < 0x20 && *(_DWORD *)(a2 + 0x38) >= 0x20u
     || v4 < 0x100 && *(_DWORD *)(a2 + 0x38) >= 0x100u
     || v4 < 0x10000 && *(_DWORD *)(a2 + 0x38) >= 0x10000u) )
  {
    *(_DWORD *)(a3 + 0x34) = v3;
  }
  return result;
}
