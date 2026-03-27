int __thiscall sub_9136E0(_DWORD *this, int a2, unsigned int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  _OWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  __int128 v13; // [esp+10h] [ebp-10h]

  v4 = *(this + 1) + 0x1C;
  ++*(this + 2);
  if ( *(_DWORD *)(v4 + 4) == (*(_DWORD *)(v4 + 8) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v4, 4);
  *(_DWORD *)(*(_DWORD *)v4 + 4 * (*(_DWORD *)(v4 + 4))++) = 0x16;
  LODWORD(v13) = a2;
  v5 = *(this + 1);
  v6 = *(_DWORD *)(v5 + 0x14);
  v7 = v5 + 0x10;
  *(_QWORD *)((char *)&v13 + 4) = a3;
  HIDWORD(v13) = 0;
  if ( v6 == (*(_DWORD *)(v5 + 0x18) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v7, 0x10);
  v8 = (_OWORD *)(*(_DWORD *)v7 + 0x10 * (*(_DWORD *)(v7 + 4))++);
  *v8 = v13;
  v9 = (_DWORD *)*(this + 1);
  v10 = v9[3];
  v11 = v9[1] + 0x30;
  v9[2] += 0xC;
  v9[1] = v11;
  v9[3] = v10 + 1;
  return v6;
}
