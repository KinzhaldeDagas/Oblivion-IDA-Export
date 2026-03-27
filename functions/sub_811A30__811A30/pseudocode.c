void __thiscall sub_811A30(_DWORD **this)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  NiD3DTextureStage *v14; // eax
  unsigned int *a3; // [esp+14h] [ebp-10h] BYREF
  unsigned int v16; // [esp+20h] [ebp-4h]

  sub_772630(&a3);
  v16 = 0;
  sub_801110((int)a3, 0, 3, 2);
  sub_760010((NiD3DPass *)*(this + 0x1F), (*(this + 0x1F))[5], a3);
  v2 = (int)*(this + 0x1F);
  v3 = (int)*(this + 0x23);
  v4 = *(_DWORD *)(v2 + 0x58);
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(_DWORD *)(v2 + 0x58) = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)(v3 + 4));
  }
  v5 = (int)*(this + 0x1F);
  v6 = (int)*(this + 0x27);
  v7 = *(_DWORD *)(v5 + 0x44);
  if ( v7 != v6 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *(_DWORD *)(v5 + 0x44) = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  if ( ShaderPackage >= 2 )
  {
    v8 = (int)*(this + 0x1F);
    if ( !*(_DWORD *)(v8 + 0x30) )
      *(_DWORD *)(v8 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v8 + 0x30), 0x18, 0xA, 0);
  }
  v9 = (int)*(this + 0x1F);
  if ( !*(_DWORD *)(v9 + 0x30) )
    *(_DWORD *)(v9 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v9 + 0x30), 0xA8, 7, 0);
  v10 = (int)*(this + 0x1F);
  if ( !*(_DWORD *)(v10 + 0x30) )
    *(_DWORD *)(v10 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v10 + 0x30), 0x1B, 0, 0);
  v11 = (int)*(this + 0x1F);
  if ( !*(_DWORD *)(v11 + 0x30) )
    *(_DWORD *)(v11 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v11 + 0x30), 7, 1, 0);
  v12 = (int)*(this + 0x1F);
  if ( !*(_DWORD *)(v12 + 0x30) )
    *(_DWORD *)(v12 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v12 + 0x30), 0x17, 4, 0);
  v13 = (int)*(this + 0x1F);
  if ( !*(_DWORD *)(v13 + 0x30) )
    *(_DWORD *)(v13 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v13 + 0x30), 0xE, 1, 0);
  v14 = (NiD3DTextureStage *)a3;
  v16 = 0xFFFFFFFF;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v14[7].Unk08 )
      sub_772560(v14);
  }
}
