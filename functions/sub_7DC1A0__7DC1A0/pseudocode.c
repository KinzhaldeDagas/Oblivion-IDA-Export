char __thiscall sub_7DC1A0(WaterShader *this)
{
  int i; // esi
  NiD3DPass **v3; // ebx
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  unsigned int **v8; // ebx
  NiD3DTextureStage *v9; // eax
  NiD3DTextureStage *v10; // ecx
  unsigned int **v11; // ebx
  NiD3DTextureStage *v12; // eax
  NiD3DTextureStage *v13; // ecx
  unsigned int **v14; // ebx
  NiD3DTextureStage *v15; // eax
  NiD3DTextureStage *v16; // ecx
  unsigned int **v17; // ebx
  NiD3DTextureStage *v18; // eax
  NiD3DTextureStage *v19; // ecx
  NiD3DTextureStage *v20; // eax
  UInt32 v21; // ebp
  volatile LONG *v22; // ebx
  NiD3DPixelShader **v23; // ebp
  NiD3DPixelShader *v24; // eax
  UInt32 v25; // ebp
  volatile LONG *v26; // ebx
  NiD3DPixelShader **v27; // ebp
  NiD3DPixelShader *v28; // eax
  UInt32 v29; // ebx
  UInt32 v30; // ebp
  UInt32 v31; // ebx
  UInt32 v32; // ebx
  UInt32 v33; // ebx
  UInt32 v34; // ebx
  UInt32 v35; // ebx
  UInt32 v36; // ebx
  UInt32 v37; // ebx
  UInt32 v38; // ebx
  UInt32 v39; // ebp
  UInt32 v40; // ebp
  UInt32 v41; // ebx
  UInt32 v42; // ebx
  UInt32 v43; // ebx
  UInt32 v44; // ebx
  UInt32 v45; // ebx
  UInt32 v46; // ebx
  UInt32 v47; // ebp
  UInt32 v48; // ebx
  UInt32 v49; // ebx
  unsigned int *a3; // [esp+14h] [ebp-28h] BYREF
  NiD3DPixelShader *v52; // [esp+18h] [ebp-24h]
  NiD3DPass *v53; // [esp+1Ch] [ebp-20h] BYREF
  NiD3DTextureStage *v54; // [esp+20h] [ebp-1Ch] BYREF
  NiD3DTextureStage *v55; // [esp+24h] [ebp-18h] BYREF
  NiD3DTextureStage *v56; // [esp+28h] [ebp-14h] BYREF
  NiD3DTextureStage *v57; // [esp+2Ch] [ebp-10h] BYREF
  int v58; // [esp+38h] [ebp-4h]

  for ( i = 0; i < 0x10; ++i ) /*0x7dc1c9*/
  {
    if ( !this->Unk07C[i] ) /*0x7dc1d0*/
    {
      v3 = NiD3DPassPool_Acquire(&v53); /*0x7dc1e8*/
      v4 = (NiD3DPass *)this->Unk07C[i]; /*0x7dc1ea*/
      v5 = v4 == *v3; /*0x7dc1ee*/
      v58 = 0; /*0x7dc1f0*/
      if ( !v5 ) /*0x7dc1f8*/
      {
        if ( v4 ) /*0x7dc1fc*/
        {
          v5 = v4->RefCount-- == 1; /*0x7dc1fe*/
          if ( v5 ) /*0x7dc202*/
            NiD3DPass_ReleaseToPool(v4); /*0x7dc204*/
        }
        v6 = *v3; /*0x7dc209*/
        v5 = *v3 == 0; /*0x7dc20b*/
        this->Unk07C[i] = (UInt32)*v3; /*0x7dc20d*/
        if ( !v5 ) /*0x7dc216*/
          ++v6->RefCount; /*0x7dc218*/
      }
      v7 = v53; /*0x7dc222*/
      v58 = 0xFFFFFFFF; /*0x7dc228*/
      if ( v53 ) /*0x7dc230*/
      {
        --v53->RefCount; /*0x7dc232*/
        if ( !v7->RefCount ) /*0x7dc23b*/
          NiD3DPass_ReleaseToPool(v7); /*0x7dc240*/
      }
      NiD3DTextureStagePool_Acquire(&a3); /*0x7dc24a*/
      v58 = 1; /*0x7dc25a*/
      BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x7dc25e*/
      NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7dc26b*/
      NiD3DPass_SetTextureStage((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3); /*0x7dc27d*/
      v8 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v54); /*0x7dc28f*/
      v9 = (NiD3DTextureStage *)a3; /*0x7dc291*/
      v5 = a3 == *v8; /*0x7dc295*/
      LOBYTE(v58) = 2; /*0x7dc297*/
      if ( !v5 ) /*0x7dc29c*/
      {
        if ( a3 ) /*0x7dc2a0*/
        {
          --a3[0x17]; /*0x7dc2a2*/
          if ( !v9[7].Unk08 ) /*0x7dc2ab*/
            sub_772560(v9); /*0x7dc2b0*/
        }
        v9 = (NiD3DTextureStage *)*v8; /*0x7dc2b5*/
        a3 = *v8; /*0x7dc2b9*/
        if ( a3 ) /*0x7dc2bd*/
        {
          ++v9[7].Unk08; /*0x7dc2bf*/
          v9 = (NiD3DTextureStage *)a3; /*0x7dc2c2*/
        }
      }
      v10 = v54; /*0x7dc2c6*/
      LOBYTE(v58) = 1; /*0x7dc2cc*/
      if ( v54 ) /*0x7dc2d1*/
      {
        --v54[7].Unk08; /*0x7dc2d3*/
        if ( !v10[7].Unk08 ) /*0x7dc2d7*/
          sub_772560(v10); /*0x7dc2e0*/
        v9 = (NiD3DTextureStage *)a3; /*0x7dc2e5*/
      }
      BSShader_ConfigureTextureStageSampler(v9, 1, 1, 2); /*0x7dc2ee*/
      NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7dc2fb*/
      NiD3DPass_SetTextureStage((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3); /*0x7dc30d*/
      v11 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v55); /*0x7dc31f*/
      v12 = (NiD3DTextureStage *)a3; /*0x7dc321*/
      v5 = a3 == *v11; /*0x7dc325*/
      LOBYTE(v58) = 3; /*0x7dc327*/
      if ( !v5 ) /*0x7dc32c*/
      {
        if ( a3 ) /*0x7dc330*/
        {
          --a3[0x17]; /*0x7dc332*/
          if ( !v12[7].Unk08 ) /*0x7dc33b*/
            sub_772560(v12); /*0x7dc340*/
        }
        v12 = (NiD3DTextureStage *)*v11; /*0x7dc345*/
        a3 = *v11; /*0x7dc349*/
        if ( a3 ) /*0x7dc34d*/
        {
          ++v12[7].Unk08; /*0x7dc34f*/
          v12 = (NiD3DTextureStage *)a3; /*0x7dc352*/
        }
      }
      v13 = v55; /*0x7dc356*/
      LOBYTE(v58) = 1; /*0x7dc35c*/
      if ( v55 ) /*0x7dc361*/
      {
        --v55[7].Unk08; /*0x7dc363*/
        if ( !v13[7].Unk08 ) /*0x7dc367*/
          sub_772560(v13); /*0x7dc370*/
        v12 = (NiD3DTextureStage *)a3; /*0x7dc375*/
      }
      BSShader_ConfigureTextureStageSampler(v12, 2, 1, 2); /*0x7dc37f*/
      NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7dc38c*/
      NiD3DPass_SetTextureStage((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3); /*0x7dc39e*/
      v14 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v56); /*0x7dc3b0*/
      v15 = (NiD3DTextureStage *)a3; /*0x7dc3b2*/
      v5 = a3 == *v14; /*0x7dc3b6*/
      LOBYTE(v58) = 4; /*0x7dc3b8*/
      if ( !v5 ) /*0x7dc3bd*/
      {
        if ( a3 ) /*0x7dc3c1*/
        {
          --a3[0x17]; /*0x7dc3c3*/
          if ( !v15[7].Unk08 ) /*0x7dc3cc*/
            sub_772560(v15); /*0x7dc3d1*/
        }
        v15 = (NiD3DTextureStage *)*v14; /*0x7dc3d6*/
        a3 = *v14; /*0x7dc3da*/
        if ( a3 ) /*0x7dc3de*/
        {
          ++v15[7].Unk08; /*0x7dc3e0*/
          v15 = (NiD3DTextureStage *)a3; /*0x7dc3e3*/
        }
      }
      v16 = v56; /*0x7dc3e7*/
      LOBYTE(v58) = 1; /*0x7dc3ed*/
      if ( v56 ) /*0x7dc3f2*/
      {
        --v56[7].Unk08; /*0x7dc3f4*/
        if ( !v16[7].Unk08 ) /*0x7dc3f8*/
          sub_772560(v16); /*0x7dc401*/
        v15 = (NiD3DTextureStage *)a3; /*0x7dc406*/
      }
      BSShader_ConfigureTextureStageSampler(v15, 3, 3, 2); /*0x7dc411*/
      NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7dc41e*/
      NiD3DPass_SetTextureStage((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3); /*0x7dc430*/
      v17 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v57); /*0x7dc442*/
      v18 = (NiD3DTextureStage *)a3; /*0x7dc444*/
      v5 = a3 == *v17; /*0x7dc448*/
      LOBYTE(v58) = 5; /*0x7dc44a*/
      if ( !v5 ) /*0x7dc44f*/
      {
        if ( a3 ) /*0x7dc453*/
        {
          --a3[0x17]; /*0x7dc455*/
          if ( !v18[7].Unk08 ) /*0x7dc45e*/
            sub_772560(v18); /*0x7dc463*/
        }
        v18 = (NiD3DTextureStage *)*v17; /*0x7dc468*/
        a3 = *v17; /*0x7dc46c*/
        if ( a3 ) /*0x7dc470*/
        {
          ++v18[7].Unk08; /*0x7dc472*/
          v18 = (NiD3DTextureStage *)a3; /*0x7dc475*/
        }
      }
      v19 = v57; /*0x7dc479*/
      LOBYTE(v58) = 1; /*0x7dc47f*/
      if ( v57 ) /*0x7dc484*/
      {
        --v57[7].Unk08; /*0x7dc486*/
        if ( !v19[7].Unk08 ) /*0x7dc48a*/
          sub_772560(v19); /*0x7dc493*/
        v18 = (NiD3DTextureStage *)a3; /*0x7dc498*/
      }
      BSShader_ConfigureTextureStageSampler(v18, 4, 3, 2); /*0x7dc4a3*/
      NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7dc4b0*/
      NiD3DPass_SetTextureStage((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3); /*0x7dc4c2*/
      v20 = (NiD3DTextureStage *)a3; /*0x7dc4c7*/
      v58 = 0xFFFFFFFF; /*0x7dc4cd*/
      if ( a3 ) /*0x7dc4d5*/
      {
        --a3[0x17]; /*0x7dc4d7*/
        if ( !v20[7].Unk08 ) /*0x7dc4e0*/
          sub_772560(v20); /*0x7dc4e5*/
      }
    }
    if ( i == 7 || i == 9 || i == 8 || i == 0xA ) /*0x7dc4fc*/
    {
      v21 = this->Unk07C[i]; /*0x7dc510*/
      v22 = *(volatile LONG **)(v21 + 0x58); /*0x7dc51a*/
      v23 = (NiD3DPixelShader **)(v21 + 0x58); /*0x7dc51d*/
      v52 = this->Vertex[1]; /*0x7dc522*/
      if ( v22 != (volatile LONG *)v52 ) /*0x7dc526*/
      {
        if ( v22 ) /*0x7dc52a*/
        {
          if ( !InterlockedDecrement(v22 + 1) ) /*0x7dc530*/
            (**(void (__thiscall ***)(volatile LONG *, int))v22)(v22, 1); /*0x7dc546*/
        }
        v24 = v52; /*0x7dc548*/
        v5 = v52 == 0; /*0x7dc54c*/
        *v23 = v52; /*0x7dc54e*/
        if ( !v5 ) /*0x7dc551*/
          InterlockedIncrement((volatile LONG *)v24 + 1); /*0x7dc557*/
      }
    }
    else
    {
      NiD3DPass_SetVertexShader((NiD3DPass *)this->Unk07C[i], this->Vertex[0]); /*0x7dc509*/
    }
    v25 = this->Unk07C[i]; /*0x7dc55d*/
    v26 = *(volatile LONG **)(v25 + 0x44); /*0x7dc568*/
    v27 = (NiD3DPixelShader **)(v25 + 0x44); /*0x7dc56b*/
    v52 = this->Pixel[i]; /*0x7dc570*/
    if ( v26 != (volatile LONG *)v52 ) /*0x7dc574*/
    {
      if ( v26 ) /*0x7dc578*/
      {
        if ( !InterlockedDecrement(v26 + 1) ) /*0x7dc57e*/
          (**(void (__thiscall ***)(volatile LONG *, int))v26)(v26, 1); /*0x7dc594*/
      }
      v28 = v52; /*0x7dc596*/
      v5 = v52 == 0; /*0x7dc59a*/
      *v27 = v52; /*0x7dc59c*/
      if ( !v5 ) /*0x7dc59f*/
        InterlockedIncrement((volatile LONG *)v28 + 1); /*0x7dc5a7*/
    }
    v29 = this->Unk07C[i]; /*0x7dc5ad*/
    if ( !*(_DWORD *)(v29 + 0x30) ) /*0x7dc5b1*/
      *(_DWORD *)(v29 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc5bc*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v29 + 0x30), 7, 1, 0); /*0x7dc5c8*/
    v30 = this->Unk07C[i]; /*0x7dc5cd*/
    if ( !*(_DWORD *)(v30 + 0x30) ) /*0x7dc5d1*/
      *(_DWORD *)(v30 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc5dc*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v30 + 0x30), 0x17, 4, 0); /*0x7dc5e8*/
    v31 = this->Unk07C[i]; /*0x7dc5ed*/
    if ( !*(_DWORD *)(v31 + 0x30) ) /*0x7dc5f1*/
      *(_DWORD *)(v31 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc5fc*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v31 + 0x30), 0x34, 0, 0); /*0x7dc608*/
    v32 = this->Unk07C[i]; /*0x7dc60d*/
    if ( !*(_DWORD *)(v32 + 0x30) ) /*0x7dc611*/
      *(_DWORD *)(v32 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc61c*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v32 + 0x30), 0xF, 1, 0); /*0x7dc628*/
    v33 = this->Unk07C[i]; /*0x7dc62d*/
    if ( !*(_DWORD *)(v33 + 0x30) ) /*0x7dc631*/
      *(_DWORD *)(v33 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc63c*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v33 + 0x30), 0x18, 0, 0); /*0x7dc648*/
    v34 = this->Unk07C[i]; /*0x7dc64d*/
    if ( !*(_DWORD *)(v34 + 0x30) ) /*0x7dc651*/
      *(_DWORD *)(v34 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc65c*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v34 + 0x30), 0x19, 5, 0); /*0x7dc668*/
    v35 = this->Unk07C[i]; /*0x7dc66d*/
    if ( !*(_DWORD *)(v35 + 0x30) ) /*0x7dc671*/
      *(_DWORD *)(v35 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc67c*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v35 + 0x30), 0xA8, 7, 0); /*0x7dc68b*/
    if ( i == 0xC ) /*0x7dc693*/
    {
      v36 = this->Unk07C[0xC]; /*0x7dc695*/
      if ( !*(_DWORD *)(v36 + 0x30) ) /*0x7dc69b*/
        *(_DWORD *)(v36 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc6a6*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v36 + 0x30), 0x1B, 0, 0); /*0x7dc6b2*/
      v37 = this->Unk07C[0xC]; /*0x7dc6b7*/
      if ( !*(_DWORD *)(v37 + 0x30) ) /*0x7dc6bd*/
        *(_DWORD *)(v37 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc6c8*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v37 + 0x30), 0xE, 1, 0); /*0x7dc6d1*/
    }
    else
    {
      v38 = this->Unk07C[i]; /*0x7dc6d6*/
      if ( !*(_DWORD *)(v38 + 0x30) ) /*0x7dc6da*/
        *(_DWORD *)(v38 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc6e5*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v38 + 0x30), 0x1B, 1, 0); /*0x7dc6f1*/
      v39 = this->Unk07C[i]; /*0x7dc6f6*/
      if ( !*(_DWORD *)(v39 + 0x30) ) /*0x7dc6fa*/
        *(_DWORD *)(v39 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc705*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v39 + 0x30), 0x13, 5, 0); /*0x7dc711*/
      v40 = this->Unk07C[i]; /*0x7dc716*/
      if ( !*(_DWORD *)(v40 + 0x30) ) /*0x7dc71a*/
        *(_DWORD *)(v40 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc725*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v40 + 0x30), 0x14, 6, 0); /*0x7dc731*/
      v41 = this->Unk07C[i]; /*0x7dc736*/
      if ( !*(_DWORD *)(v41 + 0x30) ) /*0x7dc73a*/
        *(_DWORD *)(v41 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc745*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v41 + 0x30), 0xE, 1, 0); /*0x7dc751*/
      if ( i == 7 || i == 8 || i == 9 || i == 0xA ) /*0x7dc768*/
      {
        v42 = this->Unk07C[i]; /*0x7dc76e*/
        if ( !*(_DWORD *)(v42 + 0x30) ) /*0x7dc772*/
          *(_DWORD *)(v42 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc77d*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v42 + 0x30), 0x34, 1, 0); /*0x7dc789*/
        v43 = this->Unk07C[i]; /*0x7dc78e*/
        if ( !*(_DWORD *)(v43 + 0x30) ) /*0x7dc792*/
          *(_DWORD *)(v43 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc79d*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v43 + 0x30), 0x39, 0, 0); /*0x7dc7a9*/
        v44 = this->Unk07C[i]; /*0x7dc7ae*/
        if ( !*(_DWORD *)(v44 + 0x30) ) /*0x7dc7b2*/
          *(_DWORD *)(v44 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc7bd*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v44 + 0x30), 0x37, 7, 0); /*0x7dc7c9*/
        v45 = this->Unk07C[i]; /*0x7dc7ce*/
        if ( !*(_DWORD *)(v45 + 0x30) ) /*0x7dc7d2*/
          *(_DWORD *)(v45 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc7dd*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v45 + 0x30), 0x38, 8, 0); /*0x7dc7e9*/
      }
      if ( !i || i == 2 || i == 1 || i == 3 || i == 4 || i == 5 ) /*0x7dc809*/
      {
        v46 = this->Unk07C[i]; /*0x7dc80f*/
        if ( !*(_DWORD *)(v46 + 0x30) ) /*0x7dc813*/
          *(_DWORD *)(v46 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc81e*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v46 + 0x30), 0x34, 1, 0); /*0x7dc82a*/
        v47 = this->Unk07C[i]; /*0x7dc82f*/
        if ( !*(_DWORD *)(v47 + 0x30) ) /*0x7dc833*/
          *(_DWORD *)(v47 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc83e*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v47 + 0x30), 0x38, 3, 0); /*0x7dc84a*/
        v48 = this->Unk07C[i]; /*0x7dc84f*/
        if ( !*(_DWORD *)(v48 + 0x30) ) /*0x7dc853*/
          *(_DWORD *)(v48 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc85e*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v48 + 0x30), 0x39, 0, 0); /*0x7dc86a*/
        v49 = this->Unk07C[i]; /*0x7dc86f*/
        if ( !*(_DWORD *)(v49 + 0x30) ) /*0x7dc873*/
          *(_DWORD *)(v49 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7dc87e*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v49 + 0x30), 0x37, 1, 0); /*0x7dc88a*/
      }
    }
  }
  return 1; /*0x7dc89d*/
}
