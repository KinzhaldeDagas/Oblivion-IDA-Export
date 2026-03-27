int __usercall sub_7439F0@<eax>(int a1@<eax>)
{
  int result; // eax
  unsigned int v3; // edi
  int v4; // eax
  _DWORD *v5; // esi
  size_t v6; // [esp-4h] [ebp-Ch]

  result = *(_DWORD *)(a1 + 0x1C);
  v3 = *(_DWORD *)(result + 0x14);
  if ( v3 > *(_DWORD *)(a1 + 0x10) )
    v3 = *(_DWORD *)(a1 + 0x10);
  if ( v3 )
  {
    LODWORD(v6) = v3;
    memcpy(*(void **)(a1 + 0xC), *(const void **)(result + 0x10), v6);
    v4 = *(_DWORD *)(a1 + 0x1C);
    *(_DWORD *)(a1 + 0xC) += v3;
    *(_DWORD *)(v4 + 0x10) += v3;
    *(_DWORD *)(a1 + 0x14) += v3;
    *(_DWORD *)(a1 + 0x10) -= v3;
    result = *(_DWORD *)(a1 + 0x1C);
    *(_DWORD *)(result + 0x14) -= v3;
    v5 = *(_DWORD **)(a1 + 0x1C);
    if ( !v5[5] )
      v5[4] = v5[2];
  }
  return result;
}
