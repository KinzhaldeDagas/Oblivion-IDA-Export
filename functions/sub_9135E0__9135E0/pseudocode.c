int __thiscall sub_9135E0(_DWORD *this, _OWORD *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  _OWORD *v10; // eax

  v3 = *(this + 1);
  v4 = *(_DWORD *)(v3 + 0x24);
  v5 = *(_DWORD *)(v3 + 0x20);
  v6 = v3 + 0x1C;
  if ( v5 == (v4 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v6, 4);
  *(_DWORD *)(*(_DWORD *)v6 + 4 * (*(_DWORD *)(v6 + 4))++) = 1;
  v7 = *(this + 1);
  v8 = *(_DWORD *)(v7 + 0x14);
  v9 = v7 + 0x10;
  if ( v8 == (*(_DWORD *)(v7 + 0x18) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v9, 0x10);
  v10 = (_OWORD *)(*(_DWORD *)v9 + 0x10 * (*(_DWORD *)(v9 + 4))++);
  *v10 = *a2;
  *((_BYTE *)this + 0x18) = 1;
  return v8;
}
