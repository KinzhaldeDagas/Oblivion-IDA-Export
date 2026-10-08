void __thiscall sub_59D030(float *this)
{
  unsigned __int8 (__thiscall *cnt)(FILE **); // edx
  int FileSizeDirect; // eax
  int v4; // eax
  int v5; // ecx
  NiNode *v6; // eax
  NiObjectNET *v7; // eax
  int v8; // edx
  float *v9; // eax
  NiObjectNET *v10; // eax
  BSShaderProperty *v11; // edi
  NiNode *v12; // ecx
  int v13; // edi
  int v14; // ebx
  bool v15; // cf
  _BYTE *v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // edi
  int v19; // ecx
  char v20; // dl
  int v21; // edi
  unsigned int v22; // eax
  char v23; // dl
  char v24; // dl
  BoltShaderProperty *v25; // ebx
  int v26; // edi
  int v27; // eax
  NiNode *v28; // eax
  char v29; // al
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  NiAVObject *v40; // ecx
  int v41; // [esp+14h] [ebp-1B8h]
  double v42; // [esp+14h] [ebp-1B8h]
  int v43; // [esp+18h] [ebp-1B4h]
  const char *v44; // [esp+18h] [ebp-1B4h]
  double _1C; // [esp+1Ch] [ebp-1B0h]
  const char *v46; // [esp+1Ch] [ebp-1B0h]
  const char *a2; // [esp+20h] [ebp-1ACh]
  float v48; // [esp+38h] [ebp-194h]
  float v49; // [esp+38h] [ebp-194h]
  int v50; // [esp+3Ch] [ebp-190h] BYREF
  BSStringT Src; // [esp+40h] [ebp-18Ch] BYREF
  float v52; // [esp+48h] [ebp-184h]
  float v53; // [esp+4Ch] [ebp-180h]
  float v54; // [esp+50h] [ebp-17Ch]
  float v55; // [esp+54h] [ebp-178h]
  int v56; // [esp+58h] [ebp-174h] BYREF
  FILE *v57[87]; // [esp+5Ch] [ebp-170h] BYREF
  unsigned int v58; // [esp+1C8h] [ebp-4h]

  BSFile_constr(v57, "Data\\Credits.txt", 0, 0x2800, 0); /*0x59d084*/
  cnt = (unsigned __int8 (__thiscall *)(FILE **))v57[0]->_cnt; /*0x59d08d*/
  v58 = 0; /*0x59d094*/
  if ( cnt(v57) )
  {
    FileSizeDirect = BSFile_GetFileSizeDirect(v57); /*0x59d0a9*/
    *((_DWORD *)this + 0xD) = FileSizeDirect + 1; /*0x59d0b2*/
    v4 = FormHeapAlloc(FileSizeDirect + 1); /*0x59d0b5*/
    v5 = *((_DWORD *)this + 0xD); /*0x59d0ba*/
    *((_DWORD *)this + 0xE) = v4; /*0x59d0bd*/
    *(_BYTE *)(v5 + v4 - 1) = 0; /*0x59d0c0*/
    v43 = *((_DWORD *)this + 0xD) - 1; /*0x59d0d8*/
    v41 = *((_DWORD *)this + 0xE); /*0x59d0d9*/
    v50 = 1; /*0x59d0df*/
    if ( ((int (__cdecl *)(FILE **, int, int, int *, int))v57[1])(v57, v41, v43, &v50, 1) == *((_DWORD *)this + 0xD) - 1 )
    {
      v6 = (NiNode *)FormHeapAlloc(0xDCu); /*0x59d109*/
      LOBYTE(v58) = 1; /*0x59d117*/
      if ( v6 ) /*0x59d11f*/
        v7 = (NiObjectNET *)NiNode::NiNode(v6, 0); /*0x59d124*/
      else
        v7 = 0; /*0x59d12b*/
      LOBYTE(v58) = 0; /*0x59d134*/
      *((_DWORD *)this + 0xB) = v7; /*0x59d13c*/
      NiObjectNET_SetName(v7, "Credits Scroll Root"); /*0x59d13f*/
      v8 = nHeight; /*0x59d146*/
      v52 = 0.0; /*0x59d14c*/
      v9 = *((float **)this + 0xB); /*0x59d150*/
      v53 = 0.0; /*0x59d153*/
      v50 = -v8; /*0x59d15d*/
      v9[0x15] = 0.0; /*0x59d169*/
      v9[0x16] = 0.0; /*0x59d16c*/
      v54 = (float)-v8; /*0x59d16f*/
      v9[0x17] = v54; /*0x59d177*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 0xA) + 0x24) + 0x84))( /*0x59d18d*/
        *(_DWORD *)(*((_DWORD *)this + 0xA) + 0x24),
        *((_DWORD *)this + 0xB),
        1);
      v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x59d191*/
      v11 = (BSShaderProperty *)v10; /*0x59d196*/
      LOBYTE(v58) = 2; /*0x59d1a1*/
      if ( v10 ) /*0x59d1a9*/
      {
        NiObjectNET::NiObjectNET(v10); /*0x59d1ad*/
        v11->vtbl = &NiAlphaProperty::`vftable'; /*0x59d1b2*/
        v11->member.super.flags = 0xEC; /*0x59d1b8*/
        v11->member.super.pad01A[0] = 0; /*0x59d1be*/
      }
      else
      {
        v11 = 0; /*0x59d1c4*/
      }
      v11->member.super.flags |= 1u; /*0x59d1c6*/
      v12 = *((NiNode **)this + 0xB); /*0x59d1ca*/
      LOBYTE(v58) = 0; /*0x59d1ce*/
      sub_405680(v12, v11); /*0x59d1d6*/
      v13 = *((_DWORD *)this + 0xF); /*0x59d1db*/
      v14 = FontManager_GetSingleton()[v13]; /*0x59d1e3*/
      v50 = v14; /*0x59d1e8*/
      Src.m_data = 0; /*0x59d1ec*/
      *(_DWORD *)&Src.m_dataLen = 0; /*0x59d1f0*/
      v15 = *((_DWORD *)this + 0xC) < *((_DWORD *)this + 0xD); /*0x59d1fd*/
      LOBYTE(v58) = 3; /*0x59d200*/
      if ( v15 )
      {
        do
        {
          v16 = (_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)); /*0x59d21a*/
          if ( *v16 == 0xD ) /*0x59d21d*/
          {
            v55 = *(float *)(v14 + 0x2C); /*0x59d222*/
            *((_DWORD *)this + 0x12) = Double_To_SInt32((double)*((int *)this + 0x12) - v55); /*0x59d232*/
          }
          if ( *v16 != 0xA )
          {
            do
            {
              v17 = *((_DWORD *)this + 0xC); /*0x59d240*/
              v18 = *((_DWORD *)this + 0xD); /*0x59d243*/
              if ( v17 >= v18 ) /*0x59d248*/
                break; /*0x59d248*/
              v19 = *((_DWORD *)this + 0xE); /*0x59d24e*/
              v20 = *(_BYTE *)(v17 + v19); /*0x59d251*/
              if ( v20 == 0x2A )
              {
                do /*0x59d576*/
                {
                  v35 = *((_DWORD *)this + 0xC); /*0x59d560*/
                  if ( v35 >= v18 ) /*0x59d565*/
                    break; /*0x59d565*/
                  v36 = v35 + 1; /*0x59d567*/
                  *((_DWORD *)this + 0xC) = v36; /*0x59d56a*/
                }
                while ( *(_BYTE *)(v36 + *((_DWORD *)this + 0xE)) != 0xA ); /*0x59d576*/
              }
              else if ( v20 == 0x3C )
              {
                v22 = v17 + 1; /*0x59d327*/
                *((_DWORD *)this + 0xC) = v22; /*0x59d32a*/
                switch ( *(_BYTE *)(v22 + v19) )
                {
                  case 'C':
                    v31 = j__atol((const char *)(v22 + v19 + 2)); /*0x59d4b5*/
                    a2 = (const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 6); /*0x59d4d2*/
                    *(this + 0x13) = (double)v31 / dbl_A3DDD8; /*0x59d4d3*/
                    v32 = j__atol(a2); /*0x59d4d6*/
                    v46 = (const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 0xA); /*0x59d4f3*/
                    *(this + 0x14) = (double)v32 / dbl_A3DDD8; /*0x59d4f4*/
                    v33 = j__atol(v46); /*0x59d4f7*/
                    v44 = (const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 0xE); /*0x59d514*/
                    *(this + 0x15) = (double)v33 / dbl_A3DDD8; /*0x59d515*/
                    *(this + 0x16) = (double)j__atol(v44) / dbl_A3DDD8; /*0x59d52e*/
                    break; /*0x59d52e*/
                  case 'F':
                    v30 = *(char *)(v22 + v19 + 2) - 0x31; /*0x59d497*/
                    *((_DWORD *)this + 0xF) = v30; /*0x59d49a*/
                    v50 = FontManager_GetSingleton()[v30]; /*0x59d4a5*/
                    v14 = v50; /*0x59d4a9*/
                    break; /*0x59d4ab*/
                  case 'I':
                    v25 = (BoltShaderProperty *)j__atol((const char *)(v22 + v19 + 2)); /*0x59d3f2*/
                    v26 = j__atol((const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 7)); /*0x59d404*/
                    v27 = j__atol((const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 0xC)); /*0x59d40e*/
                    *((_DWORD *)this + 0xC) += 0x10; /*0x59d41b*/
                    v49 = (double)v27 / dbl_A3DDD8; /*0x59d42f*/
                    sub_59CB70((unsigned int *)this, &Src); /*0x59d433*/
                    v28 = sub_59CC00((char *)this, &Src.m_data, v25, v26, v49); /*0x59d449*/
                    (*(void (__thiscall **)(_DWORD, NiNode *, int))(**((_DWORD **)this + 0xB) + 0x84))( /*0x59d45c*/
                      *((_DWORD *)this + 0xB),
                      v28,
                      1);
                    *((_DWORD *)this + 0x12) -= v26; /*0x59d45e*/
                    v14 = v50; /*0x59d461*/
                    break; /*0x59d465*/
                  case 'J':
                    v29 = *(_BYTE *)(v22 + v19 + 2); /*0x59d46a*/
                    if ( v29 == 0x43 )
                      *((_DWORD *)this + 0x10) = 2; /*0x59d472*/
                    else
                      *((_DWORD *)this + 0x10) = v29 != 0x52 ? 1 : 4;
                    break; /*0x59d479*/
                  case 'X':
                    v23 = *(_BYTE *)(v22 + v19 + 2); /*0x59d34b*/
                    if ( v23 == 0x2B ) /*0x59d356*/
                    {
                      *((_DWORD *)this + 0x11) += j__atol((const char *)(v22 + v19 + 3)); /*0x59d365*/
                    }
                    else if ( v23 == 0x2D ) /*0x59d370*/
                    {
                      *((_DWORD *)this + 0x11) -= j__atol((const char *)(v22 + v19 + 3)); /*0x59d37f*/
                    }
                    else
                    {
                      *((_DWORD *)this + 0x11) = j__atol((const char *)(v22 + v19 + 2)); /*0x59d390*/
                    }
                    break; /*0x59d368*/
                  case 'Y':
                    v24 = *(_BYTE *)(v22 + v19 + 2); /*0x59d398*/
                    if ( v24 == 0x2B ) /*0x59d3a3*/
                    {
                      *((_DWORD *)this + 0x12) -= j__atol((const char *)(v22 + v19 + 3)); /*0x59d3b2*/
                    }
                    else if ( v24 == 0x2D ) /*0x59d3bd*/
                    {
                      *((_DWORD *)this + 0x12) += j__atol((const char *)(v22 + v19 + 3)); /*0x59d3cc*/
                    }
                    else
                    {
                      *((_DWORD *)this + 0x12) = j__atol((const char *)(v22 + v19 + 2)); /*0x59d3dd*/
                    }
                    break; /*0x59d3b5*/
                  default:
                    break;
                }
                if ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) == 0x3E ) /*0x59d53b*/
                {
LABEL_41:
                  ++*((_DWORD *)this + 0xC); /*0x59d555*/
                }
                else
                {
                  v34 = *((_DWORD *)this + 0xD); /*0x59d53d*/
                  while ( ++*((_DWORD *)this + 0xC) < v34 ) /*0x59d540*/
                  {
                    if ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) == 0x3E ) /*0x59d553*/
                      goto LABEL_41; /*0x59d553*/
                  }
                }
              }
              else if ( v20 >= 0x20 ) /*0x59d269*/
              {
                sub_59CB70((unsigned int *)this, &Src); /*0x59d27d*/
                HIDWORD(_1C) = this + 0x13; /*0x59d28c*/
                *(float *)&_1C = *(this + 0x10); /*0x59d28d*/
                HIDWORD(v42) = &v56; /*0x59d292*/
                LODWORD(v42) = &Src; /*0x59d297*/
                v56 = 0x500; /*0x59d2a5*/
                v21 = sub_575870((float **)v14, 0.0, 0.0, 0.0, v42, _1C, 1); /*0x59d2b8*/
                v55 = (float)*((int *)this + 0x11); /*0x59d2ba*/
                v48 = (float)*((int *)this + 0x12); /*0x59d2c1*/
                v52 = v55; /*0x59d2c9*/
                *(float *)(v21 + 0x54) = v55; /*0x59d2d3*/
                v53 = 0.0; /*0x59d2d6*/
                *(float *)(v21 + 0x58) = 0.0; /*0x59d2e2*/
                v54 = v48; /*0x59d2e5*/
                *(float *)(v21 + 0x5C) = v48; /*0x59d2ed*/
                NiObjectNET_SetName((NiObjectNET *)v21, Src.m_data); /*0x59d2f7*/
                (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 0xB) + 0x84))( /*0x59d30a*/
                  *((_DWORD *)this + 0xB),
                  v21,
                  1);
                *((_DWORD *)this + 0x12) = Double_To_SInt32((double)*((int *)this + 0x12) - *(float *)(v14 + 0x2C)); /*0x59d31f*/
              }
              else
              {
                *((_DWORD *)this + 0xC) = v17 + 1; /*0x59d26e*/
              }
            }
            while ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) != 0xA );
          }
          if ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) != 0xA ) /*0x59d592*/
          {
            v37 = *((_DWORD *)this + 0xD); /*0x59d594*/
            do /*0x59d5ad*/
            {
              v38 = *((_DWORD *)this + 0xC); /*0x59d597*/
              if ( v38 >= v37 ) /*0x59d59c*/
                break; /*0x59d59c*/
              v39 = v38 + 1; /*0x59d59e*/
              *((_DWORD *)this + 0xC) = v39; /*0x59d5a1*/
            }
            while ( *(_BYTE *)(v39 + *((_DWORD *)this + 0xE)) != 0xA ); /*0x59d5ad*/
          }
          ++*((_DWORD *)this + 0xC); /*0x59d5af*/
        }
        while ( *((_DWORD *)this + 0xC) < *((_DWORD *)this + 0xD) );
      }
      FormHeapFree(*((_DWORD *)this + 0xE)); /*0x59d5c5*/
      v40 = *((NiAVObject **)this + 0xB); /*0x59d5ca*/
      *(this + 0xE) = 0.0; /*0x59d5d0*/
      NiAVObject_InitializePropertyState(v40); /*0x59d5d3*/
      NiNode_UpdateDynamicEffectState(*((NiNode **)this + 0xB)); /*0x59d5db*/
      NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0xB), 0.0, 1); /*0x59d5eb*/
      FormHeapFree((unsigned int)Src.m_data); /*0x59d5f5*/
      Src.m_data = 0; /*0x59d5fa*/
      *(_DWORD *)&Src.m_dataLen = 0; /*0x59d603*/
    }
    else
    {
      FormHeapFree(*((_DWORD *)this + 0xE)); /*0x59d0f7*/
      *(this + 0xE) = 0.0; /*0x59d0fc*/
    }
  }
  v58 = 0xFFFFFFFF; /*0x59d60f*/
  BSFile::~BSFile((BSFile *)v57); /*0x59d61a*/
}
