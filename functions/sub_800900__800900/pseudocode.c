char __thiscall sub_800900(RefractionShader *this)
{
  NiD3DTextureStage *v2; // esi
  NiD3DPass **v3; // ebp
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  int i; // ebp
  NiD3DTextureStage **v9; // ebx
  NiD3DTextureStage *v10; // eax
  UInt32 v11; // ebx
  UInt32 v12; // ebp
  UInt32 v13; // ebp
  UInt32 v14; // ebp
  UInt32 v15; // ebp
  NiD3DPass *v17; // [esp+14h] [ebp-14h] BYREF
  NiD3DTextureStage *v18; // [esp+18h] [ebp-10h]
  unsigned int v19; // [esp+24h] [ebp-4h]

  v2 = 0;
  v18 = 0;
  v19 = 0;
  v3 = sub_7606A0(&v17);
  v4 = (NiD3DPass *)this->Unk90[1];
  v5 = v4 == *v3;
  LOBYTE(v19) = 1;
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
    this->Unk90[1] = (UInt32)*v3;
    if ( !v5 )
      ++v6->RefCount;
  }
  v7 = v17;
  LOBYTE(v19) = 0;
  if ( v17 )
  {
    --v17->RefCount;
    if ( !v7->RefCount )
      sub_7604D0(v7);
  }
  for ( i = 0; i < 2; ++i )
  {
    v9 = (NiD3DTextureStage **)sub_772630(&v17);
    v5 = v2 == *v9;
    LOBYTE(v19) = 2;
    if ( !v5 )
    {
      if ( v2 )
      {
        v5 = v2[7].Unk08-- == 1;
        if ( v5 )
          sub_772560(v2);
      }
      v2 = *v9;
      v18 = *v9;
      if ( v18 )
        ++v2[7].Unk08;
    }
    v10 = (NiD3DTextureStage *)v17;
    LOBYTE(v19) = 0;
    if ( v17 )
    {
      --*(_DWORD *)&v17->SoftwareVP;
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
    sub_801110((int)v2, i, 3, 2);
    sub_771640(v2, 0);
    sub_760010((NiD3DPass *)this->Unk90[1], *(_DWORD *)(this->Unk90[1] + 0x14), &v2->Stage);
  }
  v11 = this->Unk90[1];
  if ( !*(_DWORD *)(v11 + 0x30) )
    *(_DWORD *)(v11 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v11 + 0x30), 7, 0, 0);
  v12 = this->Unk90[1];
  if ( !*(_DWORD *)(v12 + 0x30) )
    *(_DWORD *)(v12 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v12 + 0x30), 0xE, 0, 0);
  v13 = this->Unk90[1];
  if ( !*(_DWORD *)(v13 + 0x30) )
    *(_DWORD *)(v13 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v13 + 0x30), 0x1B, 0, 0);
  v14 = this->Unk90[1];
  if ( !*(_DWORD *)(v14 + 0x30) )
    *(_DWORD *)(v14 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v14 + 0x30), 0xF, 0, 0);
  v15 = this->Unk90[1];
  if ( !*(_DWORD *)(v15 + 0x30) )
    *(_DWORD *)(v15 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v15 + 0x30), 0xA8, 0xF, 0);
  this->super.__vftable[1].super.super.super.super.No08((NiShader *)this);
  v19 = 0xFFFFFFFF;
  if ( v2 )
  {
    v5 = v2[7].Unk08-- == 1;
    if ( v5 )
      sub_772560(v2);
  }
  return 1;
}
