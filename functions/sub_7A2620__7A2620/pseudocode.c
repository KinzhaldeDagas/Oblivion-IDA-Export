// CTreeEngine::FreeTransientData. Releases compact trunk branch, leaf LOD vectors, branch-info arrays, and related transient generator state, then clears CTreeEngine+0x21.
void __thiscall OB_CTreeEngine_FreeTransientData_010201A0(OB_CTreeEngine_010201A0 *this)
{
  unsigned int v1; // ebp
  unsigned int v2; // esi
  OB_CBranch_010201A0 *trunkBranch; // esi
  int v5; // ebx
  bool v6; // cc
  unsigned int i; // ebp
  OB_stVectorBillboardLeafPtr_010201A0 *leafLodVectors; // eax
  int v9; // ecx
  char *v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  OB_stVectorBillboardLeafPtr_010201A0 *v12; // esi
  int v13; // ecx
  int v14; // esi
  OB_stVectorBillboardLeafPtr_010201A0 *v15; // esi
  char *v16; // ebp
  int v17; // esi
  char *v18; // ebx
  int v19; // eax
  char *v20; // eax
  unsigned int v21; // esi
  unsigned int j; // esi
  char *begin; // ecx
  _DWORD *v24; // edx
  unsigned int v25; // ebx
  void *v26; // ecx
  char *end; // ebx
  char *v28; // esi
  int v29; // eax
  char *v30; // ebp
  rsize_t v31; // [esp-18h] [ebp-28h]
  rsize_t v32; // [esp-18h] [ebp-28h]
  rsize_t v33; // [esp-Ch] [ebp-1Ch]
  int v34; // [esp+4h] [ebp-Ch]
  int v35; // [esp+8h] [ebp-8h]
  char *v36; // [esp+Ch] [ebp-4h]

  if ( this->transientDataIntact ) /*0x7a2626*/
  {
    v33 = __PAIR64__(v1, v2); /*0x7a2632*/
    trunkBranch = this->trunkBranch; /*0x7a2633*/
    v5 = 0; /*0x7a2636*/
    if ( trunkBranch ) /*0x7a263a*/
    {
      OB_CBranch_cleanup_010201A0((unsigned int *)this->trunkBranch); /*0x7a263e*/
      FormHeapFree((unsigned int)trunkBranch); /*0x7a2644*/
    }
    v6 = this->leafInfo.leafLodLevelCount <= 0; /*0x7a264c*/
    this->trunkBranch = 0; /*0x7a2652*/
    v35 = 0; /*0x7a2655*/
    if ( !v6 ) /*0x7a2659*/
    {
      v34 = 0; /*0x7a265f*/
      do /*0x7a2756*/
      {
        if ( this->leafLodVectors ) /*0x7a2663*/
        {
          for ( i = 0; ; ++i ) /*0x7a2670*/
          {
            leafLodVectors = this->leafLodVectors; /*0x7a2672*/
            v9 = *(int *)((char *)&leafLodVectors->begin + v5); /*0x7a2678*/
            v10 = (char *)leafLodVectors + v5; /*0x7a267e*/
            if ( !v9 || i >= (*((_DWORD *)v10 + 2) - v9) >> 2 ) /*0x7a268d*/
              break; /*0x7a268d*/
            v11 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)v10 + 1) + 4 * i); /*0x7a26a7*/
            if ( v11 ) /*0x7a26ac*/
              (**v11)(v11, 1); /*0x7a26b4*/
            v12 = this->leafLodVectors; /*0x7a26b6*/
            v13 = *(int *)((char *)&v12->begin + v5); /*0x7a26bc*/
            v14 = (int)v12 + v5; /*0x7a26c0*/
            if ( !v13 || i >= (*(_DWORD *)(v14 + 8) - v13) >> 2 ) /*0x7a26d0*/
              _invalid_parameter_noinfo(v5, (int)this, v14); /*0x7a26d2*/
            *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * i) = 0; /*0x7a26da*/
          }
          v15 = this->leafLodVectors; /*0x7a26e6*/
          v16 = *(char **)((char *)&v15->end + v5); /*0x7a26ec*/
          v17 = (int)v15 + v5; /*0x7a26f0*/
          if ( *(_DWORD *)(v17 + 4) > (unsigned int)v16 ) /*0x7a26f5*/
            _invalid_parameter_noinfo(v5, (int)this, v17); /*0x7a26f7*/
          v18 = *(char **)(v17 + 4); /*0x7a26fc*/
          if ( (unsigned int)v18 > *(_DWORD *)(v17 + 8) ) /*0x7a2702*/
            _invalid_parameter_noinfo((int)v18, (int)this, v17); /*0x7a2704*/
          if ( v18 != v16 ) /*0x7a270b*/
          {
            v19 = (*(_DWORD *)(v17 + 8) - (int)v16) >> 2; /*0x7a2712*/
            v36 = &v18[4 * v19]; /*0x7a2721*/
            if ( v19 > 0 ) /*0x7a2725*/
            {
              HIDWORD(v31) = v16; /*0x7a2728*/
              LODWORD(v31) = 4 * v19; /*0x7a2729*/
              memmove_s(v18, v31, (const void *)(4 * v19), v33); /*0x7a272b*/
            }
            *(_DWORD *)(v17 + 8) = v36; /*0x7a2737*/
          }
          v5 = v34; /*0x7a273a*/
        }
        v5 += 0x10; /*0x7a2745*/
        v6 = ++v35 < this->leafInfo.leafLodLevelCount; /*0x7a2748*/
        v34 = v5; /*0x7a2752*/
      }
      while ( v6 ); /*0x7a2756*/
    }
    v20 = (char *)this->leafLodVectors; /*0x7a275c*/
    if ( v20 ) /*0x7a2764*/
    {
      v21 = (unsigned int)(v20 + 0xFFFFFFFC); /*0x7a2769*/
      _LN21( /*0x7a2775*/
        v20,
        0x10u,
        *((_DWORD *)v20 + 0xFFFFFFFF),
        (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);
      FormHeapFree(v21); /*0x7a277b*/
    }
    this->leafLodVectors = 0; /*0x7a2783*/
    for ( j = 0; ; ++j ) /*0x7a278d*/
    {
      begin = (char *)this->branchInfoVector.begin; /*0x7a2790*/
      if ( !begin || j >= ((char *)this->branchInfoVector.end - (char *)begin) >> 2 ) /*0x7a27a1*/
        break; /*0x7a27a1*/
      v24 = this->branchInfoVector.begin; /*0x7a27b8*/
      v25 = v24[j]; /*0x7a27bb*/
      if ( v25 ) /*0x7a27c0*/
      {
        OB_SIdvBranchInfo_Dtor_010201A0((OB_SIdvBranchInfo_010201A0 *)v24[j]);// Each branch-info pointer is destructed through OB_SIdvBranchInfo_Dtor before the enclosing 0x74 record is freed, proving per-record ownership of the nine optional spline pointers. /*0x7a27c4*/
        FormHeapFree(v25); /*0x7a27ca*/
      }
      v26 = this->branchInfoVector.begin; /*0x7a27d2*/
      if ( !v26 || j >= ((char *)this->branchInfoVector.end - (char *)v26) >> 2 ) /*0x7a27e3*/
        _invalid_parameter_noinfo(v25, (int)this, j); /*0x7a27e5*/
      *((_DWORD *)this->branchInfoVector.begin + j) = 0; /*0x7a27ed*/
    }
    end = (char *)this->branchInfoVector.end; /*0x7a27f9*/
    if ( begin > end ) /*0x7a27fe*/
      _invalid_parameter_noinfo((int)end, (int)this, j); /*0x7a2800*/
    v28 = (char *)this->branchInfoVector.begin; /*0x7a2805*/
    if ( v28 > this->branchInfoVector.end ) /*0x7a280b*/
      _invalid_parameter_noinfo((int)end, (int)this, (int)v28); /*0x7a280d*/
    if ( v28 != end ) /*0x7a2814*/
    {
      v29 = ((char *)this->branchInfoVector.end - (char *)end) >> 2; /*0x7a281b*/
      v30 = &v28[4 * v29]; /*0x7a2827*/
      if ( v29 > 0 ) /*0x7a282a*/
      {
        HIDWORD(v32) = end; /*0x7a282d*/
        LODWORD(v32) = 4 * v29; /*0x7a282e*/
        memmove_s(v28, v32, (const void *)(4 * v29), v33); /*0x7a2830*/
      }
      this->branchInfoVector.end = v30; /*0x7a2838*/
    }
    this->transientDataIntact = 0; /*0x7a283d*/
  }
}
