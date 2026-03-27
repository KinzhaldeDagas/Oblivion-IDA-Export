char __thiscall sub_7DDD90(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  NiD3DTextureStage *v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // ebx
  int v19; // ebp
  _DWORD *v20; // edi
  int v21; // ebx
  int v22; // esi
  int v23; // edi
  _DWORD *v24; // esi
  unsigned int *a3; // [esp+14h] [ebp-18h] BYREF
  NiD3DPass *v27; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v28; // [esp+1Ch] [ebp-10h] BYREF
  int v29; // [esp+28h] [ebp-4h]

  if ( !*(this + 0x3E) )
  {
    v2 = sub_7606A0(&v27);
    v3 = *(this + 0x3E);
    v4 = v3 == *v2;
    v29 = 0;
    if ( !v4 )
    {
      if ( v3 )
      {
        v4 = v3->RefCount-- == 1;
        if ( v4 )
          sub_7604D0(v3);
      }
      v5 = *v2;
      v4 = *v2 == 0;
      *(this + 0x3E) = *v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v27;
    v29 = 0xFFFFFFFF;
    if ( v27 )
    {
      --v27->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
    sub_772630(&a3);
    v29 = 1;
    sub_801110((int)a3, 0, 3, 2);
    sub_760010(*(this + 0x3E), (*(this + 0x3E))->CurrentStage, a3);
    v7 = (unsigned int **)sub_772630(&v28);
    v8 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v7;
    LOBYTE(v29) = 2;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v8[7].Unk08 )
          sub_772560(v8);
      }
      v8 = (NiD3DTextureStage *)*v7;
      a3 = *v7;
      if ( a3 )
      {
        ++v8[7].Unk08;
        v8 = (NiD3DTextureStage *)a3;
      }
    }
    v9 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
      v8 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v8, 1, 3, 2);
    sub_760010(*(this + 0x3E), (*(this + 0x3E))->CurrentStage, a3);
    v10 = (NiD3DTextureStage *)a3;
    v29 = 0xFFFFFFFF;
    if ( a3 )
    {
      --a3[0x17];
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
  }
  v11 = (int)*(this + 0x3E);
  if ( !*(_DWORD *)(v11 + 0x30) )
    *(_DWORD *)(v11 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v11 + 0x30), 7, 0, 0);
  v12 = (int)*(this + 0x3E);
  if ( !*(_DWORD *)(v12 + 0x30) )
    *(_DWORD *)(v12 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v12 + 0x30), 0xE, 0, 0);
  v13 = (int)*(this + 0x3E);
  if ( !*(_DWORD *)(v13 + 0x30) )
    *(_DWORD *)(v13 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v13 + 0x30), 0x1B, 0, 0);
  v14 = (int)*(this + 0x3E);
  if ( !*(_DWORD *)(v14 + 0x30) )
    *(_DWORD *)(v14 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v14 + 0x30), 0xF, 0, 0);
  v15 = (int)*(this + 0x3E);
  if ( !*(_DWORD *)(v15 + 0x30) )
    *(_DWORD *)(v15 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v15 + 0x30), 0xA8, 0xF, 0);
  v16 = (int)*(this + 0x3E);
  if ( !*(_DWORD *)(v16 + 0x30) )
    *(_DWORD *)(v16 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v16 + 0x30), 0x16, 1, 0);
  v17 = (int)*(this + 0x3E);
  v18 = (int)*(this + 0x2D);
  v19 = *(_DWORD *)(v17 + 0x58);
  v20 = (_DWORD *)(v17 + 0x58);
  if ( v19 != v18 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    }
    *v20 = v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  v21 = (int)*(this + 0x35);
  v22 = (int)*(this + 0x3E);
  v23 = *(_DWORD *)(v22 + 0x44);
  v24 = (_DWORD *)(v22 + 0x44);
  if ( v23 != v21 )
  {
    if ( v23 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
        (**(void (__thiscall ***)(int, int))v23)(v23, 1);
    }
    *v24 = v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  return 1;
}
