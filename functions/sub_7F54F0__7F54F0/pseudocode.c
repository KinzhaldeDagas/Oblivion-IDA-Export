char __thiscall sub_7F54F0(NiD3DPass **this)
{
  int v2; // ebp
  NiD3DPass **v3; // edi
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  int v8; // eax
  NiD3DTextureStage *v9; // eax
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  NiD3DPass *v16; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-10h]
  unsigned int v18; // [esp+20h] [ebp-4h]

  v2 = 0;
  v17 = 0;
  v18 = 0;
  v3 = sub_7606A0(&v16);
  v4 = *(this + 0x27);
  v5 = v4 == *v3;
  LOBYTE(v18) = 1;
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
    *(this + 0x27) = *v3;
    if ( !v5 )
      ++v6->RefCount;
  }
  v7 = v16;
  LOBYTE(v18) = 0;
  if ( v16 )
  {
    --v16->RefCount;
    if ( !v7->RefCount )
      sub_7604D0(v7);
  }
  v8 = *sub_772630(&v16);
  if ( v8 )
  {
    v2 = v8;
    ++*(_DWORD *)(v8 + 0x5C);
    v17 = v8;
  }
  v9 = (NiD3DTextureStage *)v16;
  LOBYTE(v18) = 0;
  if ( v16 )
  {
    --*(_DWORD *)&v16->SoftwareVP;
    if ( !v9[7].Unk08 )
      sub_772560(v9);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(*(this + 0x27), (*(this + 0x27))->CurrentStage, (unsigned int *)v2);
  v10 = (int)*(this + 0x27);
  if ( v10 )
  {
    if ( !*(_DWORD *)(v10 + 0x30) )
      *(_DWORD *)(v10 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v10 + 0x30), 7, 0, 0);
    v11 = (int)*(this + 0x27);
    if ( !*(_DWORD *)(v11 + 0x30) )
      *(_DWORD *)(v11 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v11 + 0x30), 0xE, 0, 0);
    v12 = (int)*(this + 0x27);
    if ( !*(_DWORD *)(v12 + 0x30) )
      *(_DWORD *)(v12 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v12 + 0x30), 0x1B, 0, 0);
    v13 = (int)*(this + 0x27);
    if ( !*(_DWORD *)(v13 + 0x30) )
      *(_DWORD *)(v13 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v13 + 0x30), 0xF, 0, 0);
    v14 = (int)*(this + 0x27);
    if ( !*(_DWORD *)(v14 + 0x30) )
      *(_DWORD *)(v14 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v14 + 0x30), 0xA8, 0xF, 0);
  }
  ((void (__thiscall *)(NiD3DPass **))(*this)[1].VertexShaderTarget)(this);
  v18 = 0xFFFFFFFF;
  if ( v2 )
  {
    v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
    if ( v5 )
      sub_772560((NiD3DTextureStage *)v2);
  }
  return 1;
}
