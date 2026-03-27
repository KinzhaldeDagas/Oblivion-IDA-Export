char __thiscall sub_804510(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  NiD3DTextureStage *v12; // eax
  unsigned int *a3; // [esp+Ch] [ebp-14h] BYREF
  NiD3DPass *v15; // [esp+10h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  v2 = sub_7606A0(&v15);
  v3 = *(this + 0x1C);
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
    *(this + 0x1C) = *v2;
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
  sub_771640((_DWORD **)a3, 0);
  sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
  v7 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v7 + 0x30) )
    *(_DWORD *)(v7 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v7 + 0x30), 7, 0, 0);
  v8 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v8 + 0x30) )
    *(_DWORD *)(v8 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v8 + 0x30), 0xE, 0, 0);
  v9 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v9 + 0x30) )
    *(_DWORD *)(v9 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v9 + 0x30), 0x1B, 0, 0);
  v10 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v10 + 0x30) )
    *(_DWORD *)(v10 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v10 + 0x30), 0xF, 0, 0);
  v11 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v11 + 0x30) )
    *(_DWORD *)(v11 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v11 + 0x30), 0xA8, 0xF, 0);
  ((void (__thiscall *)(NiD3DPass **))(*this)[1].VertexShaderTarget)(this);
  v12 = (NiD3DTextureStage *)a3;
  v16 = 0xFFFFFFFF;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v12[7].Unk08 )
      sub_772560(v12);
  }
  return 1;
}
