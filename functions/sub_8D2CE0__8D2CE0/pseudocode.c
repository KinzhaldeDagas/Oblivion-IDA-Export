char __thiscall sub_8D2CE0(int *this, int a2, float *a3, int a4)
{
  float *v4; // ebx
  int v5; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  float *v11; // eax
  bool v12; // zf
  int v13; // eax
  int v15; // [esp+10h] [ebp-14h]
  float v16[4]; // [esp+14h] [ebp-10h] BYREF

  v4 = a3;
  v5 = a2;
  ++*(_DWORD *)(a2 + 0x88);
  a3 = v4 + 1;
  v15 = 2;
  do
  {
    v7 = *(_DWORD *)a3;
    a2 = v7;
    v8 = *(_DWORD *)(v7 + 0x50) + 0x10;
    if ( !*(_BYTE *)(v7 + 0x92) && *(float *)(*(_DWORD *)(v7 + 0x50) + 0x6C) != *(float *)&SrcStr )
    {
      sub_8DD530(*v4, v8);
      *(_OWORD *)(v8 + 0x40) = *(_OWORD *)(v8 + 0x50);
      *(_OWORD *)(v8 + 0x60) = *(_OWORD *)(v8 + 0x70);
      *(float *)(v8 + 0x4C) = *v4;
      *(_DWORD *)(v8 + 0x5C) = 0;
      sub_8E77C0(a2, *(_DWORD **)(v5 + 0x74));
      v9 = *(this + 0xA);
      if ( v9 == 1 )
      {
        sub_8CC4E0((int)this, a2);
        sub_8D4AD0((int)this, (int)v4, (int)&a2, 1, *(_DWORD *)(v5 + 0x74));
      }
      else if ( !v9 )
      {
        v10 = *this;
        v11 = sub_8D2C90(v16, *(float *)(v5 + 0xC), *(float *)(v5 + 0x18));
        (*(void (__thiscall **)(int *, int *, int, int, float *))(v10 + 0x18))(this, &a2, 1, v5, v11);
      }
    }
    LOBYTE(v13) = v15 - 1;
    v12 = v15 == 1;
    ++a3;
    --v15;
  }
  while ( !v12 );
  v12 = (*(_DWORD *)(v5 + 0x88))-- == 1;
  if ( v12 )
  {
    v13 = *(_DWORD *)(v5 + 0x84);
    if ( v13 )
    {
      LOBYTE(v13) = *(_BYTE *)(v5 + 0x90);
      if ( !(_BYTE)v13 )
        LOBYTE(v13) = sub_899210(v5);
    }
  }
  return v13;
}
