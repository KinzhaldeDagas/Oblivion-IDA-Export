void __usercall sub_4C8680(signed int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v6; // ecx
  unsigned int YCoordinate; // edi
  _DWORD *v8; // eax
  int i; // ebx
  int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // esi
  bool v13; // zf
  float *v14; // ecx
  double v15; // st7
  UInt32 refID; // esi
  char v17; // al
  int v18; // ebx
  int v19; // ecx
  __int64 v20; // rax
  char *v21; // esi
  UInt32 v22; // eax
  TESObjectCELL *flags; // ecx
  UInt32 v24; // eax
  int XCoordinate; // eax
  TESObjectCELL *v26; // ecx
  double v27; // st7
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // ecx
  int j; // esi
  unsigned int v33; // eax
  bool v34; // zf
  UInt32 v35; // ecx
  int v36; // edx
  UInt32 v37; // eax
  int v38; // ecx
  UInt32 v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // eax
  UInt32 v43; // edx
  int v44; // esi
  unsigned __int16 v45; // di
  size_t v46; // [esp-4h] [ebp-225Ch]
  size_t v47; // [esp-4h] [ebp-225Ch]
  size_t v48; // [esp-4h] [ebp-225Ch]
  unsigned int v49; // [esp+10h] [ebp-2248h]
  char v50; // [esp+10h] [ebp-2248h]
  BOOL v51; // [esp+10h] [ebp-2248h]
  unsigned __int8 v52; // [esp+10h] [ebp-2248h]
  BOOL v53; // [esp+14h] [ebp-2244h]
  int v54; // [esp+14h] [ebp-2244h]
  int v55; // [esp+14h] [ebp-2244h]
  int k; // [esp+14h] [ebp-2244h]
  float v57; // [esp+18h] [ebp-2240h]
  TESForm *v58; // [esp+1Ch] [ebp-223Ch]
  int v59; // [esp+20h] [ebp-2238h]
  int v60; // [esp+20h] [ebp-2238h]
  int m; // [esp+24h] [ebp-2234h]
  int v62; // [esp+28h] [ebp-2230h] BYREF
  unsigned __int8 v63; // [esp+2Ch] [ebp-222Ch]
  __int16 v64; // [esp+2Eh] [ebp-222Ah]
  int v65; // [esp+30h] [ebp-2228h] BYREF
  unsigned __int8 v66; // [esp+34h] [ebp-2224h]
  __int16 v67; // [esp+36h] [ebp-2222h]
  __int16 Src; // [esp+38h] [ebp-2220h] BYREF
  char v69[2]; // [esp+3Ah] [ebp-221Eh]
  float v70[785]; // [esp+3Ch] [ebp-221Ch]
  int v71[32]; // [esp+C80h] [ebp-15D8h]
  int v72[1090]; // [esp+D00h] [ebp-1558h]
  float v73; // [esp+1E08h] [ebp-450h] BYREF
  char v74[1096]; // [esp+1E0Ch] [ebp-44Ch] BYREF
  int savedregs; // [esp+2258h] [ebp+0h] BYREF

  v6 = *(_DWORD *)(a1 + 0x1C);
  YCoordinate = a1 + 0x1C;
  v58 = (TESForm *)a1;
  if ( (v6 & 7) != 0 && ((v6 & 8) != 0 || (v8 = *(_DWORD **)(a1 + 0x24)) != 0 && v8[1] && v8[2] && v8[3]) )
  {
    if ( (v6 & 0x10) == 0 )
      sub_4C8210(a1, a2, a3, a4);
    TESForm_InitializeFormRecord((TESForm *)a1, (char)&savedregs);
    LODWORD(v46) = 4;
    TESForm_PutFormRecordChunkData(0x41544144, (void *)(a1 + 0x1C), v46);
    if ( (*(_BYTE *)YCoordinate & 1) != 0 )
    {
      for ( i = 0; i < 4; ++i )
      {
        v10 = 0;
        v49 = 0;
        v11 = 0;
        do
        {
          v12 = 0x10 * (i / 2 + i % 2 + 0x20 * (i / 2)) + v11 + 0x10 * (v11 / 0x11);
          v53 = 0;
          if ( v11 / 0x11 == 0x10 )
            v53 = i / 2 != 1;
          if ( v11 % 0x11 == 0x10 )
            v13 = i % 2 == 1;
          else
            v13 = !v53;
          if ( v13 )
          {
            v62 = (int)*(float *)(*(_DWORD *)(*(_DWORD *)(v58[1].member.refID + 4) + 4 * i) + v10 + 8);
            v14 = (float *)(v10 + *(_DWORD *)(*(_DWORD *)(v58[1].member.refID + 8) + 4 * i));
            v72[v12] = v62 >> 3;
            sub_43F350(v14);
            v54 = 3 * v12;
            v15 = dbl_A46298;
            v69[v54 - 2] = Double_To_SInt32(v15);
            refID = v58[1].member.refID;
            v69[v54 - 1] = Double_To_SInt32(v15);
            v17 = Double_To_SInt32(v15 * *(float *)(*(_DWORD *)(*(_DWORD *)(refID + 8) + 4 * i) + v10 + 8));
            v11 = v49;
            v69[v54] = v17;
          }
          ++v11;
          v10 += 0xC;
          v49 = v11;
        }
        while ( v10 < 0xD8C );
      }
      LODWORD(v47) = 0xCC3;
      TESForm_PutFormRecordChunkData(0x4C4D4E56, &Src, v47);
      v18 = v72[0];
      v73 = (float)v72[0];
      v50 = 0;
      v19 = 0;
      do
      {
        v20 = v72[v19] - v18;
        if ( (int)((HIDWORD(v20) ^ v20) - HIDWORD(v20)) < 0x80 )
        {
          v21 = &v74[v19];
          v74[v19] = LOBYTE(v72[v19]) - v18;
        }
        else
        {
          v50 = 1;
          v21 = &v74[v19];
          if ( v72[v19] <= v18 )
            *v21 = 0x81;
          else
            *v21 = 0x7F;
        }
        v62 = v19 + 1;
        YCoordinate = 0x21;
        if ( (v19 + 1) % 0x21 )
        {
          if ( v50 )
            v18 += *v21;
          else
            v18 = v72[v19];
        }
        else
        {
          v18 = v71[v19];
        }
        v19 = v62;
      }
      while ( v62 < 0x441 );
      LODWORD(v48) = 0x448;
      TESForm_PutFormRecordChunkData(0x54474856, &v73, v48);
      if ( v50 )
      {
        v22 = v58[1].member.refID;
        if ( v22 )
        {
          YCoordinate = *(_DWORD *)(v22 + 0x9C);
        }
        else
        {
          flags = (TESObjectCELL *)v58[1].member.flags;
          if ( flags )
            YCoordinate = TESObjectCELL_GetYCoordinate(flags);
          else
            YCoordinate = 0;
        }
        v24 = v58[1].member.refID;
        if ( v24 )
        {
          XCoordinate = *(_DWORD *)(v24 + 0x98);
        }
        else
        {
          v26 = (TESObjectCELL *)v58[1].member.flags;
          if ( v26 )
            XCoordinate = TESObjectCELL_GetXCoordinate(v26);
          else
            XCoordinate = 0;
        }
        PrintError(
          "Error saving land height Data for cell (%i, %i). Error correction attempted.\r\n",
          XCoordinate,
          YCoordinate);
      }
    }
    if ( (v58[1].member.type & 2) != 0 )
    {
      v27 = dbl_A3DDD8;
      v28 = 0;
      v55 = 0;
      do
      {
        v29 = v28 / 2;
        v59 = v28 / 2;
        v30 = v28 % 2;
        v31 = 0x10 * (v29 + v30 + 0x20 * v29);
        YCoordinate = 0;
        v62 = v31;
        for ( j = 0; j < 0x1210; j += 0x10 )
        {
          v33 = v31 + YCoordinate + 0x10 * (YCoordinate / 0x11);
          v51 = 0;
          if ( YCoordinate / 0x11 == 0x10 )
            v51 = v59 != 1;
          if ( YCoordinate % 0x11 == 0x10 )
            v34 = v30 == 1;
          else
            v34 = !v51;
          if ( v34 )
          {
            v35 = v58[1].member.refID;
            v36 = 3 * v33;
            v69[v36 - 2] = (int)(*(float *)(*(_DWORD *)(*(_DWORD *)(v35 + 0xC) + 4 * v55) + j) * v27);
            v69[v36 - 1] = (int)(*(float *)(*(_DWORD *)(*(_DWORD *)(v35 + 0xC) + 4 * v55) + j + 4) * v27);
            v69[v36] = (int)(*(float *)(*(_DWORD *)(*(_DWORD *)(v35 + 0xC) + 4 * v55) + j + 8) * v27);
            v31 = v62;
          }
          ++YCoordinate;
        }
        v28 = v55 + 1;
        v55 = v28;
      }
      while ( v28 < 4 );
      LODWORD(v47) = 0xCC3;
      TESForm_PutFormRecordChunkData(0x524C4356, &Src, v47);
    }
    if ( (v58[1].member.type & 4) != 0 )
    {
      sub_4C0290(v58, YCoordinate);
      v52 = 0;
      for ( k = 0x20; k < 0x30; k += 4 )
      {
        v37 = v58[1].member.refID;
        v38 = *(_DWORD *)(v37 + k);
        v39 = k + v37;
        if ( v38 )
        {
          if ( v38 != dword_B35BE4 )
          {
            v63 = v52;
            v64 = 0xFFFF;
            LODWORD(v47) = 8;
            v62 = *(_DWORD *)(*(_DWORD *)v39 + 0xC);
            TESForm_PutFormRecordChunkData(0x54585442, &v62, v47);
          }
        }
        if ( *(_DWORD *)(k + v58[1].member.refID + 0x10) )
        {
          v40 = 0;
          v60 = 0;
          do
          {
            v41 = *(_DWORD *)(*(_DWORD *)(k + v58[1].member.refID + 0x10) + 4 * v40);
            if ( v41 )
            {
              v13 = v41 == dword_B35BE4;
              v66 = v52;
              v67 = v40;
              if ( v13 )
                v42 = 0;
              else
                v42 = *(_DWORD *)(v41 + 0xC);
              LODWORD(v47) = 8;
              v65 = v42;
              TESForm_PutFormRecordChunkData(0x54585441, &v65, v47);
              v43 = v58[1].member.refID;
              v44 = 0;
              for ( m = 0; m < 0x121; ++m )
              {
                if ( *(_DWORD *)(v43 + k + 0x20) )
                {
                  if ( v52 < 4u && (unsigned __int16)m < 0x121u )
                  {
                    v45 = v40;
                    if ( (unsigned __int16)v40 < 8u )
                    {
                      if ( v43 )
                      {
                        if ( *(_DWORD *)(v43 + 4 * v52 + 0x40) )
                        {
                          v40 = v60;
                          v57 = *(float *)(*(_DWORD *)(*(_DWORD *)(v43 + 4 * v52 + 0x40) + 4 * (unsigned __int16)m)
                                         + 4 * v45);
                          if ( v57 > 0.0 )
                          {
                            v70[2 * v44] = v57;
                            *(_WORD *)&v69[8 * v44++ - 2] = m;
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( v44 )
              {
                LODWORD(v47) = 8 * v44;
                TESForm_PutFormRecordChunkData(0x54585456, &Src, v47);
              }
            }
            v60 = ++v40;
          }
          while ( v40 < 8 );
        }
        ++v52;
      }
    }
    TESForm_FinalizeFormRecord(v58);
    sub_46B370();
  }
}
