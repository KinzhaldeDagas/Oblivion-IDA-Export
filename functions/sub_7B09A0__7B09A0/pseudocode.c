char __thiscall sub_7B09A0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int i; // edi
  NiD3DTextureStage *v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // ebp
  _DWORD *v12; // edi
  int v13; // ebx
  int v14; // ebp
  int v15; // edi
  _DWORD *v16; // ebx
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // esi
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DPass *v24; // [esp+18h] [ebp-10h] BYREF
  int v25; // [esp+24h] [ebp-4h]

  v2 = sub_7606A0(&v24);
  v3 = *(this + 0x1C);
  v4 = v3 == *v2;
  v25 = 0;
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
  v25 = 0xFFFFFFFF;
  if ( v24 )
  {
    --v24->RefCount;
    if ( !v6->RefCount )
      sub_7604D0(v6);
  }
  for ( i = 0; i < 4; ++i )
  {
    sub_772630(&a3);
    v25 = 1;
    sub_801110((int)a3, i, 3, 2);
    sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
    v8 = (NiD3DTextureStage *)a3;
    v25 = 0xFFFFFFFF;
    if ( a3 )
    {
      --a3[0x17];
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
  }
  v9 = (int)*(this + 0x1C);
  v10 = (int)*(this + (_DWORD)*(this + 0x24) + 0x25);
  v11 = *(_DWORD *)(v9 + 0x58);
  v12 = (_DWORD *)(v9 + 0x58);
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    *v12 = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  v13 = (int)*(this + 0x1C);
  v14 = (int)*(this + (_DWORD)*(this + 0x24) + 0x28);
  v15 = *(_DWORD *)(v13 + 0x44);
  v16 = (_DWORD *)(v13 + 0x44);
  if ( v15 != v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *v16 = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v17 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v17 + 0x30) )
    *(_DWORD *)(v17 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v17 + 0x30), 7, 0, 0);
  v18 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v18 + 0x30) )
    *(_DWORD *)(v18 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v18 + 0x30), 0xE, 0, 0);
  v19 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v19 + 0x30) )
    *(_DWORD *)(v19 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v19 + 0x30), 0x1B, 0, 0);
  v20 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v20 + 0x30) )
    *(_DWORD *)(v20 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v20 + 0x30), 0xF, 0, 0);
  v21 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v21 + 0x30) )
    *(_DWORD *)(v21 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v21 + 0x30), 0xA8, 7, 0);
  return 1;
}
