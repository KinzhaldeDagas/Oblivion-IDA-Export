// MoonSugarEffect decode: fallback skinned vertex packer. Uses skin partition remap/weights/bone data, refreshes VB chips if stale/too small, writes packed partition vertices, and unlocks owned VB.
// Verified OblivionNew 2026-09-27: staging-lock call0x777662 takes active VB-chip fields native VB+0x08, byte offset+0x0C, lock flags+0x10 and byte length+0x14 (loads0x77764E..657). It calls NiDX9VertexBufferManager_LockToStaging; flags are chip-provided, not a hardcoded mode inferred from this caller. Existing packer semantics otherwise unchanged.
int *__thiscall sub_7774C0(char *this, int a2, int a3, int a4, char a5, int *a6, int a7)
{
  char v7; // al
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebp
  NiGeometryBufferData *v11; // edi
  int v12; // eax
  int *v13; // eax
  unsigned int v15; // esi
  _DWORD *v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  _DWORD *v19; // ecx
  int v20; // esi
  va_list v21; // edi
  int v22; // ebx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned __int16 v26; // cx
  int v27; // eax
  int v28; // edi
  unsigned int v29; // esi
  _DWORD *v30; // eax
  unsigned int i; // edx
  _DWORD *v32; // ecx
  int v33; // edi
  unsigned int *v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  unsigned int v37; // edi
  _DWORD *v38; // esi
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // edx
  _RTL_CRITICAL_SECTION_0 *v42; // esi
  int v43; // edi
  size_t v45; // [esp-Ch] [ebp-194h]
  size_t v46; // [esp+Ch] [ebp-17Ch]
  float v47; // [esp+20h] [ebp-168h] BYREF
  unsigned int v48; // [esp+24h] [ebp-164h]
  int ArgList; // [esp+28h] [ebp-160h] BYREF
  char v50; // [esp+2Fh] [ebp-159h]
  int *v51; // [esp+30h] [ebp-158h]
  float v52; // [esp+34h] [ebp-154h] BYREF
  float v53; // [esp+38h] [ebp-150h] BYREF
  UInt32 v54; // [esp+3Ch] [ebp-14Ch] BYREF
  int v55; // [esp+40h] [ebp-148h]
  int v56; // [esp+44h] [ebp-144h]
  int v57; // [esp+48h] [ebp-140h]
  unsigned int v58; // [esp+4Ch] [ebp-13Ch]
  char *v59; // [esp+50h] [ebp-138h]
  int v60; // [esp+54h] [ebp-134h]
  unsigned int v61; // [esp+58h] [ebp-130h]
  int v62; // [esp+5Ch] [ebp-12Ch] BYREF
  NiGeometry *v63; // [esp+60h] [ebp-128h]
  int v64; // [esp+64h] [ebp-124h] BYREF
  int v65; // [esp+68h] [ebp-120h]
  _DWORD v66[6]; // [esp+6Ch] [ebp-11Ch] BYREF
  char DstBuf[256]; // [esp+84h] [ebp-104h] BYREF

  v51 = a6; /*0x7774f3*/
  v48 = *(_DWORD *)(a2 + 0x1C); /*0x7774fa*/
  v7 = *(_BYTE *)(a2 + 0x2C); /*0x7774fe*/
  v56 = a7; /*0x777502*/
  v65 = *(_DWORD *)(a2 + 0x20); /*0x77750f*/
  v8 = *(_DWORD *)(a2 + 0x24); /*0x777513*/
  v59 = this; /*0x777517*/
  v63 = (NiGeometry *)a2; /*0x77751b*/
  v61 = v7 & 0x3F; /*0x77751f*/
  v60 = v8; /*0x777523*/
  if ( v61 > 8 ) /*0x777527*/
    v61 = 8; /*0x777529*/
  v9 = *(unsigned __int16 *)(a4 + 0x1C); /*0x777535*/
  v10 = *(_DWORD *)(a4 + 0xC); /*0x777539*/
  v55 = *(unsigned __int16 *)(a4 + 0x20); /*0x77753c*/
  ArgList = 0; /*0x777542*/
  v54 = 0; /*0x777546*/
  v57 = v9; /*0x77754a*/
  v58 = v10; /*0x777573*/
  sub_776DD0(a2, a4, &ArgList, &v54, &v47, &v53, &v64, &v52, &v62); /*0x777577*/
  v11 = *(NiGeometryBufferData **)(a4 + 0x28); /*0x777580*/
  sub_7780A0(v11, ArgList); /*0x777586*/
  if ( v11->StreamCount ) /*0x77758b*/
    *v11->VertexStride = v54; /*0x777598*/
  v50 = 1; /*0x77759f*/
  if ( v56 ) /*0x7775a4*/
  {
    v50 = 0; /*0x7775ae*/
  }
  else
  {
    if ( v51 /*0x777603*/
      && (v12 = v51[2]) != 0
      && (*(_WORD *)(a2 + 0x2E) & 0xF000) != 0x8000
      && ((*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v12 + 0x34))(v12, v66), v66[0] == 0x64)
      && v66[5] == ArgList
      && v66[4] >= v54 * (unsigned __int16)v57 )
    {
      v13 = v51; /*0x777605*/
    }
    else
    {
      if ( !NiGeometryBufferData::RefreshVBChips(v11, 0) ) /*0x777616*/
        return 0; /*0x777621*/
      if ( v11->StreamCount ) /*0x777626*/
        v51 = (int *)*v11->VBChip; /*0x777631*/
      else
        v51 = 0; /*0x777637*/
      v13 = v51; /*0x77763f*/
      a5 = 0xFF; /*0x777643*/
    }
    v56 = NiDX9VertexBufferManager_LockToStaging(v59, v13[2], v13[3], __PAIR64__(v13[4], v13[5]), SHIDWORD(v46)); /*0x777667*/
  }
  v15 = v48; /*0x777673*/
  v16 = (_DWORD *)(LODWORD(v47) + v56); /*0x777677*/
  if ( v48 ) /*0x77767b*/
  {
    if ( (a5 & 1) != 0 ) /*0x777689*/
    {
      v17 = (unsigned __int16)v57; /*0x77768f*/
      v18 = 0; /*0x777694*/
      v48 = (unsigned __int16)v57; /*0x777698*/
      if ( (_WORD)v57 ) /*0x77769c*/
      {
        do /*0x7776c7*/
        {
          v19 = (_DWORD *)(v15 + 0xC * *(unsigned __int16 *)(v10 + 2 * v18)); /*0x7776ab*/
          *v16 = *v19; /*0x7776ae*/
          v16[1] = v19[1]; /*0x7776b3*/
          v16[2] = v19[2]; /*0x7776b9*/
          v16 = (_DWORD *)((char *)v16 + v54); /*0x7776bc*/
          ++v18; /*0x7776c0*/
        }
        while ( v18 < v48 ); /*0x7776c7*/
        v17 = v48; /*0x7776c9*/
      }
      v20 = *(_DWORD *)(a4 + 8); /*0x7776d7*/
      v21 = (va_list)(v56 + LODWORD(v53)); /*0x7776da*/
      ArgList = 0; /*0x7776dd*/
      if ( v17 ) /*0x7776e5*/
      {
        v22 = (unsigned __int16)v55; /*0x7776eb*/
        do /*0x777809*/
        {
          v23 = 0; /*0x7776f2*/
          v47 = 1.0; /*0x7776f7*/
          if ( v22 >= 4 ) /*0x7776fb*/
          {
            v24 = ((unsigned int)(v22 - 4) >> 2) + 1; /*0x777703*/
            v25 = v20 + 8; /*0x777706*/
            v23 = 4 * v24; /*0x777709*/
            do /*0x777742*/
            {
              v25 += 0x10; /*0x777714*/
              --v24; /*0x777717*/
              v53 = v47 - *(float *)(v25 - 0x18); /*0x77771d*/
              v53 = v53 - *(float *)(v25 - 0x14); /*0x777728*/
              v53 = v53 - *(float *)(v25 - 0x10); /*0x777733*/
              v47 = v53 - *(float *)(v25 - 0xC); /*0x77773e*/
            }
            while ( v24 ); /*0x777742*/
          }
          for ( ; v23 < v22; v47 = v47 - *(float *)(v20 + 4 * v23 - 4) ) /*0x777746*/
            ++v23; /*0x777754*/
          v53 = fabs(v47); /*0x77776b*/
          if ( v53 > (double)flt_A3C778 ) /*0x77777e*/
          {
            HIDWORD(v45) = "ILLEGAL WEIGHTS! Vertex %4d - Weight Sum %8.5f  (%8.5f)\n"; /*0x77779a*/
            LODWORD(v45) = 0x100; /*0x77779f*/
            sub_6C5D40(v21, DstBuf, v45, (char *)ArgList, 1.0 - v47, v47); /*0x7777a5*/
          }
          v26 = 0; /*0x7777b4*/
          if ( v22 - 1 > 0 ) /*0x7777b8*/
          {
            v27 = 0; /*0x7777ba*/
            do /*0x7777ce*/
            {
              ++v26; /*0x7777c3*/
              *(float *)&v21[4 * v27] = *(float *)(v20 + 4 * v27); /*0x7777c6*/
              v27 = v26; /*0x7777c9*/
            }
            while ( v26 < v22 - 1 ); /*0x7777ce*/
          }
          if ( (_WORD)v55 == 3 || (_WORD)v55 == 1 ) /*0x7777de*/
            *(float *)&v21[4 * v26] = *(float *)(4 * v26 + v20); /*0x7777ea*/
          v21 += v54; /*0x7777ed*/
          v20 += 4 * v22; /*0x7777f8*/
          ++ArgList; /*0x777805*/
        }
        while ( ArgList < v48 ); /*0x777809*/
      }
    }
  }
  v28 = v65; /*0x77780f*/
  if ( v65 ) /*0x777815*/
  {
    if ( (a5 & 2) != 0 ) /*0x77781f*/
    {
      v29 = (unsigned __int16)v57; /*0x777821*/
      v30 = (_DWORD *)(v56 + v64); /*0x77782e*/
      for ( i = 0; i < v29; ++i ) /*0x777834*/
      {
        v32 = (_DWORD *)(v28 + 0xC * *(unsigned __int16 *)(v10 + 2 * i)); /*0x77784b*/
        *v30 = *v32; /*0x77784e*/
        v30[1] = v32[1]; /*0x777853*/
        v30[2] = v32[2]; /*0x777859*/
        v30 = (_DWORD *)((char *)v30 + v54); /*0x77785c*/
      }
    }
  }
  v33 = v60; /*0x777867*/
  if ( v60 ) /*0x77786d*/
  {
    if ( (a5 & 4) != 0 ) /*0x77787b*/
    {
      v34 = (unsigned int *)(v56 + LODWORD(v52)); /*0x777889*/
      v35 = 0; /*0x777890*/
      if ( (_WORD)v57 ) /*0x777894*/
      {
        while ( 1 ) /*0x7778b6*/
        {
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v33 + 0xC) * dbl_A3DDD8; /*0x7778b6*/
          v48 = (int)v52; /*0x7778be*/
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v33) * dbl_A3DDD8; /*0x7778d7*/
          LODWORD(v47) = (int)v52; /*0x7778df*/
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v33 + 4) * dbl_A3DDD8; /*0x7778f9*/
          ArgList = (int)v52; /*0x777901*/
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v60 + 8) * dbl_A3DDD8; /*0x77791f*/
          v55 = (int)v52; /*0x777927*/
          v10 = v58; /*0x77792b*/
          ++v35; /*0x777940*/
          *v34 = v55 | ((ArgList | ((LODWORD(v47) | (v48 << 8)) << 8)) << 8); /*0x777943*/
          v34 = (unsigned int *)((char *)v34 + v54); /*0x77794a*/
          if ( v35 >= (unsigned __int16)v57 ) /*0x777950*/
            break; /*0x777950*/
          v33 = v60; /*0x7778a0*/
        }
      }
    }
  }
  if ( (a5 & 8) != 0 ) /*0x77795e*/
  {
    v36 = 0; /*0x777960*/
    v58 = 0; /*0x777966*/
    if ( v61 ) /*0x77796a*/
    {
      v37 = (unsigned __int16)v57; /*0x777974*/
      v38 = (_DWORD *)(v56 + v62); /*0x777979*/
      v55 = v56 + v62; /*0x77797c*/
      do /*0x7779c8*/
      {
        v39 = sub_7282F0(v63, v36); /*0x777985*/
        v40 = 0; /*0x77798a*/
        if ( v37 ) /*0x77798e*/
        {
          do /*0x7779ac*/
          {
            v41 = *(unsigned __int16 *)(v10 + 2 * v40); /*0x777990*/
            *v38 = *(_DWORD *)(v39 + 8 * v41); /*0x77799b*/
            v38[1] = *(_DWORD *)(v39 + 8 * v41 + 4); /*0x7779a0*/
            v38 = (_DWORD *)((char *)v38 + v54); /*0x7779a3*/
            ++v40; /*0x7779a7*/
          }
          while ( v40 < v37 ); /*0x7779ac*/
          v36 = v58; /*0x7779ae*/
        }
        ++v36; /*0x7779b6*/
        v38 = (_DWORD *)(v55 + 8); /*0x7779b9*/
        v58 = v36; /*0x7779c0*/
        v55 += 8; /*0x7779c4*/
      }
      while ( v36 < v61 ); /*0x7779c8*/
    }
  }
  if ( v50 ) /*0x7779cf*/
  {
    v42 = (_RTL_CRITICAL_SECTION_0 *)v59; /*0x7779d1*/
    v43 = v51[2]; /*0x7779df*/
    LODWORD(v46) = *((_DWORD *)v59 + 0x13); /*0x7779e5*/
    memcpy(*((void **)v59 + 0x12), *((const void **)v59 + 0x10), v46); /*0x7779e8*/
    v42[2].RecursionCount = 0; /*0x7779f8*/
    v42[2].OwningThread = 0; /*0x7779fb*/
    if ( HIDWORD(v42[7].SpinCount)-- == 1 ) /*0x7779fe*/
      LODWORD(v42[7].SpinCount) = 0; /*0x777a04*/
    LeaveCriticalSection(v42 + 4); /*0x777a08*/
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)v43 + 0x30))(v43) < 0 ) /*0x777a18*/
      return 0; /*0x777a18*/
  }
  return v51; /*0x777a22*/
}
