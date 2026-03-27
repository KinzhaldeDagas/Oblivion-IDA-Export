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

  BSFile_constr(v57, "Data\\Credits.txt", 0, 0x2800, 0);
  cnt = (unsigned __int8 (__thiscall *)(FILE **))v57[0]->_cnt;
  v58 = 0;
  if ( cnt(v57) )
  {
    FileSizeDirect = BSFile_GetFileSizeDirect(v57);
    *((_DWORD *)this + 0xD) = FileSizeDirect + 1;
    v4 = FormHeapAlloc(FileSizeDirect + 1);
    v5 = *((_DWORD *)this + 0xD);
    *((_DWORD *)this + 0xE) = v4;
    *(_BYTE *)(v5 + v4 - 1) = 0;
    v43 = *((_DWORD *)this + 0xD) - 1;
    v41 = *((_DWORD *)this + 0xE);
    v50 = 1;
    if ( ((int (__cdecl *)(FILE **, int, int, int *, int))v57[1])(v57, v41, v43, &v50, 1) == *((_DWORD *)this + 0xD) - 1 )
    {
      v6 = (NiNode *)FormHeapAlloc(0xDCu);
      LOBYTE(v58) = 1;
      if ( v6 )
        v7 = (NiObjectNET *)NiNode::NiNode(v6, 0);
      else
        v7 = 0;
      LOBYTE(v58) = 0;
      *((_DWORD *)this + 0xB) = v7;
      NiObjectNET_SetName(v7, "Credits Scroll Root");
      v8 = nHeight;
      v52 = 0.0;
      v9 = *((float **)this + 0xB);
      v53 = 0.0;
      v50 = -v8;
      v9[0x15] = 0.0;
      v9[0x16] = 0.0;
      v54 = (float)-v8;
      v9[0x17] = v54;
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 0xA) + 0x24) + 0x84))(
        *(_DWORD *)(*((_DWORD *)this + 0xA) + 0x24),
        *((_DWORD *)this + 0xB),
        1);
      v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
      v11 = (BSShaderProperty *)v10;
      LOBYTE(v58) = 2;
      if ( v10 )
      {
        NiObjectNET::NiObjectNET(v10);
        v11->vtbl = &NiAlphaProperty::`vftable';
        v11->member.super.flags = 0xEC;
        v11->member.super.pad01A[0] = 0;
      }
      else
      {
        v11 = 0;
      }
      v11->member.super.flags |= 1u;
      v12 = *((NiNode **)this + 0xB);
      LOBYTE(v58) = 0;
      sub_405680(v12, v11);
      v13 = *((_DWORD *)this + 0xF);
      v14 = FontManager_GetSingleton()[v13];
      v50 = v14;
      Src.m_data = 0;
      *(_DWORD *)&Src.m_dataLen = 0;
      v15 = *((_DWORD *)this + 0xC) < *((_DWORD *)this + 0xD);
      LOBYTE(v58) = 3;
      if ( v15 )
      {
        do
        {
          v16 = (_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE));
          if ( *v16 == 0xD )
          {
            v55 = *(float *)(v14 + 0x2C);
            *((_DWORD *)this + 0x12) = Double_To_SInt32((double)*((int *)this + 0x12) - v55);
          }
          if ( *v16 != 0xA )
          {
            do
            {
              v17 = *((_DWORD *)this + 0xC);
              v18 = *((_DWORD *)this + 0xD);
              if ( v17 >= v18 )
                break;
              v19 = *((_DWORD *)this + 0xE);
              v20 = *(_BYTE *)(v17 + v19);
              if ( v20 == 0x2A )
              {
                do
                {
                  v35 = *((_DWORD *)this + 0xC);
                  if ( v35 >= v18 )
                    break;
                  v36 = v35 + 1;
                  *((_DWORD *)this + 0xC) = v36;
                }
                while ( *(_BYTE *)(v36 + *((_DWORD *)this + 0xE)) != 0xA );
              }
              else if ( v20 == 0x3C )
              {
                v22 = v17 + 1;
                *((_DWORD *)this + 0xC) = v22;
                switch ( *(_BYTE *)(v22 + v19) )
                {
                  case 'C':
                    v31 = j__atol((const char *)(v22 + v19 + 2));
                    a2 = (const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 6);
                    *(this + 0x13) = (double)v31 / dbl_A3DDD8;
                    v32 = j__atol(a2);
                    v46 = (const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 0xA);
                    *(this + 0x14) = (double)v32 / dbl_A3DDD8;
                    v33 = j__atol(v46);
                    v44 = (const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 0xE);
                    *(this + 0x15) = (double)v33 / dbl_A3DDD8;
                    *(this + 0x16) = (double)j__atol(v44) / dbl_A3DDD8;
                    break;
                  case 'F':
                    v30 = *(char *)(v22 + v19 + 2) - 0x31;
                    *((_DWORD *)this + 0xF) = v30;
                    v50 = FontManager_GetSingleton()[v30];
                    v14 = v50;
                    break;
                  case 'I':
                    v25 = (BoltShaderProperty *)j__atol((const char *)(v22 + v19 + 2));
                    v26 = j__atol((const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 7));
                    v27 = j__atol((const char *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE) + 0xC));
                    *((_DWORD *)this + 0xC) += 0x10;
                    v49 = (double)v27 / dbl_A3DDD8;
                    sub_59CB70((unsigned int *)this, &Src);
                    v28 = sub_59CC00((char *)this, &Src.m_data, v25, v26, v49);
                    (*(void (__thiscall **)(_DWORD, NiNode *, int))(**((_DWORD **)this + 0xB) + 0x84))(
                      *((_DWORD *)this + 0xB),
                      v28,
                      1);
                    *((_DWORD *)this + 0x12) -= v26;
                    v14 = v50;
                    break;
                  case 'J':
                    v29 = *(_BYTE *)(v22 + v19 + 2);
                    if ( v29 == 0x43 )
                      *((_DWORD *)this + 0x10) = 2;
                    else
                      *((_DWORD *)this + 0x10) = v29 != 0x52 ? 1 : 4;
                    break;
                  case 'X':
                    v23 = *(_BYTE *)(v22 + v19 + 2);
                    if ( v23 == 0x2B )
                    {
                      *((_DWORD *)this + 0x11) += j__atol((const char *)(v22 + v19 + 3));
                    }
                    else if ( v23 == 0x2D )
                    {
                      *((_DWORD *)this + 0x11) -= j__atol((const char *)(v22 + v19 + 3));
                    }
                    else
                    {
                      *((_DWORD *)this + 0x11) = j__atol((const char *)(v22 + v19 + 2));
                    }
                    break;
                  case 'Y':
                    v24 = *(_BYTE *)(v22 + v19 + 2);
                    if ( v24 == 0x2B )
                    {
                      *((_DWORD *)this + 0x12) -= j__atol((const char *)(v22 + v19 + 3));
                    }
                    else if ( v24 == 0x2D )
                    {
                      *((_DWORD *)this + 0x12) += j__atol((const char *)(v22 + v19 + 3));
                    }
                    else
                    {
                      *((_DWORD *)this + 0x12) = j__atol((const char *)(v22 + v19 + 2));
                    }
                    break;
                  default:
                    break;
                }
                if ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) == 0x3E )
                {
LABEL_41:
                  ++*((_DWORD *)this + 0xC);
                }
                else
                {
                  v34 = *((_DWORD *)this + 0xD);
                  while ( ++*((_DWORD *)this + 0xC) < v34 )
                  {
                    if ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) == 0x3E )
                      goto LABEL_41;
                  }
                }
              }
              else if ( v20 >= 0x20 )
              {
                sub_59CB70((unsigned int *)this, &Src);
                HIDWORD(_1C) = this + 0x13;
                *(float *)&_1C = *(this + 0x10);
                HIDWORD(v42) = &v56;
                LODWORD(v42) = &Src;
                v56 = 0x500;
                v21 = sub_575870((float **)v14, 0.0, COERCE_INT(0.0), 0.0, v42, _1C, 1);
                v55 = (float)*((int *)this + 0x11);
                v48 = (float)*((int *)this + 0x12);
                v52 = v55;
                *(float *)(v21 + 0x54) = v55;
                v53 = 0.0;
                *(float *)(v21 + 0x58) = 0.0;
                v54 = v48;
                *(float *)(v21 + 0x5C) = v48;
                NiObjectNET_SetName((NiObjectNET *)v21, Src.m_data);
                (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 0xB) + 0x84))(
                  *((_DWORD *)this + 0xB),
                  v21,
                  1);
                *((_DWORD *)this + 0x12) = Double_To_SInt32((double)*((int *)this + 0x12) - *(float *)(v14 + 0x2C));
              }
              else
              {
                *((_DWORD *)this + 0xC) = v17 + 1;
              }
            }
            while ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) != 0xA );
          }
          if ( *(_BYTE *)(*((_DWORD *)this + 0xC) + *((_DWORD *)this + 0xE)) != 0xA )
          {
            v37 = *((_DWORD *)this + 0xD);
            do
            {
              v38 = *((_DWORD *)this + 0xC);
              if ( v38 >= v37 )
                break;
              v39 = v38 + 1;
              *((_DWORD *)this + 0xC) = v39;
            }
            while ( *(_BYTE *)(v39 + *((_DWORD *)this + 0xE)) != 0xA );
          }
          ++*((_DWORD *)this + 0xC);
        }
        while ( *((_DWORD *)this + 0xC) < *((_DWORD *)this + 0xD) );
      }
      FormHeapFree(*((_DWORD *)this + 0xE));
      v40 = *((NiAVObject **)this + 0xB);
      *(this + 0xE) = 0.0;
      NiAVObject_InitializePropertyState(v40);
      NiNode_UpdateDynamicEffectState(*((NiNode **)this + 0xB));
      NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0xB), 0.0, 1);
      FormHeapFree((unsigned int)Src.m_data);
      Src.m_data = 0;
      *(_DWORD *)&Src.m_dataLen = 0;
    }
    else
    {
      FormHeapFree(*((_DWORD *)this + 0xE));
      *(this + 0xE) = 0.0;
    }
  }
  v58 = 0xFFFFFFFF;
  BSFile::~BSFile((BSFile *)v57);
}
