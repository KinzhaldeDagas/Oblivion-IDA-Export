char sub_7EF2F0()
{
  int v0; // ebx
  NiD3DPass **v1; // esi
  NiD3DPass *v2; // eax
  bool v3; // zf
  int v4; // esi
  NiD3DPass *v5; // eax
  int v6; // eax
  NiD3DTextureStage *v7; // eax
  int v8; // esi
  int *v9; // edi
  int v10; // ebp
  int v11; // esi
  int *v12; // ebp
  int v13; // edi
  _DWORD **v14; // esi
  _DWORD **v15; // esi
  _DWORD **v16; // esi
  _DWORD **v17; // esi
  _DWORD **v18; // esi
  _DWORD **v19; // esi
  _DWORD **v20; // esi
  _DWORD **v21; // esi
  NiD3DPass *v23; // [esp+14h] [ebp-14h] BYREF
  int v24; // [esp+18h] [ebp-10h]
  unsigned int v25; // [esp+24h] [ebp-4h]

  v0 = 0;
  v24 = 0;
  v25 = 0;
  v1 = sub_7606A0(&v23);
  v2 = (NiD3DPass *)dword_B46704;
  v3 = dword_B46704 == (_DWORD)*v1;
  LOBYTE(v25) = 1;
  if ( !v3 )
  {
    if ( v2 )
    {
      if ( !--v2->RefCount )
        sub_7604D0(v2);
    }
    v4 = (int)*v1;
    dword_B46704 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 0x60);
  }
  v5 = v23;
  LOBYTE(v25) = 0;
  if ( v23 )
  {
    --v23->RefCount;
    if ( !v5->RefCount )
      sub_7604D0(v5);
  }
  v6 = *sub_772630(&v23);
  if ( v6 )
  {
    v0 = v6;
    ++*(_DWORD *)(v6 + 0x5C);
    v24 = v6;
  }
  v7 = (NiD3DTextureStage *)v23;
  LOBYTE(v25) = 0;
  if ( v23 )
  {
    --*(_DWORD *)&v23->SoftwareVP;
    if ( !v7[7].Unk08 )
      sub_772560(v7);
  }
  sub_801110(v0, 0, 3, 2);
  sub_771640((_DWORD **)v0, 1);
  sub_760010((NiD3DPass *)dword_B46704, *(_DWORD *)(dword_B46704 + 0x14), (unsigned int *)v0);
  v8 = *(_DWORD *)(dword_B46704 + 0x58);
  v9 = (int *)(dword_B46704 + 0x58);
  v10 = dword_B466E0[0];
  if ( v8 != dword_B466E0[0] )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *v9 = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  v11 = *(_DWORD *)(dword_B46704 + 0x44);
  v12 = (int *)(dword_B46704 + 0x44);
  v13 = dword_B46708[0];
  if ( v11 != dword_B46708[0] )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    *v12 = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  v14 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v14 )
    *v14 = sub_772DF0();
  sub_772CD0(*v14, 7, 1, 0);
  v15 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v15 )
    *v15 = sub_772DF0();
  sub_772CD0(*v15, 0xE, 0, 0);
  v16 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v16 )
    *v16 = sub_772DF0();
  sub_772CD0(*v16, 0x17, 4, 0);
  v17 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v17 )
    *v17 = sub_772DF0();
  sub_772CD0(*v17, 0x1B, 1, 0);
  v18 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v18 )
    *v18 = sub_772DF0();
  sub_772CD0(*v18, 0x13, 5, 0);
  v19 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v19 )
    *v19 = sub_772DF0();
  sub_772CD0(*v19, 0x14, 6, 0);
  v20 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v20 )
    *v20 = sub_772DF0();
  sub_772CD0(*v20, 0xF, 0, 0);
  v21 = (_DWORD **)(dword_B46704 + 0x30);
  if ( !*v21 )
    *v21 = sub_772DF0();
  sub_772CD0(*v21, 0xA8, 7, 0);
  v25 = 0xFFFFFFFF;
  if ( v0 )
  {
    v3 = (*(_DWORD *)(v0 + 0x5C))-- == 1;
    if ( v3 )
      sub_772560((NiD3DTextureStage *)v0);
  }
  return 1;
}
