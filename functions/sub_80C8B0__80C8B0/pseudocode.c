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

  v1 = this + 0x27; /*0x80c8d6*/
  v25 = 2; /*0x80c8dc*/
  do /*0x80cc4c*/
  {
    v2 = NiD3DPassPool_Acquire(&v26); /*0x80c8fd*/
    v3 = *v1; /*0x80c8ff*/
    v4 = *v1 == *v2; /*0x80c901*/
    v32 = 0; /*0x80c903*/
    if ( !v4 ) /*0x80c90b*/
    {
      if ( v3 ) /*0x80c90f*/
      {
        v4 = v3->RefCount-- == 1; /*0x80c911*/
        if ( v4 ) /*0x80c915*/
          NiD3DPass_ReleaseToPool(v3); /*0x80c917*/
      }
      v5 = *v2; /*0x80c91c*/
      v4 = *v2 == 0; /*0x80c91e*/
      *v1 = *v2; /*0x80c920*/
      if ( !v4 ) /*0x80c922*/
        ++v5->RefCount; /*0x80c924*/
    }
    v6 = v26; /*0x80c927*/
    v32 = 0xFFFFFFFF; /*0x80c92d*/
    if ( v26 ) /*0x80c935*/
    {
      --v26->RefCount; /*0x80c937*/
      if ( !v6->RefCount ) /*0x80c940*/
        NiD3DPass_ReleaseToPool(v6); /*0x80c945*/
    }
    NiD3DTextureStagePool_Acquire(&a3); /*0x80c94f*/
    v32 = 1; /*0x80c95e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x80c962*/
    NiD3DPass_SetTextureStage(*v1, (*v1)->CurrentStage, a3); /*0x80c975*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v27); /*0x80c987*/
    v8 = (NiD3DTextureStage *)a3; /*0x80c989*/
    v4 = a3 == *v7; /*0x80c98d*/
    LOBYTE(v32) = 2; /*0x80c98f*/
    if ( !v4 ) /*0x80c994*/
    {
      if ( a3 ) /*0x80c998*/
      {
        --a3[0x17]; /*0x80c99a*/
        if ( !v8[7].Unk08 ) /*0x80c9a3*/
          sub_772560(v8); /*0x80c9a8*/
      }
      v8 = (NiD3DTextureStage *)*v7; /*0x80c9ad*/
      a3 = *v7; /*0x80c9b1*/
      if ( a3 ) /*0x80c9b5*/
      {
        ++v8[7].Unk08; /*0x80c9b7*/
        v8 = (NiD3DTextureStage *)a3; /*0x80c9ba*/
      }
    }
    v9 = v27; /*0x80c9be*/
    LOBYTE(v32) = 1; /*0x80c9c4*/
    if ( v27 ) /*0x80c9c8*/
    {
      --v27[7].Unk08; /*0x80c9ca*/
      if ( !v9[7].Unk08 ) /*0x80c9ce*/
        sub_772560(v9); /*0x80c9d7*/
      v8 = (NiD3DTextureStage *)a3; /*0x80c9dc*/
    }
    BSShader_ConfigureTextureStageSampler(v8, 1, 1, 2); /*0x80c9e5*/
    NiD3DPass_SetTextureStage(*v1, (*v1)->CurrentStage, a3); /*0x80c9f8*/
    v10 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v28); /*0x80ca0a*/
    v11 = (NiD3DTextureStage *)a3; /*0x80ca0c*/
    v4 = a3 == *v10; /*0x80ca10*/
    LOBYTE(v32) = 3; /*0x80ca12*/
    if ( !v4 ) /*0x80ca17*/
    {
      if ( a3 ) /*0x80ca1b*/
      {
        --a3[0x17]; /*0x80ca1d*/
        if ( !v11[7].Unk08 ) /*0x80ca26*/
          sub_772560(v11); /*0x80ca2b*/
      }
      v11 = (NiD3DTextureStage *)*v10; /*0x80ca30*/
      a3 = *v10; /*0x80ca34*/
      if ( a3 ) /*0x80ca38*/
      {
        ++v11[7].Unk08; /*0x80ca3a*/
        v11 = (NiD3DTextureStage *)a3; /*0x80ca3d*/
      }
    }
    v12 = v28; /*0x80ca41*/
    LOBYTE(v32) = 1; /*0x80ca47*/
    if ( v28 ) /*0x80ca4b*/
    {
      --v28[7].Unk08; /*0x80ca4d*/
      if ( !v12[7].Unk08 ) /*0x80ca51*/
        sub_772560(v12); /*0x80ca5a*/
      v11 = (NiD3DTextureStage *)a3; /*0x80ca5f*/
    }
    BSShader_ConfigureTextureStageSampler(v11, 2, 1, 2); /*0x80ca69*/
    NiD3DPass_SetTextureStage(*v1, (*v1)->CurrentStage, a3); /*0x80ca7c*/
    v13 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v29); /*0x80ca8e*/
    v14 = (NiD3DTextureStage *)a3; /*0x80ca90*/
    v4 = a3 == *v13; /*0x80ca94*/
    LOBYTE(v32) = 4; /*0x80ca96*/
    if ( !v4 ) /*0x80ca9b*/
    {
      if ( a3 ) /*0x80ca9f*/
      {
        --a3[0x17]; /*0x80caa1*/
        if ( !v14[7].Unk08 ) /*0x80caaa*/
          sub_772560(v14); /*0x80caaf*/
      }
      v14 = (NiD3DTextureStage *)*v13; /*0x80cab4*/
      a3 = *v13; /*0x80cab8*/
      if ( a3 ) /*0x80cabc*/
      {
        ++v14[7].Unk08; /*0x80cabe*/
        v14 = (NiD3DTextureStage *)a3; /*0x80cac1*/
      }
    }
    v15 = v29; /*0x80cac5*/
    LOBYTE(v32) = 1; /*0x80cacb*/
    if ( v29 ) /*0x80cacf*/
    {
      --v29[7].Unk08; /*0x80cad1*/
      if ( !v15[7].Unk08 ) /*0x80cad5*/
        sub_772560(v15); /*0x80cade*/
      v14 = (NiD3DTextureStage *)a3; /*0x80cae3*/
    }
    BSShader_ConfigureTextureStageSampler(v14, 3, 3, 2); /*0x80caee*/
    NiD3DPass_SetTextureStage(*v1, (*v1)->CurrentStage, a3); /*0x80cb01*/
    v16 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v30); /*0x80cb13*/
    v17 = (NiD3DTextureStage *)a3; /*0x80cb15*/
    v4 = a3 == *v16; /*0x80cb19*/
    LOBYTE(v32) = 5; /*0x80cb1b*/
    if ( !v4 ) /*0x80cb20*/
    {
      if ( a3 ) /*0x80cb24*/
      {
        --a3[0x17]; /*0x80cb26*/
        if ( !v17[7].Unk08 ) /*0x80cb2f*/
          sub_772560(v17); /*0x80cb34*/
      }
      v17 = (NiD3DTextureStage *)*v16; /*0x80cb39*/
      a3 = *v16; /*0x80cb3d*/
      if ( a3 ) /*0x80cb41*/
      {
        ++v17[7].Unk08; /*0x80cb43*/
        v17 = (NiD3DTextureStage *)a3; /*0x80cb46*/
      }
    }
    v18 = v30; /*0x80cb4a*/
    LOBYTE(v32) = 1; /*0x80cb50*/
    if ( v30 ) /*0x80cb54*/
    {
      --v30[7].Unk08; /*0x80cb56*/
      if ( !v18[7].Unk08 ) /*0x80cb5a*/
        sub_772560(v18); /*0x80cb63*/
      v17 = (NiD3DTextureStage *)a3; /*0x80cb68*/
    }
    BSShader_ConfigureTextureStageSampler(v17, 4, 1, 2); /*0x80cb72*/
    NiD3DPass_SetTextureStage(*v1, (*v1)->CurrentStage, a3); /*0x80cb85*/
    if ( sub_404F00(0) >= 2 ) /*0x80cb97*/
    {
      v19 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v31); /*0x80cbaa*/
      v20 = (NiD3DTextureStage *)a3; /*0x80cbac*/
      v4 = a3 == *v19; /*0x80cbb0*/
      LOBYTE(v32) = 6; /*0x80cbb2*/
      if ( !v4 ) /*0x80cbb7*/
      {
        if ( a3 ) /*0x80cbbb*/
        {
          --a3[0x17]; /*0x80cbbd*/
          if ( !v20[7].Unk08 ) /*0x80cbc6*/
            sub_772560(v20); /*0x80cbcb*/
        }
        v20 = (NiD3DTextureStage *)*v19; /*0x80cbd0*/
        a3 = *v19; /*0x80cbd4*/
        if ( a3 ) /*0x80cbd8*/
        {
          ++v20[7].Unk08; /*0x80cbda*/
          v20 = (NiD3DTextureStage *)a3; /*0x80cbdd*/
        }
      }
      v21 = v31; /*0x80cbe1*/
      LOBYTE(v32) = 1; /*0x80cbe7*/
      if ( v31 ) /*0x80cbeb*/
      {
        --v31[7].Unk08; /*0x80cbed*/
        if ( !v21[7].Unk08 ) /*0x80cbf1*/
          sub_772560(v21); /*0x80cbfa*/
        v20 = (NiD3DTextureStage *)a3; /*0x80cbff*/
      }
      BSShader_ConfigureTextureStageSampler(v20, 5, 3, 2); /*0x80cc0a*/
      NiD3DPass_SetTextureStage(*v1, (*v1)->CurrentStage, a3); /*0x80cc1d*/
    }
    v22 = (NiD3DTextureStage *)a3; /*0x80cc22*/
    v32 = 0xFFFFFFFF; /*0x80cc28*/
    if ( a3 ) /*0x80cc30*/
    {
      --a3[0x17]; /*0x80cc32*/
      if ( !v22[7].Unk08 ) /*0x80cc3b*/
        sub_772560(v22); /*0x80cc40*/
    }
    ++v1; /*0x80cc45*/
    --v25; /*0x80cc48*/
  }
  while ( v25 ); /*0x80cc4c*/
  unk_B43EA0 = 0x20082; /*0x80cc52*/
  unk_B44530 = 0x10C; /*0x80cc5c*/
  unk_B43EA4 = 0x23982; /*0x80cc66*/
  unk_B44534 = 0x13C; /*0x80cc70*/
  return 1; /*0x80cc7c*/
}
