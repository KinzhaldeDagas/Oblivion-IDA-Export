void __thiscall sub_7F09D0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // ebp
  int v11; // ebx
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // esi
  NiD3DTextureStage *v16; // eax
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DPass *v18; // [esp+18h] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp-4h]

  v2 = sub_7606A0(&v18);
  v3 = *(this + 0xE5);
  v4 = v3 == *v2;
  v19 = 0;
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
    *(this + 0xE5) = *v2;
    if ( !v4 )
      ++v5->RefCount;
  }
  v6 = v18;
  v19 = 0xFFFFFFFF;
  if ( v18 )
  {
    --v18->RefCount;
    if ( !v6->RefCount )
      sub_7604D0(v6);
  }
  sub_772630(&a3);
  v19 = 1;
  sub_801110((int)a3, 0, 1, 2);
  sub_760010(*(this + 0xE5), (*(this + 0xE5))->CurrentStage, a3);
  v7 = (int)*(this + 0xE5);
  v8 = (int)*(this + 0xDF);
  v9 = *(_DWORD *)(v7 + 0x58);
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(_DWORD *)(v7 + 0x58) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  v10 = (int)*(this + 0xE5);
  v11 = (int)*(this + 0xE3);
  v12 = *(_DWORD *)(v10 + 0x44);
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    *(_DWORD *)(v10 + 0x44) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  v13 = (int)*(this + 0xE5);
  if ( !*(_DWORD *)(v13 + 0x30) )
    *(_DWORD *)(v13 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v13 + 0x30), 7, 1, 0);
  v14 = (int)*(this + 0xE5);
  if ( !*(_DWORD *)(v14 + 0x30) )
    *(_DWORD *)(v14 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v14 + 0x30), 0x17, 4, 0);
  v15 = (int)*(this + 0xE5);
  if ( !*(_DWORD *)(v15 + 0x30) )
    *(_DWORD *)(v15 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v15 + 0x30), 0xE, 1, 0);
  v16 = (NiD3DTextureStage *)a3;
  v19 = 0xFFFFFFFF;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v16[7].Unk08 )
      sub_772560(v16);
  }
}
