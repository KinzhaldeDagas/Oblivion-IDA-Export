void __thiscall sub_58D2F0(_DWORD *this, char *a2, char *Src, int a4, char a5)
{
  BSStringT *v5; // edi
  int v6; // eax
  BSStringT *v7; // ebp
  int v8; // edx
  char v9; // al
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // ebx
  int v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // esi
  int v19; // eax
  _DWORD *v20; // edx
  int v21; // eax
  _DWORD *v22; // ecx
  _DWORD *v23; // esi
  unsigned int v24; // edi
  double v25; // st7
  int v26; // eax
  _DWORD *v27; // esi
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  unsigned int v30; // esi
  double v31; // st7
  _DWORD *v32; // edi
  int v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // esi
  int m_data; // eax
  _DWORD *v37; // ecx
  float v38; // [esp+24h] [ebp-14h] BYREF
  _DWORD *v39; // [esp+28h] [ebp-10h]
  unsigned int v40; // [esp+34h] [ebp-4h]

  v39 = this;
  v38 = 0.0;
  if ( a5 || (v38 = (float)TileStringToStringID((unsigned __int8 *)Src), 0.0 == v38) )
  {
    if ( *Src == 0x5F )
      v38 = (float)(int)sub_58B040((unsigned __int8 *)Src, (char *)0xFFFFFFFF);
  }
  v5 = (BSStringT *)FormHeapAlloc(0x18u);
  v40 = 0;
  if ( v5 )
  {
    v6 = Double_To_SInt32(v38);
    v7 = sub_589FA0(v5, a2, v38, Src, v6, a4);
  }
  else
  {
    v7 = 0;
  }
  v40 = 0xFFFFFFFF;
  v8 = 0;
  if ( strlen(Src) )
  {
    while ( 1 )
    {
      v9 = Src[v8];
      if ( (v9 < 0x30 || v9 > 0x39) && v9 != 0x2D && v9 != 0x2E )
        break;
      if ( ++v8 >= strlen(Src) )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    if ( flt_A30634 == v38 )
      sscanf(Src, "%f", &v38);
    if ( 0.0 == v38 )
      sscanf(Src, "%f", &v38);
    BSStringT_Set(v7 + 1, EmptyString, 0);
    *(float *)&v7->m_dataLen = v38;
    v7[2].m_data = (char *)Double_To_SInt32(v38);
  }
  v10 = v39;
  v11 = v39[5];
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    v15 = *(_DWORD *)(v11 + 4);
    if ( v15 )
    {
      v13 = *(_DWORD *)(v15 + 8);
      v16 = *(_DWORD *)(v15 + 4);
      if ( v16 )
        v14 = *(_DWORD *)(v16 + 8);
    }
  }
  if ( a2 != (char *)0xBBA )
  {
    if ( a2 == (char *)0xF )
    {
      v25 = v38;
      if ( v38 == dbl_A6ACF8 )
      {
        v26 = v39[2];
        if ( *(_DWORD *)(v26 + 0xC) )
        {
          *(_DWORD *)(v26 + 0xC) = 0;
          if ( !v7 )
            return;
          goto LABEL_77;
        }
      }
      if ( v12 )
      {
        if ( *(_DWORD *)v12 == 0xBB9
          && v13
          && (*(_DWORD *)v13 == 0x1E || *(_DWORD *)v13 == 0x14)
          && v25 == *(float *)(v13 + 4) )
        {
          if ( (*(float *)&v7->m_dataLen < dbl_A6ACA8 || flt_A6ACA0 < (double)*(float *)&v7->m_dataLen)
            && (int)v7[2].m_data < 0x2710 )
          {
            if ( *(float *)&v7->m_dataLen < dbl_A6AC98 || *(float *)&v7->m_dataLen > dbl_A6AC90 )
            {
              *(_DWORD *)v13 = 0xFFFFFFFF;
              PrintError("Bad trait/action type in XML");
            }
            else
            {
              *(_DWORD *)v13 = 0x37;
            }
          }
          else
          {
            *(_DWORD *)v13 = 0x32;
          }
          *(_DWORD *)(v13 + 0x10) = Double_To_SInt32(*(float *)(v13 + 4));
          *(float *)(v13 + 4) = *(float *)(v12 + 4);
          BSStringT_Set((BSStringT *)(v13 + 8), *(const char **)(v12 + 8), 0);
          v30 = sub_5889B0(v39 + 3);
          if ( v30 )
          {
            FormHeapFree(*(_DWORD *)(v30 + 8));
            *(_DWORD *)(v30 + 8) = 0;
            *(_WORD *)(v30 + 0xE) = 0;
            *(_WORD *)(v30 + 0xC) = 0;
            FormHeapFree(v30);
          }
          goto LABEL_77;
        }
        if ( *(_DWORD *)v12 == 0xBBC
          && v13
          && *(_DWORD *)v13 == 0xBBB
          && v14
          && *(_DWORD *)v14 == 0x14
          && *(float *)(v14 + 4) == v25 )
        {
          v31 = *(float *)(v14 + 4);
          *(_DWORD *)v14 = 0x3C;
          *(_DWORD *)(v14 + 0x10) = Double_To_SInt32(v31);
          *(float *)(v14 + 4) = *(float *)(v12 + 4);
          sub_4FB4C0((BSStringT *)(v14 + 8), (const char **)(v13 + 8));
          v32 = v39 + 3;
          v33 = sub_5889B0(v39 + 3);
          v34 = v33;
          if ( v33 )
          {
            FormHeapFree(*(_DWORD *)(v33 + 8));
            *(_DWORD *)(v34 + 8) = 0;
            *(_WORD *)(v34 + 0xE) = 0;
            *(_WORD *)(v34 + 0xC) = 0;
            FormHeapFree(v34);
          }
          v35 = sub_5889B0(v32);
          if ( v35 )
          {
            FormHeapFree(*(_DWORD *)(v35 + 8));
            *(_DWORD *)(v35 + 8) = 0;
            *(_WORD *)(v35 + 0xE) = 0;
            *(_WORD *)(v35 + 0xC) = 0;
            FormHeapFree(v35);
          }
          if ( v7 )
            goto LABEL_77;
          return;
        }
      }
    }
    m_data = (int)v7[2].m_data;
    if ( (m_data < 0xFA1 || m_data > 0x1001) && m_data < 0x2710 )
    {
      if ( m_data < 0x7D1 || m_data > 0x7EB )
      {
        if ( v7->m_data == (char *)0xF
          && *(float *)&v7->m_dataLen >= dbl_A6ACB8
          && *(float *)&v7->m_dataLen <= dbl_A6ACB0 )
        {
          v7->m_data = (char *)0x2D;
        }
      }
      else if ( v7->m_data == (char *)0xA )
      {
        v7->m_data = (char *)0x14;
      }
      else if ( v7->m_data == (char *)0xF )
      {
        v7->m_data = (char *)0x19;
      }
    }
    else if ( v7->m_data == (char *)0xA )
    {
      v7->m_data = (char *)0x1E;
    }
    else if ( v7->m_data == (char *)0xF )
    {
      v7->m_data = (char *)0x23;
    }
    v27 = v10 + 3;
    v28 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v10[3] + 4))(v10 + 3);
    v28[2] = v7;
    *v28 = 0;
    v28[1] = v27[2];
    v37 = (_DWORD *)v27[2];
    if ( v37 )
    {
      *v37 = v28;
      goto LABEL_98;
    }
LABEL_97:
    v27[1] = v28;
    goto LABEL_98;
  }
  if ( !v12 || *(_DWORD *)v12 != 0xA )
  {
LABEL_47:
    v27 = v39 + 3;
    v7->m_data = (char *)0x32;
    v7[2].m_data = (char *)0xBBA;
    v28 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v10[3] + 4))(v27);
    v28[2] = v7;
    *v28 = 0;
    v28[1] = v27[2];
    v29 = (_DWORD *)v27[2];
    if ( v29 )
    {
      *v29 = v28;
LABEL_98:
      ++v27[3];
      v27[2] = v28;
      return;
    }
    goto LABEL_97;
  }
  if ( *(float *)(v12 + 4) != dbl_A6ACF8 )
  {
    if ( *(float *)(v12 + 4) >= dbl_A6ACB8 && *(float *)(v12 + 4) <= dbl_A6ACB0 )
    {
      *(_DWORD *)v12 = 0x28;
      BSStringT_Set((BSStringT *)(v12 + 8), Src, 0);
      if ( !v7 )
        return;
      goto LABEL_77;
    }
    goto LABEL_47;
  }
  v17 = v39[2];
  if ( *(_DWORD *)(v17 + 0xC) )
  {
    PrintError("Can't have nested template definitions in an XML file.");
    v18 = v39;
  }
  else
  {
    v19 = sub_58BC80((char *)v17, Src);
    v18 = v39;
    *(_DWORD *)(v39[2] + 0xC) = v19;
    v20 = (_DWORD *)v18[2];
    if ( !v20[3] )
      *(_DWORD *)(v18[2] + 0xC) = sub_58CE30(v20, Src);
  }
  v21 = v18[5];
  v22 = *(_DWORD **)(v21 + 4);
  v23 = v18 + 3;
  v23[2] = v22;
  if ( v22 )
    *v22 = 0;
  else
    v23[1] = 0;
  v24 = *(_DWORD *)(v21 + 8);
  (*(void (__thiscall **)(_DWORD *, int))(*v23 + 8))(v23, v21);
  --v23[3];
  if ( v24 )
  {
    FormHeapFree(*(_DWORD *)(v24 + 8));
    *(_DWORD *)(v24 + 8) = 0;
    *(_WORD *)(v24 + 0xE) = 0;
    *(_WORD *)(v24 + 0xC) = 0;
    FormHeapFree(v24);
  }
  if ( v7 )
  {
LABEL_77:
    FormHeapFree((unsigned int)v7[1].m_data);
    v7[1].m_data = 0;
    v7[1].m_bufLen = 0;
    v7[1].m_dataLen = 0;
    FormHeapFree((unsigned int)v7);
  }
}
