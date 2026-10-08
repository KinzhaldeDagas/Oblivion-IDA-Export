void __usercall sub_4C8680(signed int a1@<ecx>, double a2@<st0>)
{
  int v5; // ecx
  unsigned int YCoordinate; // edi
  _DWORD *v7; // eax
  int i; // ebx
  int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // esi
  bool v12; // zf
  float *v13; // ecx
  double v14; // st7
  UInt32 refID; // esi
  char v16; // al
  int v17; // ebx
  int v18; // ecx
  __int64 v19; // rax
  char *v20; // esi
  UInt32 v21; // eax
  TESObjectCELL *flags; // ecx
  UInt32 v23; // eax
  int XCoordinate; // eax
  TESObjectCELL *v25; // ecx
  double v26; // st7
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // ecx
  int j; // esi
  unsigned int v32; // eax
  bool v33; // zf
  UInt32 v34; // ecx
  int v35; // edx
  UInt32 v36; // eax
  int v37; // ecx
  UInt32 v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  UInt32 v42; // edx
  int v43; // esi
  unsigned __int16 v44; // di
  size_t v45; // [esp-4h] [ebp-225Ch]
  size_t v46; // [esp-4h] [ebp-225Ch]
  size_t v47; // [esp-4h] [ebp-225Ch]
  unsigned int v48; // [esp+10h] [ebp-2248h]
  char v49; // [esp+10h] [ebp-2248h]
  BOOL v50; // [esp+10h] [ebp-2248h]
  unsigned __int8 v51; // [esp+10h] [ebp-2248h]
  BOOL v52; // [esp+14h] [ebp-2244h]
  int v53; // [esp+14h] [ebp-2244h]
  int v54; // [esp+14h] [ebp-2244h]
  int k; // [esp+14h] [ebp-2244h]
  float v56; // [esp+18h] [ebp-2240h]
  TESForm *v57; // [esp+1Ch] [ebp-223Ch]
  int v58; // [esp+20h] [ebp-2238h]
  int v59; // [esp+20h] [ebp-2238h]
  int m; // [esp+24h] [ebp-2234h]
  int v61; // [esp+28h] [ebp-2230h] BYREF
  unsigned __int8 v62; // [esp+2Ch] [ebp-222Ch]
  __int16 v63; // [esp+2Eh] [ebp-222Ah]
  int v64; // [esp+30h] [ebp-2228h] BYREF
  unsigned __int8 v65; // [esp+34h] [ebp-2224h]
  __int16 v66; // [esp+36h] [ebp-2222h]
  __int16 Src; // [esp+38h] [ebp-2220h] BYREF
  char v68[2]; // [esp+3Ah] [ebp-221Eh]
  float v69[785]; // [esp+3Ch] [ebp-221Ch]
  int v70[32]; // [esp+C80h] [ebp-15D8h]
  int v71[1090]; // [esp+D00h] [ebp-1558h]
  float v72; // [esp+1E08h] [ebp-450h] BYREF
  char v73[1096]; // [esp+1E0Ch] [ebp-44Ch] BYREF
  int savedregs; // [esp+2258h] [ebp+0h] BYREF

  v5 = *(_DWORD *)(a1 + 0x1C); /*0x4c86a2*/
  YCoordinate = a1 + 0x1C; /*0x4c86a9*/
  v57 = (TESForm *)a1; /*0x4c86ac*/
  if ( (v5 & 7) != 0 && ((v5 & 8) != 0 || (v7 = *(_DWORD **)(a1 + 0x24)) != 0 && v7[1] && v7[2] && v7[3]) ) /*0x4c86da*/
  {
    if ( (v5 & 0x10) == 0 ) /*0x4c86e7*/
      sub_4C8210(a1, a2); /*0x4c86eb*/
    TESForm_InitializeFormRecord((TESForm *)a1, (char)&savedregs); /*0x4c86f2*/
    LODWORD(v45) = 4; /*0x4c86f7*/
    TESForm_PutFormRecordChunkData(0x41544144, (void *)(a1 + 0x1C), v45); /*0x4c86ff*/
    if ( (*(_BYTE *)YCoordinate & 1) != 0 ) /*0x4c870a*/
    {
      for ( i = 0; i < 4; ++i ) /*0x4c8710*/
      {
        v9 = 0; /*0x4c8738*/
        v48 = 0; /*0x4c8742*/
        v10 = 0; /*0x4c8746*/
        do /*0x4c885d*/
        {
          v11 = 0x10 * (i / 2 + i % 2 + 0x20 * (i / 2)) + v10 + 0x10 * (v10 / 0x11); /*0x4c8761*/
          v52 = 0; /*0x4c8768*/
          if ( v10 / 0x11 == 0x10 ) /*0x4c8770*/
            v52 = i / 2 != 1; /*0x4c8781*/
          if ( v10 % 0x11 == 0x10 ) /*0x4c8797*/
            v12 = i % 2 == 1; /*0x4c8799*/
          else
            v12 = !v52; /*0x4c87a0*/
          if ( v12 ) /*0x4c87a5*/
          {
            v61 = (int)*(float *)(*(_DWORD *)(*(_DWORD *)(v57[1].member.refID + 4) + 4 * i) + v9 + 8); /*0x4c87c4*/
            v13 = (float *)(v9 + *(_DWORD *)(*(_DWORD *)(v57[1].member.refID + 8) + 4 * i)); /*0x4c87d8*/
            v71[v11] = v61 >> 3; /*0x4c87da*/
            Vector3_NormalizeInPlace(v13); /*0x4c87e1*/
            v53 = 3 * v11; /*0x4c8801*/
            v14 = dbl_A46298; /*0x4c8807*/
            v68[v53 - 2] = Double_To_SInt32(v14); /*0x4c8812*/
            refID = v57[1].member.refID; /*0x4c8816*/
            v68[v53 - 1] = Double_To_SInt32(v14); /*0x4c882e*/
            v16 = Double_To_SInt32(v14 * *(float *)(*(_DWORD *)(*(_DWORD *)(refID + 8) + 4 * i) + v9 + 8)); /*0x4c883c*/
            v10 = v48; /*0x4c8845*/
            v68[v53] = v16; /*0x4c8849*/
          }
          ++v10; /*0x4c884d*/
          v9 += 0xC; /*0x4c8850*/
          v48 = v10; /*0x4c8859*/
        }
        while ( v9 < 0xD8C ); /*0x4c885d*/
      }
      LODWORD(v46) = 0xCC3; /*0x4c886f*/
      TESForm_PutFormRecordChunkData(0x4C4D4E56, &Src, v46); /*0x4c887e*/
      v17 = v71[0]; /*0x4c888a*/
      v72 = (float)v71[0]; /*0x4c8894*/
      v49 = 0; /*0x4c889b*/
      v18 = 0; /*0x4c88a0*/
      do /*0x4c8920*/
      {
        v19 = v71[v18] - v17; /*0x4c88ad*/
        if ( (int)((HIDWORD(v19) ^ v19) - HIDWORD(v19)) < 0x80 ) /*0x4c88b7*/
        {
          v20 = &v73[v18]; /*0x4c88da*/
          v73[v18] = LOBYTE(v71[v18]) - v17; /*0x4c88e3*/
        }
        else
        {
          v49 = 1; /*0x4c88bb*/
          v20 = &v73[v18]; /*0x4c88c0*/
          if ( v71[v18] <= v17 ) /*0x4c88c7*/
            *v20 = 0x81; /*0x4c88ce*/
          else
            *v20 = 0x7F; /*0x4c88c9*/
        }
        v61 = v18 + 1; /*0x4c88e8*/
        YCoordinate = 0x21; /*0x4c88ed*/
        if ( (v18 + 1) % 0x21 ) /*0x4c88f2*/
        {
          if ( v49 ) /*0x4c8906*/
            v17 += *v20; /*0x4c8914*/
          else
            v17 = v71[v18]; /*0x4c8908*/
        }
        else
        {
          v17 = v70[v18]; /*0x4c88f8*/
        }
        v18 = v61; /*0x4c8916*/
      }
      while ( v61 < 0x441 ); /*0x4c8920*/
      LODWORD(v47) = 0x448; /*0x4c8922*/
      TESForm_PutFormRecordChunkData(0x54474856, &v72, v47); /*0x4c8934*/
      if ( v49 ) /*0x4c8941*/
      {
        v21 = v57[1].member.refID; /*0x4c8947*/
        if ( v21 ) /*0x4c894c*/
        {
          YCoordinate = *(_DWORD *)(v21 + 0x9C); /*0x4c894e*/
        }
        else
        {
          flags = (TESObjectCELL *)v57[1].member.flags; /*0x4c8956*/
          if ( flags ) /*0x4c895b*/
            YCoordinate = TESObjectCELL_GetYCoordinate(flags); /*0x4c8962*/
          else
            YCoordinate = 0; /*0x4c8966*/
        }
        v23 = v57[1].member.refID; /*0x4c8968*/
        if ( v23 ) /*0x4c896d*/
        {
          XCoordinate = *(_DWORD *)(v23 + 0x98); /*0x4c896f*/
        }
        else
        {
          v25 = (TESObjectCELL *)v57[1].member.flags; /*0x4c8977*/
          if ( v25 ) /*0x4c897c*/
            XCoordinate = TESObjectCELL_GetXCoordinate(v25); /*0x4c897e*/
          else
            XCoordinate = 0; /*0x4c8985*/
        }
        PrintError( /*0x4c898e*/
          "Error saving land height Data for cell (%i, %i). Error correction attempted.\r\n",
          XCoordinate,
          YCoordinate);
      }
    }
    if ( (v57[1].member.type & 2) != 0 ) /*0x4c89a0*/
    {
      v26 = dbl_A3DDD8; /*0x4c89a6*/
      v27 = 0; /*0x4c89ac*/
      v54 = 0; /*0x4c89ae*/
      do /*0x4c8b00*/
      {
        v28 = v27 / 2; /*0x4c89b7*/
        v58 = v27 / 2; /*0x4c89bf*/
        v29 = v27 % 2; /*0x4c89c9*/
        v30 = 0x10 * (v28 + v29 + 0x20 * v28); /*0x4c89d3*/
        YCoordinate = 0; /*0x4c89d6*/
        v61 = v30; /*0x4c89dc*/
        for ( j = 0; j < 0x1210; j += 0x10 ) /*0x4c89e0*/
        {
          v32 = v30 + YCoordinate + 0x10 * (YCoordinate / 0x11); /*0x4c89f3*/
          v50 = 0; /*0x4c89f8*/
          if ( YCoordinate / 0x11 == 0x10 ) /*0x4c8a00*/
            v50 = v58 != 1; /*0x4c8a11*/
          if ( YCoordinate % 0x11 == 0x10 ) /*0x4c8a27*/
            v33 = v29 == 1; /*0x4c8a29*/
          else
            v33 = !v50; /*0x4c8a30*/
          if ( v33 ) /*0x4c8a39*/
          {
            v34 = v57[1].member.refID; /*0x4c8a47*/
            v35 = 3 * v32; /*0x4c8a4a*/
            v68[v35 - 2] = (int)(*(float *)(*(_DWORD *)(*(_DWORD *)(v34 + 0xC) + 4 * v54) + j) * v26); /*0x4c8a73*/
            v68[v35 - 1] = (int)(*(float *)(*(_DWORD *)(*(_DWORD *)(v34 + 0xC) + 4 * v54) + j + 4) * v26); /*0x4c8aa6*/
            v68[v35] = (int)(*(float *)(*(_DWORD *)(*(_DWORD *)(v34 + 0xC) + 4 * v54) + j + 8) * v26); /*0x4c8ad8*/
            v30 = v61; /*0x4c8adc*/
          }
          ++YCoordinate; /*0x4c8ae7*/
        }
        v27 = v54 + 1; /*0x4c8af6*/
        v54 = v27; /*0x4c8afc*/
      }
      while ( v27 < 4 ); /*0x4c8b00*/
      LODWORD(v46) = 0xCC3; /*0x4c8b06*/
      TESForm_PutFormRecordChunkData(0x524C4356, &Src, v46); /*0x4c8b17*/
    }
    if ( (v57[1].member.type & 4) != 0 ) /*0x4c8b29*/
    {
      sub_4C0290(v57, YCoordinate); /*0x4c8b33*/
      v51 = 0; /*0x4c8b38*/
      for ( k = 0x20; k < 0x30; k += 4 ) /*0x4c8b40*/
      {
        v36 = v57[1].member.refID; /*0x4c8b54*/
        v37 = *(_DWORD *)(v36 + k); /*0x4c8b5b*/
        v38 = k + v36; /*0x4c8b5e*/
        if ( v37 ) /*0x4c8b62*/
        {
          if ( v37 != unk_B35BE4 ) /*0x4c8b6a*/
          {
            v62 = v51; /*0x4c8b70*/
            v63 = 0xFFFF; /*0x4c8b74*/
            LODWORD(v46) = 8; /*0x4c8b80*/
            v61 = *(_DWORD *)(*(_DWORD *)v38 + 0xC); /*0x4c8b8c*/
            TESForm_PutFormRecordChunkData(0x54585442, &v61, v46); /*0x4c8b90*/
          }
        }
        if ( *(_DWORD *)(k + v57[1].member.refID + 0x10) ) /*0x4c8b9b*/
        {
          v39 = 0; /*0x4c8ba6*/
          v59 = 0; /*0x4c8ba8*/
          do /*0x4c8cb9*/
          {
            v40 = *(_DWORD *)(*(_DWORD *)(k + v57[1].member.refID + 0x10) + 4 * v39); /*0x4c8bbf*/
            if ( v40 ) /*0x4c8bc4*/
            {
              v12 = v40 == unk_B35BE4; /*0x4c8bca*/
              v65 = v51; /*0x4c8bd4*/
              v66 = v39; /*0x4c8bdb*/
              if ( v12 ) /*0x4c8be0*/
                v41 = 0; /*0x4c8be7*/
              else
                v41 = *(_DWORD *)(v40 + 0xC); /*0x4c8be2*/
              LODWORD(v46) = 8; /*0x4c8be9*/
              v64 = v41; /*0x4c8bf5*/
              TESForm_PutFormRecordChunkData(0x54585441, &v64, v46); /*0x4c8bf9*/
              v42 = v57[1].member.refID; /*0x4c8c04*/
              v43 = 0; /*0x4c8c0a*/
              for ( m = 0; m < 0x121; ++m ) /*0x4c8c0c*/
              {
                if ( *(_DWORD *)(v42 + k + 0x20) ) /*0x4c8c14*/
                {
                  if ( v51 < 4u && (unsigned __int16)m < 0x121u ) /*0x4c8c2d*/
                  {
                    v44 = v39; /*0x4c8c2f*/
                    if ( (unsigned __int16)v39 < 8u ) /*0x4c8c36*/
                    {
                      if ( v42 ) /*0x4c8c3a*/
                      {
                        if ( *(_DWORD *)(v42 + 4 * v51 + 0x40) ) /*0x4c8c3f*/
                        {
                          v39 = v59; /*0x4c8c52*/
                          v56 = *(float *)(*(_DWORD *)(*(_DWORD *)(v42 + 4 * v51 + 0x40) + 4 * (unsigned __int16)m) /*0x4c8c5c*/
                                         + 4 * v44);
                          if ( v56 > 0.0 ) /*0x4c8c6b*/
                          {
                            v69[2 * v43] = v56; /*0x4c8c6d*/
                            *(_WORD *)&v68[8 * v43++ - 2] = m; /*0x4c8c71*/
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( v43 ) /*0x4c8c93*/
              {
                LODWORD(v46) = 8 * v43; /*0x4c8c9c*/
                TESForm_PutFormRecordChunkData(0x54585456, &Src, v46); /*0x4c8ca7*/
              }
            }
            v59 = ++v39; /*0x4c8cb5*/
          }
          while ( v39 < 8 ); /*0x4c8cb9*/
        }
        ++v51; /*0x4c8cc3*/
      }
    }
    TESForm_FinalizeFormRecord(v57); /*0x4c8cdc*/
    TESForm_CompressSaveBuffer(); /*0x4c8ce1*/
  }
}
