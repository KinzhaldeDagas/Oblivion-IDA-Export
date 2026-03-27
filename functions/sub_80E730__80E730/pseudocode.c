void __thiscall sub_80E730(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // edi
  NiD3DTextureStage *v13; // eax
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DPass *v15; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  v2 = sub_7606A0(&v15);
  v3 = *(this + 0x25);
  v4 = v3 == *v2;
  v16 = 0;
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
    *(this + 0x25) = *v2;
    if ( !v4 )
      ++v5->RefCount;
  }
  v6 = v15;
  v16 = 0xFFFFFFFF;
  if ( v15 )
  {
    --v15->RefCount;
    if ( !v6->RefCount )
      sub_7604D0(v6);
  }
  sub_772630(&a3);
  v16 = 1;
  sub_801110((int)a3, 0, 3, 2);
  sub_760010(*(this + 0x25), (*(this + 0x25))->CurrentStage, a3);
  v7 = (int)*(this + 0x25);
  v8 = (int)*(this + 0x1F);
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
  v10 = (int)*(this + 0x23);
  v11 = (int)*(this + 0x25);
  v12 = *(_DWORD *)(v11 + 0x44);
  if ( v12 != v10 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    *(_DWORD *)(v11 + 0x44) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  v13 = (NiD3DTextureStage *)a3;
  v16 = 0xFFFFFFFF;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v13[7].Unk08 )
      sub_772560(v13);
  }
}
