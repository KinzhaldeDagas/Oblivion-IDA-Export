// Reset transient BSShaderAccumulator storage. Iterates all 0x1A3 selector buckets at this+0x104 with stride 0x14, releases old free nodes, and moves active nodes to local free chains without destroying borrowed RenderPass payloads. Mode-5 flush uses this after drawing only buckets 6..9 and 0x154..0x155, so every other queued selector, including 0x177..0x17A, is discarded without draw. Separate accumulator-owned special pass lists later in this function explicitly call RenderPass_Destroy plus FormHeapFree.
void __thiscall BSShaderAccumulator_ClearAccumulatedPasses(BSShaderAccumulator *this)
{
  BSShaderAccumulator *v1; // ebp
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // ecx
  bool v6; // zf
  _DWORD *v7; // esi
  int *v8; // eax
  int v9; // ecx
  _DWORD *v10; // esi
  _DWORD *v11; // ebp
  int *v12; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  _DWORD *v15; // esi
  _DWORD *v16; // ebp
  _DWORD *v17; // esi
  unsigned int v18; // edi
  _DWORD *v19; // esi
  _DWORD *v20; // eax

  v1 = this; /*0x7ab6f4*/
  v2 = (_DWORD *)((char *)this + 0x108); /*0x7ab6fb*/
  v3 = 0x1A3; /*0x7ab701*/
  do /*0x7ab723*/
  {
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)(v2 + 0xFFFFFFFF));// Accumulator reset releases a selector bucket's previous free nodes to the global pool; no RenderPass destructor is called. /*0x7ab70b*/
    v2[2] = *v2;                                // Move active bucket nodes to the bucket free chain and clear active bookkeeping; payload pointers are merely retained/overwritten on reuse. /*0x7ab712*/
    *v2 = 0; /*0x7ab715*/
    v2[1] = 0; /*0x7ab717*/
    v2[3] = 0; /*0x7ab71a*/
    v2 += 5; /*0x7ab71d*/
    --v3; /*0x7ab720*/
  }
  while ( v3 ); /*0x7ab723*/
  while ( *((_DWORD *)v1 + 0x12) ) /*0x7ab725*/
  {
    v4 = *((int **)v1 + 0x10); /*0x7ab730*/
    v5 = *v4; /*0x7ab733*/
    v6 = *v4 == 0; /*0x7ab735*/
    *((_DWORD *)v1 + 0x10) = *v4; /*0x7ab737*/
    if ( v6 ) /*0x7ab73a*/
      *((_DWORD *)v1 + 0x11) = 0; /*0x7ab741*/
    else
      *(_DWORD *)(v5 + 4) = 0; /*0x7ab73c*/
    v7 = (_DWORD *)v4[2]; /*0x7ab746*/
    (*(void (__thiscall **)(int, int *))(*((_DWORD *)v1 + 0xF) + 8))((int)v1 + 0x3C, v4); /*0x7ab74f*/
    --*((_DWORD *)v1 + 0x12); /*0x7ab751*/
    if ( v7 ) /*0x7ab757*/
    {
      BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v7); /*0x7ab75b*/
      v7[3] = v7[1]; /*0x7ab763*/
      v7[1] = 0; /*0x7ab766*/
      v7[2] = 0; /*0x7ab769*/
      v7[4] = 0; /*0x7ab76c*/
      *v7 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ab770*/
      FormHeapFree((unsigned int)v7); /*0x7ab776*/
    }
  }
  *((_DWORD *)v1 + 0x17) = 0; /*0x7ab783*/
  *((_DWORD *)v1 + 0x18) = 0; /*0x7ab786*/
  while ( *((_DWORD *)v1 + 0x16) ) /*0x7ab789*/
  {
    v8 = *((int **)v1 + 0x14); /*0x7ab791*/
    v9 = *v8; /*0x7ab794*/
    v6 = *v8 == 0; /*0x7ab796*/
    *((_DWORD *)v1 + 0x14) = *v8; /*0x7ab798*/
    if ( v6 ) /*0x7ab79b*/
      *((_DWORD *)v1 + 0x15) = 0; /*0x7ab7a2*/
    else
      *(_DWORD *)(v9 + 4) = 0; /*0x7ab79d*/
    v10 = (_DWORD *)v8[2]; /*0x7ab7a7*/
    (*(void (__thiscall **)(int, int *))(*((_DWORD *)v1 + 0x13) + 8))((int)v1 + 0x4C, v8); /*0x7ab7b0*/
    --*((_DWORD *)v1 + 0x16); /*0x7ab7b2*/
    if ( v10 ) /*0x7ab7b8*/
    {
      BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v10); /*0x7ab7bc*/
      v10[3] = v10[1]; /*0x7ab7c4*/
      v10[1] = 0; /*0x7ab7c7*/
      v10[2] = 0; /*0x7ab7ca*/
      v10[4] = 0; /*0x7ab7cd*/
      *v10 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ab7d1*/
      FormHeapFree((unsigned int)v10); /*0x7ab7d7*/
    }
  }
  *((_DWORD *)v1 + 0x1D) = 0; /*0x7ab7e4*/
  if ( *((_DWORD *)v1 + 0x1C) ) /*0x7ab7e7*/
  {
    v11 = (_DWORD *)((char *)v1 + 0x64); /*0x7ab7ec*/
    do /*0x7ab862*/
    {
      v12 = (int *)v11[1]; /*0x7ab7f0*/
      v13 = *v12; /*0x7ab7f3*/
      v6 = *v12 == 0; /*0x7ab7f5*/
      v11[1] = *v12; /*0x7ab7f7*/
      if ( v6 ) /*0x7ab7fa*/
        v11[2] = 0; /*0x7ab801*/
      else
        *(_DWORD *)(v13 + 4) = 0; /*0x7ab7fc*/
      v14 = (_DWORD *)v12[2]; /*0x7ab807*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v11 + 8))(v11, v12); /*0x7ab810*/
      --v11[3]; /*0x7ab812*/
      if ( v14 ) /*0x7ab818*/
      {
        BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v14); /*0x7ab81c*/
        v14[3] = v14[1]; /*0x7ab824*/
        v14[1] = 0; /*0x7ab82c*/
        v14[2] = 0; /*0x7ab82f*/
        v14[4] = 0; /*0x7ab832*/
        BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)(v14 + 5)); /*0x7ab835*/
        v14[8] = v14[6]; /*0x7ab83d*/
        v14[6] = 0; /*0x7ab840*/
        v14[7] = 0; /*0x7ab843*/
        v14[9] = 0; /*0x7ab846*/
        v14[5] = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ab84a*/
        *v14 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x7ab850*/
        FormHeapFree((unsigned int)v14); /*0x7ab856*/
      }
    }
    while ( *((_DWORD *)this + 0x1C) ); /*0x7ab862*/
    v1 = this; /*0x7ab867*/
  }
  v15 = *((_DWORD **)v1 + 0x1E); /*0x7ab869*/
  if ( v15 ) /*0x7ab86e*/
  {
    BSTPersistentList_ReleaseFreeNodesToGlobalPool(*((_DWORD *)v1 + 0x1E)); /*0x7ab872*/
    v15[3] = v15[1]; /*0x7ab87a*/
    v15[1] = 0; /*0x7ab87d*/
    v15[2] = 0; /*0x7ab880*/
    v15[4] = 0; /*0x7ab883*/
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v1 + 0x90); /*0x7ab88e*/
  *((_DWORD *)v1 + 0x27) = *((_DWORD *)v1 + 0x25); /*0x7ab896*/
  *((_DWORD *)v1 + 0x25) = 0; /*0x7ab899*/
  *((_DWORD *)v1 + 0x26) = 0; /*0x7ab89c*/
  *((_DWORD *)v1 + 0x28) = 0; /*0x7ab89f*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v1 + 0x7C); /*0x7ab8a7*/
  *((_DWORD *)v1 + 0x22) = *((_DWORD *)v1 + 0x20); /*0x7ab8af*/
  *((_DWORD *)v1 + 0x20) = 0; /*0x7ab8b2*/
  *((_DWORD *)v1 + 0x21) = 0; /*0x7ab8b5*/
  *((_DWORD *)v1 + 0x23) = 0; /*0x7ab8b8*/
  if ( *((_DWORD *)v1 + 0x877) ) /*0x7ab8bb*/
  {
    v16 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)v1 + 0x875) + 8) + 4); /*0x7ab8cc*/
    if ( v16[4] ) /*0x7ab8cf*/
    {
      v17 = (_DWORD *)v16[1]; /*0x7ab8d4*/
      while ( v17 ) /*0x7ab8d9*/
      {
        v18 = v17[2]; /*0x7ab8e0*/
        v17 = (_DWORD *)*v17; /*0x7ab8e8*/
        if ( v18 ) /*0x7ab8ea*/
        {
          RenderPass_Destroy(v18); /*0x7ab8ee*/
          FormHeapFree(v18); /*0x7ab8f4*/
        }
      }
      BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v16); /*0x7ab902*/
      v16[3] = v16[1]; /*0x7ab90a*/
      v16[1] = 0; /*0x7ab90d*/
      v16[2] = 0; /*0x7ab910*/
      v16[4] = 0; /*0x7ab913*/
    }
    v1 = this; /*0x7ab916*/
  }
  v19 = *((_DWORD **)v1 + 0x871); /*0x7ab91a*/
  while ( v19 ) /*0x7ab928*/
  {
    v20 = v19; /*0x7ab932*/
    v19 = (_DWORD *)*v19; /*0x7ab934*/
    (*(void (__thiscall **)(int, _DWORD *))(*((_DWORD *)v1 + 0x870) + 8))((int)v1 + 0x21C0, v20); /*0x7ab93c*/
  }
  *((_DWORD *)v1 + 0x873) = 0; /*0x7ab942*/
  *((_DWORD *)v1 + 0x871) = 0; /*0x7ab945*/
  *((_DWORD *)v1 + 0x872) = 0; /*0x7ab948*/
  unk_B42CDB = 0; /*0x7ab94e*/
}
