int *__thiscall sub_577C10(_DWORD *this, BSStringT *arg0, _DWORD *a3)
{
  unsigned __int16 m_dataLen; // ax
  unsigned int v4; // esi
  unsigned int v5; // esi
  FreeEntry *v6; // edi
  const char *m_data; // ecx
  FreeEntry *v8; // edx
  char v9; // al
  _DWORD *v10; // esi
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  char *v15; // eax
  char *v16; // edi
  float *v17; // eax
  unsigned int i; // esi
  unsigned int v19; // eax
  float *v20; // eax
  char *v21; // eax
  unsigned int j; // edi
  unsigned int v23; // eax
  char *v24; // esi
  char *v25; // eax
  unsigned int k; // edi
  unsigned int v27; // eax
  char *v28; // esi
  char *v29; // esi
  char *v30; // edi
  int v31; // esi
  char *v32; // eax
  char v33; // dl
  char *v34; // eax
  unsigned int m; // edi
  unsigned int v36; // eax
  char *v37; // esi
  float *v38; // eax
  char *v39; // esi
  int v40; // esi
  int v41; // edi
  char *v42; // esi
  unsigned int v43; // eax
  int v44; // eax
  char *v45; // edi
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // eax
  int v52; // esi
  int v53; // eax
  double v54; // rt0
  char *v55; // esi
  int *v56; // edi
  _DWORD *v57; // eax
  int v58; // ecx
  int v60; // edi
  _DWORD *n; // eax
  _DWORD *v62; // ecx
  int v63; // ecx
  signed int v65; // [esp-8h] [ebp-10Ch]
  signed int v66; // [esp-8h] [ebp-10Ch]
  signed int v67; // [esp-8h] [ebp-10Ch]
  char v68; // [esp-4h] [ebp-108h]
  char v69; // [esp-4h] [ebp-108h]
  char v70; // [esp-4h] [ebp-108h]
  int v71; // [esp+0h] [ebp-104h]
  char v72; // [esp+13h] [ebp-F1h]
  signed int v73; // [esp+14h] [ebp-F0h] BYREF
  signed int v74; // [esp+18h] [ebp-ECh]
  int v75; // [esp+1Ch] [ebp-E8h] BYREF
  int v76; // [esp+20h] [ebp-E4h] BYREF
  BSStringT Src; // [esp+24h] [ebp-E0h] BYREF
  _DWORD *v78; // [esp+2Ch] [ebp-D8h]
  FreeEntry *v79; // [esp+30h] [ebp-D4h]
  int v80; // [esp+34h] [ebp-D0h]
  int *v81; // [esp+38h] [ebp-CCh]
  BSStringT v82; // [esp+3Ch] [ebp-C8h] BYREF
  BSStringT Str1; // [esp+44h] [ebp-C0h] BYREF
  int *v84; // [esp+4Ch] [ebp-B8h]
  BSStringT v85; // [esp+50h] [ebp-B4h] BYREF
  BSStringT v86; // [esp+58h] [ebp-ACh] BYREF
  float v87; // [esp+60h] [ebp-A4h]
  float v88; // [esp+64h] [ebp-A0h]
  int v89; // [esp+68h] [ebp-9Ch]
  BSStringT a2; // [esp+6Ch] [ebp-98h] BYREF
  int v91; // [esp+74h] [ebp-90h]
  int v92; // [esp+78h] [ebp-8Ch]
  BSStringT v93; // [esp+7Ch] [ebp-88h] BYREF
  BSStringT v94; // [esp+84h] [ebp-80h] BYREF
  BSStringT v95; // [esp+8Ch] [ebp-78h] BYREF
  BSStringT v96; // [esp+94h] [ebp-70h] BYREF
  BSStringT v97; // [esp+9Ch] [ebp-68h] BYREF
  BSStringT v98; // [esp+A4h] [ebp-60h] BYREF
  float v99; // [esp+ACh] [ebp-58h]
  float v100; // [esp+B0h] [ebp-54h]
  float v101; // [esp+B4h] [ebp-50h]
  float v102; // [esp+B8h] [ebp-4Ch]
  int v103; // [esp+BCh] [ebp-48h] BYREF
  int v104; // [esp+C0h] [ebp-44h]
  float v105; // [esp+C4h] [ebp-40h]
  float v106; // [esp+C8h] [ebp-3Ch]
  float v107; // [esp+CCh] [ebp-38h]
  float v108; // [esp+D0h] [ebp-34h]
  int v109; // [esp+D4h] [ebp-30h]
  BSStringT v110; // [esp+D8h] [ebp-2Ch] BYREF
  char v111; // [esp+E0h] [ebp-24h] BYREF
  char v112; // [esp+E4h] [ebp-20h] BYREF
  int v113; // [esp+E8h] [ebp-1Ch]
  int v114; // [esp+100h] [ebp-4h]
  int savedregs; // [esp+104h] [ebp+0h] BYREF

  v78 = this;
  m_dataLen = arg0->m_dataLen;
  if ( m_dataLen == 0xFFFF )
    v4 = strlen(arg0->m_data);
  else
    v4 = m_dataLen;
  v5 = v4 + 1;
  v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, v5 | 0x100000000LL, v71);
  v79 = v6;
  _memset(v6, 0, v5);
  m_data = arg0->m_data;
  v8 = v6;
  do
  {
    v9 = *m_data;
    LOBYTE(v8->prev) = *m_data++;
    v8 = (FreeEntry *)((char *)v8 + 1);
  }
  while ( v9 );
  v75 = 0;
  v73 = 0;
  LOBYTE(v76) = 0;
  v85.m_data = 0;
  v85.m_dataLen = 0;
  v85.m_bufLen = 0;
  v114 = 0;
  Str1.m_data = 0;
  Str1.m_dataLen = 0;
  Str1.m_bufLen = 0;
  v82.m_data = 0;
  v82.m_dataLen = 0;
  v82.m_bufLen = 0;
  Src.m_data = 0;
  Src.m_dataLen = 0;
  Src.m_bufLen = 0;
  a2.m_data = 0;
  a2.m_dataLen = 0;
  a2.m_bufLen = 0;
  *(float *)&v86.m_data = flt_A68A90;
  *(float *)&v86.m_dataLen = flt_A68A8C;
  v87 = flt_A68A88;
  v88 = 1.0;
  LOBYTE(v114) = 4;
  sub_576F30((float *)&v103, 0, 0x20, (int)v86.m_data, *(int *)&v86.m_dataLen, SLODWORD(v87), COERCE_INT(1.0), 1);
  LOBYTE(v114) = 5;
  v72 = 0;
  v74 = 0;
  LOBYTE(v80) = 0;
  v81 = 0;
  sub_574E00(&v86, (int)v6, &v75, 0, 4, &v73, (char *)&v76, 0);
  FormHeapFree((unsigned int)v86.m_data);
  v10 = a3;
  if ( v73 == 1 )
  {
    v11 = (int *)FormHeapAlloc(0x1Cu);
    if ( v11 )
    {
      v12 = a3[9];
      v13 = a3[8];
      v14 = a3[7];
      v11[3] = 0;
      v11[1] = 0;
      v11[2] = 0;
      *v11 = (int)&NiTList<FontManager::TextPage *>::`vftable';
      v11[4] = v14;
      v11[5] = v13;
      v11[6] = v12;
    }
    else
    {
      v11 = 0;
    }
    v84 = v11;
    v81 = v11;
    v75 = 0;
    while ( 1 )
    {
      v15 = sub_574E00(&v95, (int)v79, &v75, 1, 0, &v73, (char *)&v76, 1)->m_data;
      LOBYTE(v114) = 6;
      BSStringT_Set(&v85, v15, 0);
      LOBYTE(v114) = 5;
      FormHeapFree((unsigned int)v95.m_data);
      v16 = v85.m_data;
      v95.m_data = 0;
      v95.m_bufLen = 0;
      v95.m_dataLen = 0;
      if ( v85.m_data )
      {
        if ( v72 )
        {
          v68 = v80;
          v65 = v74;
          v72 = 0;
          LOBYTE(v104) = 0;
          v17 = sub_577060(&v103);
          sub_577B40(v84, v17, v65, v68);
          v74 = 0;
          LOBYTE(v80) = 0;
          BSStringT_Set(&v110, EmptyString, 0);
        }
        BSStringT_Append(&a2, v16);
        for ( i = 0; ; ++i )
        {
          v19 = v85.m_dataLen == (__int16)0xFFFF ? strlen(v16) : (unsigned __int16)v85.m_dataLen;
          if ( i >= v19 )
            break;
          sub_577120(&v103, v16[i]);
          v69 = v80;
          v66 = v74;
          v20 = sub_577060(&v103);
          sub_577B40(v84, v20, v66, v69);
          v74 = 0;
          LOBYTE(v80) = 0;
        }
      }
      if ( (v73 & 0x20) != 0 )
        break;
      v21 = sub_574E00(&v96, (int)v79, &v75, 6, 0, &v73, (char *)&v76, 1)->m_data;
      LOBYTE(v114) = 7;
      BSStringT_Set(&Str1, v21, 0);
      LOBYTE(v114) = 5;
      FormHeapFree((unsigned int)v96.m_data);
      v96.m_data = 0;
      v96.m_bufLen = 0;
      v96.m_dataLen = 0;
      for ( j = 0; ; ++j )
      {
        v23 = Str1.m_dataLen == (__int16)0xFFFF ? strlen(Str1.m_data) : (unsigned __int16)Str1.m_dataLen;
        if ( j >= v23 )
          break;
        v24 = &Str1.m_data[Str1.m_data != 0 ? j : 0];
        *v24 = toupper(*v24);
      }
      if ( (v73 & 0x20) != 0 )
        break;
      if ( (v73 & 4) != 0 )
      {
        do
        {
          sub_574E00(&v93, (int)v79, &v75, 0, 4, &v73, (char *)&v76, 0);
          FormHeapFree((unsigned int)v93.m_data);
          v93.m_data = 0;
          v93.m_bufLen = 0;
          v93.m_dataLen = 0;
          if ( (v73 & 0x22) != 0 )
            break;
          v25 = sub_574E00(&v98, (int)v79, &v75, 0x16, 0, &v73, (char *)&v76, 1)->m_data;
          LOBYTE(v114) = 8;
          BSStringT_Set(&v82, v25, 0);
          LOBYTE(v114) = 5;
          FormHeapFree((unsigned int)v98.m_data);
          v98.m_data = 0;
          v98.m_bufLen = 0;
          v98.m_dataLen = 0;
          for ( k = 0; ; ++k )
          {
            v27 = v82.m_dataLen == (__int16)0xFFFF ? strlen(v82.m_data) : (unsigned __int16)v82.m_dataLen;
            if ( k >= v27 )
              break;
            v28 = &v82.m_data[v82.m_data != 0 ? k : 0];
            *v28 = toupper(*v28);
          }
          if ( (v73 & 0x22) != 0 )
            break;
          if ( (v73 & 4) != 0 )
          {
            BSStringT_Set(&Src, "true", 0);
          }
          else
          {
            sub_574E00(&v97, (int)v79, &v75, 0, 4, &v73, (char *)&v76, 0);
            FormHeapFree((unsigned int)v97.m_data);
            v97.m_data = 0;
            v97.m_bufLen = 0;
            v97.m_dataLen = 0;
            if ( (v73 & 0x22) != 0 )
              break;
            if ( v73 == 8 )
            {
              v31 = (int)v79;
              ++v75;
              v32 = sub_574E00(&v94, (int)v79, &v75, 0xA, 0, &v73, (char *)&v76, 1)->m_data;
              LOBYTE(v114) = 9;
              BSStringT_Set(&Src, v32, 0);
              LOBYTE(v114) = 5;
              FormHeapFree((unsigned int)v94.m_data);
              v33 = *(_BYTE *)(v31 + v75++);
              LOBYTE(v76) = v33;
              v94.m_data = 0;
              v94.m_bufLen = 0;
              v94.m_dataLen = 0;
              v73 = sub_573760(v33);
            }
            else
            {
              v34 = sub_574E00(&v86, (int)v79, &v75, 6, 0, &v73, (char *)&v76, 1)->m_data;
              LOBYTE(v114) = 0xA;
              BSStringT_Set(&Src, v34, 0);
              LOBYTE(v114) = 5;
              FormHeapFree((unsigned int)v86.m_data);
              v86.m_data = 0;
              *(_DWORD *)&v86.m_dataLen = 0;
              for ( m = 0; ; ++m )
              {
                v36 = Src.m_dataLen == (__int16)0xFFFF ? strlen(Src.m_data) : (unsigned __int16)Src.m_dataLen;
                if ( m >= v36 )
                  break;
                v37 = &Src.m_data[Src.m_data != 0 ? m : 0];
                *v37 = toupper(*v37);
              }
            }
          }
          v29 = Str1.m_data;
          if ( Str1.m_data && !_strcmp(Str1.m_data, off_A68AF4) )
          {
            v30 = v82.m_data;
            v72 = 1;
            if ( v82.m_data )
            {
              if ( !_strcmp(v82.m_data, off_A68AF0) )
              {
                BSStringT_Set(&v110, Src.m_data, 0);
              }
              else if ( !_strcmp(v30, "WIDTH") )
              {
                sscanf(Src.m_data, "%i", &v111);
              }
              else if ( !_strcmp(v30, "HEIGHT") )
              {
                sscanf(Src.m_data, "%i", &v112);
                v113 = 0;
              }
            }
          }
          else
          {
            if ( v72 )
            {
              v70 = v80;
              v67 = v74;
              v72 = 0;
              LOBYTE(v104) = 0;
              v38 = sub_577060(&v103);
              sub_577B40(v84, v38, v67, v70);
              v74 = 0;
              LOBYTE(v80) = 0;
              BSStringT_Set(&v110, EmptyString, 0);
            }
            v30 = v82.m_data;
          }
          if ( v29 )
          {
            if ( !_strcmp(v29, off_A68ADC) )
            {
              ++v74;
              if ( v30 )
              {
                if ( !_strcmp(v30, "ALIGN") )
                {
                  v39 = Src.m_data;
                  if ( Src.m_data )
                  {
                    if ( !_strcmp(Src.m_data, "LEFT") )
                    {
                      v109 = 1;
                    }
                    else if ( !_strcmp(v39, "CENTER") )
                    {
                      v109 = 2;
                    }
                    else if ( !_strcmp(v39, "RIGHT") )
                    {
                      v109 = 4;
                    }
                  }
                }
              }
            }
            else if ( !_strcmp(v29, "FONT") && v30 )
            {
              if ( !_strcmp(v30, "FACE") )
              {
                v40 = 0;
                while ( _strcmp(Src.m_data, *(char **)(v78[v40] + 4)) )
                {
                  v41 = v40 + 1;
                  if ( v40 + 1 == j__atol(Src.m_data) )
                    break;
                  ++v40;
                  if ( v41 >= 5 )
                    goto LABEL_80;
                }
                v103 = v40;
                sub_577120(&v103, v104);
              }
LABEL_80:
              if ( !_strcmp(v82.m_data, "COLOR") )
              {
                v42 = Src.m_data;
                if ( Src.m_dataLen == (__int16)0xFFFF )
                  v43 = strlen(Src.m_data);
                else
                  v43 = (unsigned __int16)Src.m_dataLen;
                if ( v43 == 6 )
                {
                  if ( toupper(*Src.m_data) < 0x41 )
                    v44 = toupper(*v42) - 0x30;
                  else
                    v44 = toupper(*v42) - 0x37;
                  v45 = Src.m_data;
                  v46 = 0x10 * v44;
                  if ( toupper(Src.m_data[1]) < 0x41 )
                    v47 = toupper(v45[1]) - 0x30;
                  else
                    v47 = toupper(v45[1]) - 0x37;
                  v89 = v47 + v46 <= 0 ? 0 : v47 + v46;
                  if ( v89 >= 0xFF )
                    v89 = 0xFF;
                  if ( toupper(v45[2]) < 0x41 )
                    v48 = toupper(v45[2]) - 0x30;
                  else
                    v48 = toupper(v45[2]) - 0x37;
                  v49 = 0x10 * v48;
                  if ( toupper(v45[3]) < 0x41 )
                    v50 = toupper(v45[3]) - 0x30;
                  else
                    v50 = toupper(v45[3]) - 0x37;
                  v92 = v50 + v49 <= 0 ? 0 : v50 + v49;
                  if ( v92 >= 0xFF )
                    v92 = 0xFF;
                  if ( toupper(v45[4]) < 0x41 )
                    v51 = toupper(v45[4]) - 0x30;
                  else
                    v51 = toupper(v45[4]) - 0x37;
                  v52 = 0x10 * v51;
                  if ( toupper(v45[5]) < 0x41 )
                    v53 = toupper(v45[5]) - 0x30;
                  else
                    v53 = toupper(v45[5]) - 0x37;
                  v91 = v53 + v52 <= 0 ? 0 : v53 + v52;
                  if ( v91 >= 0xFF )
                    v91 = 0xFF;
                  v54 = dbl_A3DDD8;
                  v99 = (double)v89 / v54;
                  v105 = v99;
                  v100 = (double)v92 / v54;
                  v106 = v100;
                  v101 = (double)v91 / v54;
                  v102 = 1.0;
                  v107 = v101;
                  v108 = 1.0;
                }
              }
            }
          }
        }
        while ( (v73 & 0x22) == 0 );
      }
      if ( Str1.m_data )
      {
        v55 = Str1.m_data;
        if ( !_strcmp(Str1.m_data, "BR") )
        {
          ++v74;
        }
        else if ( !_strcmp(v55, "P") )
        {
          v74 += 2;
        }
        else if ( !_strcmp(v55, "HR") )
        {
          if ( a3[8] == 0x7FFFFFFF )
          {
            v74 += 2;
          }
          else
          {
            LOBYTE(v80) = 1;
            v74 = 0;
          }
        }
        else if ( !_strcmp(v55, "/FONT") )
        {
          sub_577690((float *)&v103);
        }
      }
    }
    BSStringT_Set(arg0, a2.m_data, 0);
    v10 = a3;
    v6 = v79;
  }
  MemoryHeap_Free_checked(v6);
  v56 = v81;
  if ( v81 )
  {
    *((_BYTE *)v10 + 0x34) = 1;
    v10[0xB] = v56[3];
    if ( v56[3] )
    {
      v57 = (_DWORD *)v56[1];
      v58 = v56[6];
      if ( v57 )
      {
        while ( v58-- )
        {
          v57 = (_DWORD *)*v57;
          if ( !v57 )
            goto LABEL_136;
        }
        v60 = v57[2];
        if ( v60 )
        {
          v10[8] = 0;
          v10[7] = 0;
          for ( n = *(_DWORD **)(v60 + 4); n; v10[7] = v63 )
          {
            v62 = (_DWORD *)n[2];
            n = (_DWORD *)*n;
            v10[8] += v62[6] + v62[8];
            v63 = v62[4];
            if ( v10[7] > v63 )
              v63 = v10[7];
          }
          v10[0xC] = *(_DWORD *)(v60 + 0xC);
        }
        v56 = v81;
      }
    }
  }
LABEL_136:
  FormHeapFree((unsigned int)v110.m_data);
  v110.m_data = 0;
  v110.m_bufLen = 0;
  v110.m_dataLen = 0;
  FormHeapFree((unsigned int)a2.m_data);
  FormHeapFree((unsigned int)Src.m_data);
  FormHeapFree((unsigned int)v82.m_data);
  FormHeapFree((unsigned int)Str1.m_data);
  FormHeapFree((unsigned int)v85.m_data);
  return v56;
}
