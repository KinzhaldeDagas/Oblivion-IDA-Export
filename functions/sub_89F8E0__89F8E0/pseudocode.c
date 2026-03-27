int __thiscall sub_89F8E0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int result; // eax

  v2 = a2;
  sub_712A20(a2);
  sub_89D650(this, (signed int)v2);
  v4 = ((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)(this, &a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 0x14);
    if ( v6 >= 0 )
    {
      v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v7 )
        v7 = dword_BA7D9C;
      sub_8A75D0(v7, *(_DWORD **)(v5 + 0xC), 8 * v6, 0x14);
    }
    v8 = *(_DWORD *)(v5 + 0x14) & 0x40000000 | 0x80000000;
    *(_DWORD *)(v5 + 0xC) = 0;
    *(_DWORD *)(v5 + 0x10) = 0;
    *(_DWORD *)(v5 + 0x14) = v8;
  }
  if ( v2[1] < 9 && (*(_DWORD *)v5 & 0x20) != 0 )
    *(_DWORD *)v5 = *(_DWORD *)v5 & 0xFFFF7FDF | 0x8000;
  result = *(_DWORD *)v5;
  if ( (*(_DWORD *)v5 & 0x3F) == 8 )
  {
    result &= ~0x4000u;
    *(_DWORD *)v5 = result;
  }
  return result;
}
