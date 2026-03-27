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

  v51 = a6;
  v48 = *(_DWORD *)(a2 + 0x1C);
  v7 = *(_BYTE *)(a2 + 0x2C);
  v56 = a7;
  v65 = *(_DWORD *)(a2 + 0x20);
  v8 = *(_DWORD *)(a2 + 0x24);
  v59 = this;
  v63 = (NiGeometry *)a2;
  v61 = v7 & 0x3F;
  v60 = v8;
  if ( v61 > 8 )
    v61 = 8;
  v9 = *(unsigned __int16 *)(a4 + 0x1C);
  v10 = *(_DWORD *)(a4 + 0xC);
  v55 = *(unsigned __int16 *)(a4 + 0x20);
  ArgList = 0;
  v54 = 0;
  v57 = v9;
  v58 = v10;
  sub_776DD0(a2, a4, &ArgList, &v54, &v47, &v53, &v64, &v52, &v62);
  v11 = *(NiGeometryBufferData **)(a4 + 0x28);
  sub_7780A0(v11, ArgList);
  if ( v11->StreamCount )
    *v11->VertexStride = v54;
  v50 = 1;
  if ( v56 )
  {
    v50 = 0;
  }
  else
  {
    if ( v51
      && (v12 = v51[2]) != 0
      && (*(_WORD *)(a2 + 0x2E) & 0xF000) != 0x8000
      && ((*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v12 + 0x34))(v12, v66), v66[0] == 0x64)
      && v66[5] == ArgList
      && v66[4] >= v54 * (unsigned __int16)v57 )
    {
      v13 = v51;
    }
    else
    {
      if ( !NiGeometryBufferData::RefreshVBChips(v11, 0) )
        return 0;
      if ( v11->StreamCount )
        v51 = (int *)*v11->VBChip;
      else
        v51 = 0;
      v13 = v51;
      a5 = 0xFF;
    }
    v56 = sub_776C90(v59, v13[2], v13[3], __PAIR64__(v13[4], v13[5]), SHIDWORD(v46));
  }
  v15 = v48;
  v16 = (_DWORD *)(LODWORD(v47) + v56);
  if ( v48 )
  {
    if ( (a5 & 1) != 0 )
    {
      v17 = (unsigned __int16)v57;
      v18 = 0;
      v48 = (unsigned __int16)v57;
      if ( (_WORD)v57 )
      {
        do
        {
          v19 = (_DWORD *)(v15 + 0xC * *(unsigned __int16 *)(v10 + 2 * v18));
          *v16 = *v19;
          v16[1] = v19[1];
          v16[2] = v19[2];
          v16 = (_DWORD *)((char *)v16 + v54);
          ++v18;
        }
        while ( v18 < v48 );
        v17 = v48;
      }
      v20 = *(_DWORD *)(a4 + 8);
      v21 = (va_list)(v56 + LODWORD(v53));
      ArgList = 0;
      if ( v17 )
      {
        v22 = (unsigned __int16)v55;
        do
        {
          v23 = 0;
          v47 = 1.0;
          if ( v22 >= 4 )
          {
            v24 = ((unsigned int)(v22 - 4) >> 2) + 1;
            v25 = v20 + 8;
            v23 = 4 * v24;
            do
            {
              v25 += 0x10;
              --v24;
              v53 = v47 - *(float *)(v25 - 0x18);
              v53 = v53 - *(float *)(v25 - 0x14);
              v53 = v53 - *(float *)(v25 - 0x10);
              v47 = v53 - *(float *)(v25 - 0xC);
            }
            while ( v24 );
          }
          for ( ; v23 < v22; v47 = v47 - *(float *)(v20 + 4 * v23 - 4) )
            ++v23;
          v53 = fabs(v47);
          if ( v53 > (double)flt_A3C778 )
          {
            HIDWORD(v45) = "ILLEGAL WEIGHTS! Vertex %4d - Weight Sum %8.5f  (%8.5f)\n";
            LODWORD(v45) = 0x100;
            sub_6C5D40(v21, DstBuf, v45, (char *)ArgList, 1.0 - v47, v47);
          }
          v26 = 0;
          if ( v22 - 1 > 0 )
          {
            v27 = 0;
            do
            {
              ++v26;
              *(float *)&v21[4 * v27] = *(float *)(v20 + 4 * v27);
              v27 = v26;
            }
            while ( v26 < v22 - 1 );
          }
          if ( (_WORD)v55 == 3 || (_WORD)v55 == 1 )
            *(float *)&v21[4 * v26] = *(float *)(4 * v26 + v20);
          v21 += v54;
          v20 += 4 * v22;
          ++ArgList;
        }
        while ( ArgList < v48 );
      }
    }
  }
  v28 = v65;
  if ( v65 )
  {
    if ( (a5 & 2) != 0 )
    {
      v29 = (unsigned __int16)v57;
      v30 = (_DWORD *)(v56 + v64);
      for ( i = 0; i < v29; ++i )
      {
        v32 = (_DWORD *)(v28 + 0xC * *(unsigned __int16 *)(v10 + 2 * i));
        *v30 = *v32;
        v30[1] = v32[1];
        v30[2] = v32[2];
        v30 = (_DWORD *)((char *)v30 + v54);
      }
    }
  }
  v33 = v60;
  if ( v60 )
  {
    if ( (a5 & 4) != 0 )
    {
      v34 = (unsigned int *)(v56 + LODWORD(v52));
      v35 = 0;
      if ( (_WORD)v57 )
      {
        while ( 1 )
        {
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v33 + 0xC) * dbl_A3DDD8;
          v48 = (int)v52;
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v33) * dbl_A3DDD8;
          LODWORD(v47) = (int)v52;
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v33 + 4) * dbl_A3DDD8;
          ArgList = (int)v52;
          v52 = *(float *)(0x10 * *(unsigned __int16 *)(v10 + 2 * v35) + v60 + 8) * dbl_A3DDD8;
          v55 = (int)v52;
          v10 = v58;
          ++v35;
          *v34 = v55 | ((ArgList | ((LODWORD(v47) | (v48 << 8)) << 8)) << 8);
          v34 = (unsigned int *)((char *)v34 + v54);
          if ( v35 >= (unsigned __int16)v57 )
            break;
          v33 = v60;
        }
      }
    }
  }
  if ( (a5 & 8) != 0 )
  {
    v36 = 0;
    v58 = 0;
    if ( v61 )
    {
      v37 = (unsigned __int16)v57;
      v38 = (_DWORD *)(v56 + v62);
      v55 = v56 + v62;
      do
      {
        v39 = sub_7282F0(v63, v36);
        v40 = 0;
        if ( v37 )
        {
          do
          {
            v41 = *(unsigned __int16 *)(v10 + 2 * v40);
            *v38 = *(_DWORD *)(v39 + 8 * v41);
            v38[1] = *(_DWORD *)(v39 + 8 * v41 + 4);
            v38 = (_DWORD *)((char *)v38 + v54);
            ++v40;
          }
          while ( v40 < v37 );
          v36 = v58;
        }
        ++v36;
        v38 = (_DWORD *)(v55 + 8);
        v58 = v36;
        v55 += 8;
      }
      while ( v36 < v61 );
    }
  }
  if ( v50 )
  {
    v42 = (_RTL_CRITICAL_SECTION_0 *)v59;
    v43 = v51[2];
    LODWORD(v46) = *((_DWORD *)v59 + 0x13);
    memcpy(*((void **)v59 + 0x12), *((const void **)v59 + 0x10), v46);
    v42[2].RecursionCount = 0;
    v42[2].OwningThread = 0;
    if ( HIDWORD(v42[7].SpinCount)-- == 1 )
      LODWORD(v42[7].SpinCount) = 0;
    LeaveCriticalSection(v42 + 4);
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)v43 + 0x30))(v43) < 0 )
      return 0;
  }
  return v51;
}
