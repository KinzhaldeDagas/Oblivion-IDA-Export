char __thiscall sub_80C8B0(NiD3DPass **this)
{
  NiD3DPass **v1; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // esi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  unsigned int **v10; // esi
  NiD3DTextureStage *v11; // eax
  NiD3DTextureStage *v12; // ecx
  unsigned int **v13; // esi
  NiD3DTextureStage *v14; // eax
  NiD3DTextureStage *v15; // ecx
  unsigned int **v16; // esi
  NiD3DTextureStage *v17; // eax
  NiD3DTextureStage *v18; // ecx
  unsigned int **v19; // esi
  NiD3DTextureStage *v20; // eax
  NiD3DTextureStage *v21; // ecx
  NiD3DTextureStage *v22; // eax
  unsigned int *a3; // [esp+10h] [ebp-2Ch] BYREF
  int v25; // [esp+14h] [ebp-28h]
  NiD3DPass *v26; // [esp+18h] [ebp-24h] BYREF
  NiD3DTextureStage *v27; // [esp+1Ch] [ebp-20h] BYREF
  NiD3DTextureStage *v28; // [esp+20h] [ebp-1Ch] BYREF
  NiD3DTextureStage *v29; // [esp+24h] [ebp-18h] BYREF
  NiD3DTextureStage *v30; // [esp+28h] [ebp-14h] BYREF
  NiD3DTextureStage *v31; // [esp+2Ch] [ebp-10h] BYREF
  int v32; // [esp+38h] [ebp-4h]

  v1 = this + 0x27;
  v25 = 2;
  do
  {
    v2 = sub_7606A0(&v26);
    v3 = *v1;
    v4 = *v1 == *v2;
    v32 = 0;
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
      *v1 = *v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v26;
    v32 = 0xFFFFFFFF;
    if ( v26 )
    {
      --v26->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
    sub_772630(&a3);
    v32 = 1;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(*v1, (*v1)->CurrentStage, a3);
    v7 = (unsigned int **)sub_772630(&v27);
    v8 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v7;
    LOBYTE(v32) = 2;
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
    v9 = v27;
    LOBYTE(v32) = 1;
    if ( v27 )
    {
      --v27[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
      v8 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v8, 1, 1, 2);
    sub_760010(*v1, (*v1)->CurrentStage, a3);
    v10 = (unsigned int **)sub_772630(&v28);
    v11 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v10;
    LOBYTE(v32) = 3;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v11[7].Unk08 )
          sub_772560(v11);
      }
      v11 = (NiD3DTextureStage *)*v10;
      a3 = *v10;
      if ( a3 )
      {
        ++v11[7].Unk08;
        v11 = (NiD3DTextureStage *)a3;
      }
    }
    v12 = v28;
    LOBYTE(v32) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
      v11 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v11, 2, 1, 2);
    sub_760010(*v1, (*v1)->CurrentStage, a3);
    v13 = (unsigned int **)sub_772630(&v29);
    v14 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v13;
    LOBYTE(v32) = 4;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v14[7].Unk08 )
          sub_772560(v14);
      }
      v14 = (NiD3DTextureStage *)*v13;
      a3 = *v13;
      if ( a3 )
      {
        ++v14[7].Unk08;
        v14 = (NiD3DTextureStage *)a3;
      }
    }
    v15 = v29;
    LOBYTE(v32) = 1;
    if ( v29 )
    {
      --v29[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
      v14 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v14, 3, 3, 2);
    sub_760010(*v1, (*v1)->CurrentStage, a3);
    v16 = (unsigned int **)sub_772630(&v30);
    v17 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v16;
    LOBYTE(v32) = 5;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v17[7].Unk08 )
          sub_772560(v17);
      }
      v17 = (NiD3DTextureStage *)*v16;
      a3 = *v16;
      if ( a3 )
      {
        ++v17[7].Unk08;
        v17 = (NiD3DTextureStage *)a3;
      }
    }
    v18 = v30;
    LOBYTE(v32) = 1;
    if ( v30 )
    {
      --v30[7].Unk08;
      if ( !v18[7].Unk08 )
        sub_772560(v18);
      v17 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v17, 4, 1, 2);
    sub_760010(*v1, (*v1)->CurrentStage, a3);
    if ( sub_404F00(0) >= 2 )
    {
      v19 = (unsigned int **)sub_772630(&v31);
      v20 = (NiD3DTextureStage *)a3;
      v4 = a3 == *v19;
      LOBYTE(v32) = 6;
      if ( !v4 )
      {
        if ( a3 )
        {
          --a3[0x17];
          if ( !v20[7].Unk08 )
            sub_772560(v20);
        }
        v20 = (NiD3DTextureStage *)*v19;
        a3 = *v19;
        if ( a3 )
        {
          ++v20[7].Unk08;
          v20 = (NiD3DTextureStage *)a3;
        }
      }
      v21 = v31;
      LOBYTE(v32) = 1;
      if ( v31 )
      {
        --v31[7].Unk08;
        if ( !v21[7].Unk08 )
          sub_772560(v21);
        v20 = (NiD3DTextureStage *)a3;
      }
      sub_801110((int)v20, 5, 3, 2);
      sub_760010(*v1, (*v1)->CurrentStage, a3);
    }
    v22 = (NiD3DTextureStage *)a3;
    v32 = 0xFFFFFFFF;
    if ( a3 )
    {
      --a3[0x17];
      if ( !v22[7].Unk08 )
        sub_772560(v22);
    }
    ++v1;
    --v25;
  }
  while ( v25 );
  dword_B43EA0 = 0x20082;
  dword_B44530 = 0x10C;
  dword_B43EA4 = 0x23982;
  dword_B44534 = 0x13C;
  return 1;
}
