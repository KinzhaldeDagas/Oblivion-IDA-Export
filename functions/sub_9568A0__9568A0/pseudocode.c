int __thiscall sub_9568A0(int *this)
{
  int v2; // edi
  signed int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v7; // [esp+Ch] [ebp-4h]

  v7 = *(this + 3);
  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x30, 0x25);
  v3 = v7;
  *(_WORD *)(v2 + 4) = 0x30;
  *(_WORD *)(v2 + 6) = 1;
  *(_DWORD *)v2 = &hkMoppCode::`vftable';
  *(_DWORD *)(v2 + 0x20) = 0;
  *(_DWORD *)(v2 + 0x24) = 0;
  *(_DWORD *)(v2 + 0x28) = 0x80000000;
  *(_OWORD *)(v2 + 0x10) = 0;
  if ( (*(_DWORD *)(v2 + 0x28) & 0x3FFFFFFF) < v7 )
  {
    sub_8A6E40((const void **)(v2 + 0x20), v7, 1);
    v3 = v7;
  }
  v4 = *(_DWORD *)(v2 + 0x28) & 0x3FFFFFFF;
  if ( v4 < v3 )
  {
    v5 = 2 * v4;
    if ( v3 < v5 )
      v3 = v5;
    sub_8A6E40((const void **)(v2 + 0x20), v3, 1);
    v3 = v7;
  }
  *(_DWORD *)(v2 + 0x24) = v3;
  sub_8B1890(*(void **)(v2 + 0x20), (const void *)(*(this + 2) + *(this + 4) - *(this + 3)), v3);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, *(this + 4));
  *(this + 3) = 0;
  *(this + 2) = v7;
  return v2;
}
