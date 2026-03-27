int __thiscall sub_913370(_DWORD *this, _OWORD *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  _OWORD *v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  _OWORD *v15; // eax
  int v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // esi
  _OWORD *v20; // eax

  v3 = *(this + 1);
  v4 = *(_DWORD *)(v3 + 0x24);
  v5 = *(_DWORD *)(v3 + 0x20);
  v6 = v3 + 0x1C;
  if ( v5 == (v4 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v6, 4);
  *(_DWORD *)(*(_DWORD *)v6 + 4 * (*(_DWORD *)(v6 + 4))++) = 8;
  v7 = *(this + 1);
  v8 = *(_DWORD *)(v7 + 0x14);
  v9 = v7 + 0x10;
  if ( v8 == (*(_DWORD *)(v7 + 0x18) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v9, 0x10);
  v10 = (_OWORD *)(*(_DWORD *)v9 + 0x10 * (*(_DWORD *)(v9 + 4))++);
  *v10 = *a2;
  v11 = *(this + 1);
  v12 = *(_DWORD *)(v11 + 0x18);
  v13 = *(_DWORD *)(v11 + 0x14);
  v14 = v11 + 0x10;
  if ( v13 == (v12 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v14, 0x10);
  v15 = (_OWORD *)(*(_DWORD *)v14 + 0x10 * (*(_DWORD *)(v14 + 4))++);
  *v15 = a2[1];
  v16 = *(this + 1);
  v17 = *(_DWORD *)(v16 + 0x18);
  v18 = *(_DWORD *)(v16 + 0x14);
  v19 = v16 + 0x10;
  if ( v18 == (v17 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v19, 0x10);
  v20 = (_OWORD *)(*(_DWORD *)v19 + 0x10 * (*(_DWORD *)(v19 + 4))++);
  *v20 = a2[2];
  *((_BYTE *)this + 0x16) = 1;
  return v8;
}
