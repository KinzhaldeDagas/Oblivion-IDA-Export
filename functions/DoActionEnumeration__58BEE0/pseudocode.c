void __thiscall DoActionEnumeration(float *this, char a2)
{
  bool v3; // zf
  float *v4; // ebx
  int v5; // eax
  double v6; // st7
  double v7; // st6
  int v8; // ebp
  unsigned __int16 m_dataLen; // di
  _DWORD *v10; // ecx
  _DWORD *i; // eax
  _DWORD *v12; // ecx
  int v13; // esi
  char *m_data; // esi
  unsigned __int16 v15; // ax
  BSShader *v16; // ebp
  const char *v17; // eax
  unsigned int v18; // eax
  unsigned int j; // eax
  char v20; // cl
  unsigned int v21; // eax
  unsigned int v22; // eax
  char *v23; // edi
  unsigned int v24; // esi
  unsigned int Len; // eax
  char *v26; // edi
  int v27; // eax
  unsigned __int8 *v28; // edi
  char *v29; // esi
  _DWORD *v30; // eax
  int v31; // edx
  char *v32; // ecx
  _DWORD *PropertyByCode; // eax
  _DWORD *v34; // eax
  char *v35; // ecx
  int v36; // esi
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int k; // eax
  BSStringT *v41; // edi
  NiGeometry *unk10; // ebp
  double v43; // st7
  bool v44; // c0
  bool v45; // c3
  double v46; // st7
  double v47; // st7
  double v48; // st7
  int v49; // edi
  NiPointerList_Node_BSImageSpaceShader *start; // ecx
  NiPointerList_Node_BSImageSpaceShader *next; // eax
  BSStringT *v52; // esi
  int v53; // eax
  char *v54; // ecx
  int v55; // eax
  char ArgList[4]; // [esp+2Ch] [ebp-158h]
  int ArgLista; // [esp+2Ch] [ebp-158h]
  int ArgListb; // [esp+2Ch] [ebp-158h]
  int ArgListc; // [esp+2Ch] [ebp-158h]
  int ArgListd; // [esp+2Ch] [ebp-158h]
  int ArgListe; // [esp+2Ch] [ebp-158h]
  int ArgListf; // [esp+2Ch] [ebp-158h]
  float ArgListh; // [esp+2Ch] [ebp-158h]
  float ArgListi; // [esp+2Ch] [ebp-158h]
  int ArgListg; // [esp+2Ch] [ebp-158h]
  float ArgListj; // [esp+2Ch] [ebp-158h]
  float ArgListk; // [esp+2Ch] [ebp-158h]
  _DWORD *v68; // [esp+30h] [ebp-154h]
  float v69; // [esp+30h] [ebp-154h]
  float v70; // [esp+30h] [ebp-154h]
  float v71; // [esp+30h] [ebp-154h]
  float v72; // [esp+30h] [ebp-154h]
  float v73; // [esp+30h] [ebp-154h]
  float v74; // [esp+30h] [ebp-154h]
  float v75; // [esp+30h] [ebp-154h]
  float v76; // [esp+30h] [ebp-154h]
  float v77; // [esp+34h] [ebp-150h]
  BSStringT v78; // [esp+38h] [ebp-14Ch] BYREF
  int v79; // [esp+40h] [ebp-144h]
  BSStringT v80; // [esp+44h] [ebp-140h] BYREF
  NiTPointerList__BSImageSpaceShader v81; // [esp+4Ch] [ebp-138h] BYREF
  float *v82; // [esp+68h] [ebp-11Ch]
  int v83; // [esp+6Ch] [ebp-118h]
  __int16 v84; // [esp+70h] [ebp-114h]
  __int16 v85; // [esp+72h] [ebp-112h]
  char Str[256]; // [esp+74h] [ebp-110h] BYREF
  int v87; // [esp+180h] [ebp-4h]

  v3 = byte_B3B0A1 == 0;
  v82 = this;
  if ( !v3 && *((_WORD *)this + 0xC) != 0xFA2 || !*(_DWORD *)this || *(_BYTE *)(*(_DWORD *)this + 5) )
    return;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v87 = 0;
  if ( sub_58BAD0(this) )
  {
    FormHeapFree(0);
    return;
  }
  v4 = this + 1;
  v81.renderTarget = *(UInt32 *)(this + 1);
  memset(&v81.start, 0, 0xC);
  v81.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTList<float>::`vftable';
  v5 = *(_DWORD *)(*((_DWORD *)this + 4) + 4);
  LOBYTE(v87) = 1;
  v79 = v5;
  if ( !v5 )
    goto LABEL_147;
  do
  {
    v6 = 0.0;
    v7 = fConstant_2;
    v8 = *(_DWORD *)(v79 + 0xC);
    m_dataLen = 0;
    v77 = *(float *)(v79 + 8);
    *(_DWORD *)ArgList = v8;
    v78.m_data = 0;
    v78.m_dataLen = 0;
    v78.m_bufLen = 0;
    v10 = *(_DWORD **)(v79 + 0x10);
    LOBYTE(v87) = 2;
    for ( i = (_DWORD *)v79; v10; v10 = (_DWORD *)v10[4] )
      i = v10;
    v12 = (_DWORD *)*i;
    if ( *i )
    {
      do
      {
        i = v12;
        v12 = (_DWORD *)*v12;
      }
      while ( v12 );
    }
    v13 = i[2];
    v68 = *(_DWORD **)v13;
    v81.unk10 = (NiGeometry *)v13;
    if ( v8 == 0xF )
    {
      if ( !v81.numItems )
        goto LABEL_17;
      v8 = *(_DWORD *)(v79 + 8);
      v77 = *v4;
      *(_DWORD *)ArgList = v8;
      *v4 = *(float *)&v81.start->data;
      sub_5889F0((float **)&v81);
      v6 = 0.0;
      v7 = fConstant_2;
    }
    if ( v8 == 0xA )
    {
      sub_5896F0(&v81, v4);
      m_data = v78.m_data;
      goto LABEL_141;
    }
LABEL_17:
    v15 = *(_WORD *)(v13 + 0x18);
    v16 = 0;
    v81.unk18 = 0;
    if ( v15 < 0x2710u )
    {
      m_data = v78.m_data;
      v21 = 0;
    }
    else
    {
      v17 = StringIDToTileString(v15);
      BSStringT_Set(&v78, v17, 0);
      _memset(Str, 0x20, 0xFF);
      m_dataLen = v78.m_dataLen;
      m_data = v78.m_data;
      Str[0xFF] = 0;
      if ( v78.m_dataLen == (__int16)0xFFFF )
        v18 = strlen(v78.m_data);
      else
        v18 = (unsigned __int16)v78.m_dataLen;
      for ( j = v18 - 1; j; Str[j + 1] = v20 )
      {
        v20 = m_data[m_data != 0 ? j : 0];
        if ( v20 == 0x5F )
          break;
        --j;
      }
      if ( j )
      {
        v16 = (BSShader *)j__atol(Str);
        v81.unk18 = v16;
      }
      if ( m_dataLen == 0xFFFF )
        v21 = strlen(m_data);
      else
        v21 = m_dataLen;
      v7 = fConstant_2;
      v6 = 0.0;
    }
    if ( !v21 )
      goto LABEL_66;
    if ( v6 == *v4 )
      goto LABEL_66;
    v22 = m_dataLen == 0xFFFF ? strlen(m_data) : m_dataLen;
    if ( m_data[m_data != 0 ? v22 - 1 : 0] != 0x5F && (!v16 || *v4 == (double)(int)v81.unk18) )
      goto LABEL_66;
    v23 = v78.m_data;
    v80.m_data = 0;
    v80.m_dataLen = 0;
    v80.m_bufLen = 0;
    BSStringT_Set(&v80, v78.m_data, 0);
    LOBYTE(v87) = 3;
    v24 = 2;
    Len = BSStringT_GetLen(&v78);
    if ( Len > 2 )
    {
      do
      {
        if ( v23[v23 != 0 ? v24 - 1 : 0] == 0x5F )
          break;
        ++v24;
      }
      while ( v24 < Len );
    }
    v3 = v23[v23 != 0 ? v24 - 1 : 0] == 0x5F;
    v26 = v80.m_data;
    if ( v3 )
      v80.m_data[v80.m_data != 0 ? v24 : 0] = 0;
    v27 = Double_To_SInt32(*v4);
    BSStringT_Static_Format(&v80, "%s%i", v26, v27);
    v28 = (unsigned __int8 *)v80.m_data;
    *v4 = 0.0;
    v29 = sub_58B040(v28, (char *)0xFFFFFFFF);
    v30 = (_DWORD *)v68[6];
    if ( v30 )
    {
      while ( 1 )
      {
        v31 = v30[2];
        v32 = (char *)*(unsigned __int16 *)(v31 + 0x18);
        v30 = (_DWORD *)*v30;
        if ( v32 == v29 )
          break;
        if ( (int)v32 > (int)v29 || !v30 )
          goto LABEL_48;
      }
    }
    else
    {
LABEL_48:
      PropertyByCode = Tile_GetPropertyByCode_(v68, v29);
      if ( PropertyByCode )
        Tile_Property_SetFloatValue_((int)PropertyByCode, 0.0);
      v34 = (_DWORD *)v68[6];
      if ( !v34 )
        goto LABEL_65;
      while ( 1 )
      {
        v31 = v34[2];
        v35 = (char *)*(unsigned __int16 *)(v31 + 0x18);
        v34 = (_DWORD *)*v34;
        if ( v35 == v29 )
          break;
        if ( (int)v35 > (int)v29 || !v34 )
          goto LABEL_65;
      }
    }
    v36 = v79;
    v37 = *(_DWORD *)(v79 + 0x10);
    if ( v37 )
    {
      v38 = *(_DWORD *)(v79 + 0x14);
      if ( v38 )
      {
        *(_DWORD *)(v38 + 0x10) = v37;
        *(_DWORD *)(*(_DWORD *)(v36 + 0x10) + 0x14) = *(_DWORD *)(v36 + 0x14);
        *(_DWORD *)(v36 + 0x10) = 0;
LABEL_61:
        *(_DWORD *)(v36 + 0x14) = 0;
        goto LABEL_62;
      }
      *(_DWORD *)(v37 + 0x14) = 0;
      *(_DWORD *)(v36 + 0x10) = 0;
    }
    else
    {
      v39 = *(_DWORD *)(v79 + 0x14);
      if ( v39 )
      {
        *(_DWORD *)(v39 + 0x10) = 0;
        goto LABEL_61;
      }
    }
LABEL_62:
    for ( k = *(_DWORD *)(v31 + 0x14); *(_DWORD *)(k + 0x14); k = *(_DWORD *)(k + 0x14) )
      ;
    *(_DWORD *)(k + 0x14) = v36;
    *(_DWORD *)(v36 + 0x10) = k;
    *(float *)(v36 + 8) = *(float *)(v31 + 4);
    v81.unk10 = (NiGeometry *)v31;
    v77 = *(float *)(v31 + 4);
LABEL_65:
    LOBYTE(v87) = 2;
    FormHeapFree((unsigned int)v28);
    m_data = v78.m_data;
    v7 = fConstant_2;
    v6 = 0.0;
    v80.m_data = 0;
    v80.m_bufLen = 0;
    v80.m_dataLen = 0;
LABEL_66:
    if ( *(int *)ArgList > 0x7D1 )
    {
      switch ( *(_DWORD *)ArgList )
      {
        case 0x7D2:
          *v4 = v77 + *v4;
          break;
        case 0x7D3:
          *v4 = *v4 - v77;
          break;
        case 0x7D4:
          *v4 = v77 * *v4;
          break;
        case 0x7D5:
          if ( v77 != v6 )
            *v4 = *v4 / v77;
          break;
        case 0x7D6:
          v69 = (double)GetRandomLargeInteger_(0) / dbl_A3D5A8 * v77;
          *v4 = FloatFloor(v69) + dbl_A2F928;
          break;
        case 0x7D8:
          ArgListb = 2;
          if ( v77 >= (double)*v4 )
            ArgListb = 1;
          *v4 = (float)ArgListb;
          break;
        case 0x7D9:
          ArgListc = 2;
          if ( v77 > (double)*v4 )
            ArgListc = 1;
          *v4 = (float)ArgListc;
          break;
        case 0x7DA:
          ArgListd = 2;
          if ( v77 != *v4 )
            ArgListd = 1;
          *v4 = (float)ArgListd;
          break;
        case 0x7DB:
          ArgListe = 2;
          if ( v77 < (double)*v4 )
            ArgListe = 1;
          *v4 = (float)ArgListe;
          break;
        case 0x7DC:
          ArgListf = 2;
          if ( v77 <= (double)*v4 )
            ArgListf = 1;
          *v4 = (float)ArgListf;
          break;
        case 0x7DD:
          v43 = *v4;
          v44 = v77 < v43;
          v45 = v77 == v43;
          v46 = v77;
          if ( !v44 && !v45 )
            v46 = *v4;
          ArgListh = v46;
          *v4 = ArgListh;
          break;
        case 0x7DE:
          v47 = v77;
          if ( v77 < (double)*v4 )
            v47 = *v4;
          ArgListi = v47;
          *v4 = ArgListi;
          break;
        case 0x7DF:
          if ( v7 == *v4 && v7 == v77 )
            *v4 = (float)2;
          else
            *v4 = (float)1;
          break;
        case 0x7E0:
          if ( v7 == *v4 || v7 == v77 )
            *v4 = (float)2;
          else
            *v4 = (float)1;
          break;
        case 0x7E1:
          ArgListg = 2;
          if ( v77 == *v4 )
            ArgListg = 1;
          *v4 = (float)ArgListg;
          break;
        case 0x7E2:
          if ( v6 > *v4 )
            *v4 = v77 * (double)(Double_To_SInt32(v77) + 1) + *v4;
          v48 = *v4;
          unknown_libname_14(v77, v48);
          v70 = v48;
          *v4 = v70;
          break;
        case 0x7E3:
          v71 = v77 + *v4;
          *v4 = FloatFloor(v71);
          break;
        case 0x7E4:
          if ( v6 > *v4 )
          {
            v73 = v77 + *v4;
            v74 = fabs(v73);
            *v4 = v74;
          }
          break;
        case 0x7E5:
          if ( v7 == v77 )
            v6 = *v4;
          ArgListj = v6;
          *v4 = ArgListj;
          break;
        case 0x7E6:
          if ( 1.0 == v77 )
            v6 = *v4;
          ArgListk = v6;
          *v4 = ArgListk;
          break;
        case 0x7E7:
          v75 = log(*v4);
          *v4 = v75;
          break;
        case 0x7E8:
          v76 = log10(*v4);
          *v4 = v76;
          break;
        case 0x7E9:
          v72 = v77 + *v4;
          *v4 = sub_484370(v72);
          break;
        case 0x7EA:
          ArgLista = 1;
          if ( v7 != v77 )
            ArgLista = 2;
          *v4 = (float)ArgLista;
          break;
        case 0x7EB:
          break;
        default:
          goto DoActionEnumeration___def_58C420;
      }
    }
    else if ( *(_DWORD *)ArgList == 0x7D1 )
    {
      if ( *(_DWORD *)v79 )
      {
        v41 = (BSStringT *)v82;
        if ( *((_WORD *)v82 + 0xC) == 0xFDE
          && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v82 + 0xC))(*(_DWORD *)v82) == 0x387 )
        {
          unk10 = v81.unk10;
          if ( sub_517B20(&v41[1].m_data, (char **)&v81.unk10->member.super.super.m_pcName) )
            *((_DWORD *)v41->m_data + 0xB) |= 2u;
        }
        else
        {
          unk10 = v81.unk10;
        }
        if ( LOWORD(v41[3].m_data) == 0xFE6
          && (*(int (__thiscall **)(char *))(*(_DWORD *)v41->m_data + 0xC))(v41->m_data) == 0x386
          && sub_517B20(&v41[1].m_data, (char **)&unk10->member.super.super.m_pcName) )
        {
          *((_DWORD *)v41->m_data + 0xB) |= 0x20u;
        }
        BSStringT_Set(v41 + 1, unk10->member.super.super.m_pcName, 0);
        *v4 = v77;
      }
    }
    else if ( *(_DWORD *)ArgList && *(_DWORD *)ArgList != 0x23 && *(_DWORD *)ArgList != 0x65 )
    {
DoActionEnumeration___def_58C420:
      PrintError("ERROR: Unknown action enumeration %i \n", *(_DWORD *)ArgList);
    }
LABEL_141:
    v79 = *(_DWORD *)(v79 + 4);
    v49 = v79;
    LOBYTE(v87) = 1;
    FormHeapFree((unsigned int)m_data);
    v78.m_data = 0;
    v78.m_bufLen = 0;
    v78.m_dataLen = 0;
  }
  while ( v49 );
  for ( ; v81.numItems; --v81.numItems )
  {
    start = v81.start;
    *v4 = *(float *)&v81.start->data;
    next = start->next;
    v81.start = start->next;
    if ( v81.start )
      next->prev = 0;
    else
      v81.end = 0;
    v81.__vftable->FreeNode(&v81, (Node *)start);
  }
LABEL_147:
  v52 = (BSStringT *)v82;
  if ( *(_DWORD *)(*((_DWORD *)v82 + 4) + 4) )
  {
    if ( *((_WORD *)v82 + 0xC) == 0xFDE && *(float *)&v81.renderTarget != *v4 )
    {
      v53 = Double_To_SInt32(*v4);
      BSStringT_Static_Format(v52 + 1, "%i", v53);
    }
  }
  if ( *(float *)&v81.renderTarget != *v4 || sub_589770((int)v52) || a2 )
  {
    sub_58BDD0((float *)v52);
    v54 = v52->m_data;
    if ( v52->m_data )
    {
      if ( !v54[4]
        && !(*(int (__thiscall **)(char *, _DWORD, float, char *))(*(_DWORD *)v54 + 0x14))(
              v54,
              LOWORD(v52[3].m_data),
              *v4,
              v52[1].m_data) )
      {
        sub_58B2F0(v52->m_data, LOWORD(v52[3].m_data), *v4, (int)v52[1].m_data);
      }
    }
  }
  v55 = dword_B3B0AC - 1;
  dword_B3B0AC = v55;
  *(_DWORD *)(4 * v55 + 0xB3AF10) = 0;
  LOBYTE(v87) = 0;
  NiTList<float>::~NiTList<float>(&v81);
  FormHeapFree(0);
}
