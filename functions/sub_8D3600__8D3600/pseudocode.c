int __thiscall sub_8D3600(const void **this, int a2, _DWORD *a3)
{
  const void **v3; // esi
  int result; // eax

  v3 = this + 5;
  if ( *(this + 6) == (const void *)((unsigned int)*(this + 7) & 0x3FFFFFFF) )
    sub_8A6EE0(v3, 0x40);
  result = (int)*v3 + 0x40 * (_DWORD)v3[1];
  v3[1] = (char *)v3[1] + 1;
  *(_DWORD *)result = *(_DWORD *)(a2 + 0x3034);
  *(_DWORD *)(result + 0xC) = *(_DWORD *)(a2 + 0x3030);
  *(_OWORD *)(result + 0x20) = *(_OWORD *)(a2 + 0x10);
  *(_OWORD *)(result + 0x30) = *(_OWORD *)(a2 + 0x20);
  *(_DWORD *)(result + 4) = a3[5] + *(_DWORD *)(a3[5] + 0x10);
  *(_DWORD *)(result + 8) = a3[6] + *(_DWORD *)(a3[6] + 0x10);
  *(_DWORD *)(result + 0x10) = *(_DWORD *)(a2 + 0x3038);
  *(_DWORD *)(result + 0x14) = *(_DWORD *)(a2 + 0x303C);
  *(_DWORD *)(result + 0x18) = a3[4];
  return result;
}
