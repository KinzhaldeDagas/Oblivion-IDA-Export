char __thiscall sub_7EA890(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // ecx
  NiD3DTextureStage *v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // edi
  int v13; // ebp
  int v14; // ebx
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // esi
  NiD3DTextureStage *v21; // eax
  unsigned int *a3; // [esp+14h] [ebp-18h] BYREF
  NiD3DPass *v24; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v25; // [esp+1Ch] [ebp-10h] BYREF
  int v26; // [esp+28h] [ebp-4h]

  v2 = sub_7606A0(&v24);
  v3 = *(this + 0x1C);
  v4 = v3 == *v2;
  v26 = 0;
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
    *(this + 0x1C) = *v2;
    if ( !v4 )
      ++v5->RefCount;
  }
  v6 = v24;
  v26 = 0xFFFFFFFF;
  if ( v24 )
  {
    --v24->RefCount;
    if ( !v6->RefCount )
      sub_7604D0(v6);
  }
  sub_772630(&a3);
  v26 = 1;
  sub_801110((int)a3, 0, 3, 2);
  sub_771640((_DWORD **)a3, 1);
  sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
  v7 = (unsigned int **)sub_772630(&v25);
  v8 = (NiD3DTextureStage *)a3;
  v4 = a3 == *v7;
  LOBYTE(v26) = 2;
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
  v9 = v25;
  LOBYTE(v26) = 1;
  if ( v25 )
  {
    --v25[7].Unk08;
    if ( !v9[7].Unk08 )
      sub_772560(v9);
    v8 = (NiD3DTextureStage *)a3;
  }
  sub_771640(v8, 0);
  sub_801110((int)a3, 1, 3, 2);
  sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
  v10 = (int)*(this + 0x1C);
  v11 = (int)*(this + (_DWORD)*(this + 0x24) + 0x25);
  v12 = *(_DWORD *)(v10 + 0x58);
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    *(_DWORD *)(v10 + 0x58) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  v13 = (int)*(this + 0x1C);
  v14 = (int)*(this + (_DWORD)*(this + 0x24) + 0x2A);
  v15 = *(_DWORD *)(v13 + 0x44);
  if ( v15 != v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *(_DWORD *)(v13 + 0x44) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v16 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v16 + 0x30) )
    *(_DWORD *)(v16 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v16 + 0x30), 7, 0, 0);
  v17 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v17 + 0x30) )
    *(_DWORD *)(v17 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v17 + 0x30), 0xE, 0, 0);
  v18 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v18 + 0x30) )
    *(_DWORD *)(v18 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v18 + 0x30), 0x1B, 0, 0);
  v19 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v19 + 0x30) )
    *(_DWORD *)(v19 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v19 + 0x30), 0xF, 0, 0);
  v20 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v20 + 0x30) )
    *(_DWORD *)(v20 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v20 + 0x30), 0xA8, 7, 0);
  v21 = (NiD3DTextureStage *)a3;
  v26 = 0xFFFFFFFF;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v21[7].Unk08 )
      sub_772560(v21);
  }
  return 1;
}
