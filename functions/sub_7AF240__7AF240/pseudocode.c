char __thiscall sub_7AF240(NiD3DPass **this)
{
  int v2; // esi
  NiD3DPass **v3; // ebp
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  int v8; // eax
  NiD3DTextureStage *v9; // eax
  int *v10; // ebp
  NiD3DTextureStage *v11; // eax
  int *v12; // ebp
  NiD3DTextureStage *v13; // eax
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  int v17; // ebp
  int v18; // ebp
  NiD3DPass *v20; // [esp+18h] [ebp-10h] BYREF
  unsigned int v21; // [esp+24h] [ebp-4h]

  v2 = 0;
  v21 = 0;
  v3 = sub_7606A0(&v20);
  v4 = *(this + 0x25);
  v5 = v4 == *v3;
  LOBYTE(v21) = 1;
  if ( !v5 )
  {
    if ( v4 )
    {
      v5 = v4->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v4);
    }
    v6 = *v3;
    v5 = *v3 == 0;
    *(this + 0x25) = *v3;
    if ( !v5 )
      ++v6->RefCount;
  }
  v7 = v20;
  LOBYTE(v21) = 0;
  if ( v20 )
  {
    --v20->RefCount;
    if ( !v7->RefCount )
      sub_7604D0(v7);
  }
  v8 = *sub_772630(&v20);
  if ( v8 )
  {
    v2 = v8;
    ++*(_DWORD *)(v8 + 0x5C);
  }
  v9 = (NiD3DTextureStage *)v20;
  LOBYTE(v21) = 0;
  if ( v20 )
  {
    --*(_DWORD *)&v20->SoftwareVP;
    if ( !v9[7].Unk08 )
      sub_772560(v9);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(*(this + 0x25), (*(this + 0x25))->CurrentStage, (unsigned int *)v2);
  v10 = sub_772630(&v20);
  v5 = v2 == *v10;
  LOBYTE(v21) = 3;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v10;
    if ( *v10 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v11 = (NiD3DTextureStage *)v20;
  LOBYTE(v21) = 0;
  if ( v20 )
  {
    --*(_DWORD *)&v20->SoftwareVP;
    if ( !v11[7].Unk08 )
      sub_772560(v11);
  }
  sub_801110(v2, 1, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(*(this + 0x25), (*(this + 0x25))->CurrentStage, (unsigned int *)v2);
  v12 = sub_772630(&v20);
  v5 = v2 == *v12;
  LOBYTE(v21) = 4;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v12;
    if ( *v12 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v13 = (NiD3DTextureStage *)v20;
  LOBYTE(v21) = 0;
  if ( v20 )
  {
    --*(_DWORD *)&v20->SoftwareVP;
    if ( !v13[7].Unk08 )
      sub_772560(v13);
  }
  sub_801110(v2, 2, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(*(this + 0x25), (*(this + 0x25))->CurrentStage, (unsigned int *)v2);
  v14 = (int)*(this + 0x25);
  if ( !*(_DWORD *)(v14 + 0x30) )
    *(_DWORD *)(v14 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v14 + 0x30), 7, 0, 0);
  v15 = (int)*(this + 0x25);
  if ( !*(_DWORD *)(v15 + 0x30) )
    *(_DWORD *)(v15 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v15 + 0x30), 0xE, 0, 0);
  v16 = (int)*(this + 0x25);
  if ( !*(_DWORD *)(v16 + 0x30) )
    *(_DWORD *)(v16 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v16 + 0x30), 0x1B, 0, 0);
  v17 = (int)*(this + 0x25);
  if ( !*(_DWORD *)(v17 + 0x30) )
    *(_DWORD *)(v17 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v17 + 0x30), 0xF, 0, 0);
  v18 = (int)*(this + 0x25);
  if ( !*(_DWORD *)(v18 + 0x30) )
    *(_DWORD *)(v18 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v18 + 0x30), 0xA8, 0xF, 0);
  ((void (__thiscall *)(NiD3DPass **))(*this)[1].VertexShaderTarget)(this);
  v21 = 0xFFFFFFFF;
  if ( v2 )
  {
    v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
    if ( v5 )
      sub_772560((NiD3DTextureStage *)v2);
  }
  return 1;
}
