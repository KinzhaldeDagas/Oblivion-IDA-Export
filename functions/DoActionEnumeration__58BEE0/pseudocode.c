// Verified: receiver is 0x1C-byte Tile::Value, NOT Tile. Reads owner at +0, numeric value +4, trait code +0x18, expression head pointer +0x10. Native SetFloat 0x58CA00 and dependency propagation 0x58BDD0 pass Value pointers. Fallout named analogue 0x8220BFF0. Local SDK Tile::DoActionEnumeration incorrectly passes Tile* to this address; plugin direct calls are invalid-receiver calls.
void __thiscall Tile::Value::CalculateValue(OblivionTileValueView *this, bool forceUpdate)
{
  bool v3; // zf
  float *p_number; // ebx
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
  OblivionTileValueView *Value; // eax
  _DWORD *v34; // eax
  char *v35; // ecx
  int v36; // esi
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int k; // eax
  OblivionTileValueView *v41; // edi
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
  OblivionTileValueView *v52; // esi
  int v53; // eax
  Tile *owner; // ecx
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
  Tile *v68; // [esp+30h] [ebp-154h]
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
  OblivionTileValueView *v82; // [esp+68h] [ebp-11Ch]
  int v83; // [esp+6Ch] [ebp-118h]
  __int16 v84; // [esp+70h] [ebp-114h]
  __int16 v85; // [esp+72h] [ebp-112h]
  char Str[256]; // [esp+74h] [ebp-110h] BYREF
  int v87; // [esp+180h] [ebp-4h]

  v3 = unk_B3B0A1 == 0; /*0x58bf1f*/
  v82 = this; /*0x58bf26*/
  if ( !v3 && this->trait != 0xFA2 || !this->owner || *((_BYTE *)this->owner + 5) ) /*0x58bf42*/
    return; /*0x58bf46*/
  v83 = 0; /*0x58bf4c*/
  v84 = 0; /*0x58bf50*/
  v85 = 0; /*0x58bf55*/
  v87 = 0; /*0x58bf5b*/
  if ( Tile::Value::CheckEvaluationCycle(this) ) /*0x58bf62*/
  {
    FormHeapFree(0); /*0x58bf6f*/
    return; /*0x58bf6f*/
  }
  p_number = &this->number; /*0x58bf77*/
  *(float *)&v81.renderTarget = this->number; /*0x58bf7a*/
  memset(&v81.start, 0, 0xC); /*0x58bf82*/
  v81.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTList<float>::`vftable'; /*0x58bf8a*/
  v5 = *((_DWORD *)this->actionHead + 1); /*0x58bf95*/
  LOBYTE(v87) = 1; /*0x58bf9a*/
  v79 = v5; /*0x58bfa2*/
  if ( !v5 ) /*0x58bfa6*/
    goto LABEL_147; /*0x58bfa6*/
  do
  {
    v6 = 0.0; /*0x58bfb4*/
    v7 = fConstant_2; /*0x58bfb6*/
    v8 = *(_DWORD *)(v79 + 0xC); /*0x58bfbc*/
    m_dataLen = 0; /*0x58bfc2*/
    v77 = *(float *)(v79 + 8); /*0x58bfc4*/
    *(_DWORD *)ArgList = v8; /*0x58bfc8*/
    v78.m_data = 0; /*0x58bfcc*/
    v78.m_dataLen = 0; /*0x58bfd0*/
    v78.m_bufLen = 0; /*0x58bfd5*/
    v10 = *(_DWORD **)(v79 + 0x10); /*0x58bfda*/
    LOBYTE(v87) = 2; /*0x58bfdf*/
    for ( i = (_DWORD *)v79; v10; v10 = (_DWORD *)v10[4] ) /*0x58bfe9*/
      i = v10; /*0x58bfeb*/
    v12 = (_DWORD *)*i; /*0x58bff4*/
    if ( *i ) /*0x58bff4*/
    {
      do /*0x58c000*/
      {
        i = v12; /*0x58bffa*/
        v12 = (_DWORD *)*v12; /*0x58bffc*/
      }
      while ( v12 ); /*0x58c000*/
    }
    v13 = i[2]; /*0x58c005*/
    v68 = *(Tile **)v13; /*0x58c00a*/
    v81.unk10 = (NiGeometry *)v13; /*0x58c00e*/
    if ( v8 == 0xF ) /*0x58c012*/
    {
      if ( !v81.numItems ) /*0x58c018*/
        goto LABEL_17; /*0x58c018*/
      v8 = *(_DWORD *)(v79 + 8); /*0x58c01a*/
      v77 = *p_number; /*0x58c02b*/
      *(_DWORD *)ArgList = v8; /*0x58c02f*/
      *p_number = *(float *)&v81.start->data; /*0x58c036*/
      sub_5889F0((float **)&v81); /*0x58c038*/
      v6 = 0.0; /*0x58c03f*/
      v7 = fConstant_2; /*0x58c041*/
    }
    if ( v8 == 0xA ) /*0x58c04a*/
    {
      sub_5896F0(&v81, p_number); /*0x58c055*/
      m_data = v78.m_data; /*0x58c05a*/
      goto LABEL_141; /*0x58c05e*/
    }
LABEL_17:
    v15 = *(_WORD *)(v13 + 0x18); /*0x58c063*/
    v16 = 0; /*0x58c067*/
    v81.unk18 = 0; /*0x58c06d*/
    if ( v15 < 0x2710u )
    {
      m_data = v78.m_data; /*0x58c168*/
      v21 = 0; /*0x58c16c*/
    }
    else
    {
      v17 = StringIDToTileString(v15); /*0x58c07f*/
      BSStringT_Set(&v78, v17, 0); /*0x58c08d*/
      _memset((int)Str, 0x20, 0xFFu); /*0x58c09e*/
      m_dataLen = v78.m_dataLen; /*0x58c0a3*/
      m_data = v78.m_data; /*0x58c0a8*/
      Str[0xFF] = 0; /*0x58c0b4*/
      if ( v78.m_dataLen == (__int16)0xFFFF ) /*0x58c0bc*/
        v18 = strlen(v78.m_data); /*0x58c0c0*/
      else
        v18 = (unsigned __int16)v78.m_dataLen; /*0x58c0d0*/
      for ( j = v18 - 1; j; Str[j + 1] = v20 )
      {
        v20 = m_data[m_data != 0 ? j : 0];
        if ( v20 == 0x5F ) /*0x58c0e6*/
          break; /*0x58c0e6*/
        --j; /*0x58c0e8*/
      }
      if ( j ) /*0x58c0f3*/
      {
        v16 = (BSShader *)j__atol(Str); /*0x58c102*/
        v81.unk18 = v16; /*0x58c104*/
      }
      if ( m_dataLen == 0xFFFF ) /*0x58c10d*/
        v21 = strlen(m_data); /*0x58c111*/
      else
        v21 = m_dataLen; /*0x58c15f*/
      v7 = fConstant_2; /*0x58c127*/
      v6 = 0.0; /*0x58c127*/
    }
    if ( !v21 ) /*0x58c12b*/
      goto LABEL_66; /*0x58c12b*/
    if ( v6 == *p_number ) /*0x58c13a*/
      goto LABEL_66; /*0x58c13a*/
    v22 = m_dataLen == 0xFFFF ? strlen(m_data) : m_dataLen;
    if ( m_data[m_data != 0 ? v22 - 1 : 0] != 0x5F && (!v16 || *p_number == (double)(int)v81.unk18) )
      goto LABEL_66; /*0x58c19a*/
    v23 = v78.m_data; /*0x58c1a0*/
    v80.m_data = 0; /*0x58c1b0*/
    v80.m_dataLen = 0; /*0x58c1b4*/
    v80.m_bufLen = 0; /*0x58c1b9*/
    BSStringT_Set(&v80, v78.m_data, 0); /*0x58c1be*/
    LOBYTE(v87) = 3; /*0x58c1c7*/
    v24 = 2; /*0x58c1cf*/
    Len = BSStringT_GetLen(&v78); /*0x58c1d4*/
    if ( Len > 2 )
    {
      do
      {
        if ( v23[v23 != 0 ? v24 - 1 : 0] == 0x5F )
          break; /*0x58c1ef*/
        ++v24; /*0x58c1f1*/
      }
      while ( v24 < Len );
    }
    v3 = v23[v23 != 0 ? v24 - 1 : 0] == 0x5F;
    v26 = v80.m_data; /*0x58c207*/
    if ( v3 )
      v80.m_data[v80.m_data != 0 ? v24 : 0] = 0;
    v27 = Double_To_SInt32(*p_number); /*0x58c21b*/
    BSStringT_Static_Format(&v80, "%s%i", v26, v27); /*0x58c22c*/
    v28 = (unsigned __int8 *)v80.m_data; /*0x58c233*/
    *p_number = 0.0; /*0x58c237*/
    v29 = Tile::AddUserTrait(v28, (char *)0xFFFFFFFF); /*0x58c245*/
    v30 = *((_DWORD **)v68 + 6); /*0x58c247*/
    if ( v30 ) /*0x58c24f*/
    {
      while ( 1 ) /*0x58c251*/
      {
        v31 = v30[2]; /*0x58c251*/
        v32 = (char *)*(unsigned __int16 *)(v31 + 0x18); /*0x58c257*/
        v30 = (_DWORD *)*v30; /*0x58c25d*/
        if ( v32 == v29 ) /*0x58c25f*/
          break; /*0x58c25f*/
        if ( (int)v32 > (int)v29 || !v30 ) /*0x58c265*/
          goto LABEL_48; /*0x58c265*/
      }
    }
    else
    {
LABEL_48:
      Value = Tile::GetOrCreateValue(v68, (unsigned int)v29); /*0x58c267*/
      if ( Value ) /*0x58c271*/
        Tile::Value::SetFloat(Value, 0.0); /*0x58c27b*/
      v34 = *((_DWORD **)v68 + 6); /*0x58c280*/
      if ( !v34 ) /*0x58c285*/
        goto LABEL_65; /*0x58c285*/
      while ( 1 ) /*0x58c290*/
      {
        v31 = v34[2]; /*0x58c290*/
        v35 = (char *)*(unsigned __int16 *)(v31 + 0x18); /*0x58c296*/
        v34 = (_DWORD *)*v34; /*0x58c29c*/
        if ( v35 == v29 ) /*0x58c29e*/
          break; /*0x58c29e*/
        if ( (int)v35 > (int)v29 || !v34 ) /*0x58c2a4*/
          goto LABEL_65; /*0x58c2a4*/
      }
    }
    v36 = v79; /*0x58c2a8*/
    v37 = *(_DWORD *)(v79 + 0x10); /*0x58c2ac*/
    if ( v37 ) /*0x58c2b3*/
    {
      v38 = *(_DWORD *)(v79 + 0x14); /*0x58c2b5*/
      if ( v38 ) /*0x58c2ba*/
      {
        *(_DWORD *)(v38 + 0x10) = v37; /*0x58c2bc*/
        *(_DWORD *)(*(_DWORD *)(v36 + 0x10) + 0x14) = *(_DWORD *)(v36 + 0x14); /*0x58c2c5*/
        *(_DWORD *)(v36 + 0x10) = 0; /*0x58c2c8*/
LABEL_61:
        *(_DWORD *)(v36 + 0x14) = 0; /*0x58c2e3*/
        goto LABEL_62; /*0x58c2e3*/
      }
      *(_DWORD *)(v37 + 0x14) = 0; /*0x58c2d1*/
      *(_DWORD *)(v36 + 0x10) = 0; /*0x58c2d4*/
    }
    else
    {
      v39 = *(_DWORD *)(v79 + 0x14); /*0x58c2d9*/
      if ( v39 ) /*0x58c2de*/
      {
        *(_DWORD *)(v39 + 0x10) = 0; /*0x58c2e0*/
        goto LABEL_61; /*0x58c2e0*/
      }
    }
LABEL_62:
    for ( k = *(_DWORD *)(v31 + 0x14); *(_DWORD *)(k + 0x14); k = *(_DWORD *)(k + 0x14) ) /*0x58c2e9*/
      ; /*0x58c2f0*/
    *(_DWORD *)(k + 0x14) = v36; /*0x58c2f8*/
    *(_DWORD *)(v36 + 0x10) = k; /*0x58c2fb*/
    *(float *)(v36 + 8) = *(float *)(v31 + 4); /*0x58c301*/
    v81.unk10 = (NiGeometry *)v31; /*0x58c304*/
    v77 = *(float *)(v31 + 4); /*0x58c30b*/
LABEL_65:
    LOBYTE(v87) = 2; /*0x58c30f*/
    FormHeapFree((unsigned int)v28); /*0x58c318*/
    m_data = v78.m_data; /*0x58c325*/
    v7 = fConstant_2; /*0x58c32c*/
    v6 = 0.0; /*0x58c32c*/
    v80.m_data = 0; /*0x58c330*/
    v80.m_bufLen = 0; /*0x58c334*/
    v80.m_dataLen = 0; /*0x58c339*/
LABEL_66:
    if ( *(int *)ArgList > 0x7D1 )
    {
      switch ( *(_DWORD *)ArgList ) /*0x58c420*/
      {
        case 0x7D2: /*0x58c420*/
          *p_number = v77 + *p_number; /*0x58c431*/
          break; /*0x58c433*/
        case 0x7D3: /*0x58c420*/
          *p_number = *p_number - v77; /*0x58c442*/
          break; /*0x58c444*/
        case 0x7D4: /*0x58c420*/
          *p_number = v77 * *p_number; /*0x58c453*/
          break; /*0x58c455*/
        case 0x7D5: /*0x58c420*/
          if ( v77 != v6 ) /*0x58c469*/
            *p_number = *p_number / v77; /*0x58c471*/
          break; /*0x58c473*/
        case 0x7D6: /*0x58c420*/
          v69 = (double)Game_RandomLargeInteger(0) / dbl_A3D5A8 * v77; /*0x58c495*/
          *p_number = FloatFloor(v69) + dbl_A2F928; /*0x58c4ae*/
          break; /*0x58c4b0*/
        case 0x7D8: /*0x58c420*/
          ArgListb = 2; /*0x58c4df*/
          if ( v77 >= (double)*p_number ) /*0x58c4f6*/
            ArgListb = 1; /*0x58c4f8*/
          *p_number = (float)ArgListb; /*0x58c504*/
          break; /*0x58c506*/
        case 0x7D9: /*0x58c420*/
          ArgListc = 2; /*0x58c50d*/
          if ( v77 > (double)*p_number ) /*0x58c524*/
            ArgListc = 1; /*0x58c526*/
          *p_number = (float)ArgListc; /*0x58c532*/
          break; /*0x58c534*/
        case 0x7DA: /*0x58c420*/
          ArgListd = 2; /*0x58c53b*/
          if ( v77 != *p_number ) /*0x58c552*/
            ArgListd = 1; /*0x58c554*/
          *p_number = (float)ArgListd; /*0x58c560*/
          break; /*0x58c562*/
        case 0x7DB: /*0x58c420*/
          ArgListe = 2; /*0x58c569*/
          if ( v77 < (double)*p_number ) /*0x58c580*/
            ArgListe = 1; /*0x58c582*/
          *p_number = (float)ArgListe; /*0x58c58e*/
          break; /*0x58c590*/
        case 0x7DC: /*0x58c420*/
          ArgListf = 2; /*0x58c597*/
          if ( v77 <= (double)*p_number ) /*0x58c5ae*/
            ArgListf = 1; /*0x58c5b0*/
          *p_number = (float)ArgListf; /*0x58c5bc*/
          break; /*0x58c5be*/
        case 0x7DD: /*0x58c420*/
          v43 = *p_number; /*0x58c5c7*/
          v44 = v77 < v43; /*0x58c5cd*/
          v45 = v77 == v43; /*0x58c5cd*/
          v46 = v77; /*0x58c5d1*/
          if ( !v44 && !v45 ) /*0x58c5d3*/
            v46 = *p_number; /*0x58c5da*/
          ArgListh = v46; /*0x58c5dc*/
          *p_number = ArgListh; /*0x58c5e4*/
          break; /*0x58c5e6*/
        case 0x7DE: /*0x58c420*/
          v47 = v77; /*0x58c5f9*/
          if ( v77 < (double)*p_number ) /*0x58c5fe*/
            v47 = *p_number; /*0x58c602*/
          ArgListi = v47; /*0x58c604*/
          *p_number = ArgListi; /*0x58c60c*/
          break; /*0x58c60e*/
        case 0x7DF: /*0x58c420*/
          if ( v7 == *p_number && v7 == v77 ) /*0x58c627*/
            *p_number = (float)2; /*0x58c635*/
          else
            *p_number = (float)1; /*0x58c64a*/
          break; /*0x58c637*/
        case 0x7E0: /*0x58c420*/
          if ( v7 == *p_number || v7 == v77 ) /*0x58c665*/
            *p_number = (float)2; /*0x58c688*/
          else
            *p_number = (float)1; /*0x58c673*/
          break; /*0x58c675*/
        case 0x7E1: /*0x58c420*/
          ArgListg = 2; /*0x58c691*/
          if ( v77 == *p_number ) /*0x58c6a8*/
            ArgListg = 1; /*0x58c6aa*/
          *p_number = (float)ArgListg; /*0x58c6b6*/
          break; /*0x58c6b8*/
        case 0x7E2: /*0x58c420*/
          if ( v6 > *p_number ) /*0x58c6ca*/
            *p_number = v77 * (double)(Double_To_SInt32(v77) + 1) + *p_number; /*0x58c6fe*/
          v48 = *p_number; /*0x58c70a*/
          unknown_libname_14(v77, v48); /*0x58c70c*/
          v70 = v48; /*0x58c711*/
          *p_number = v70; /*0x58c719*/
          break; /*0x58c71b*/
        case 0x7E3: /*0x58c420*/
          v71 = v77 + *p_number; /*0x58c72b*/
          *p_number = FloatFloor(v71); /*0x58c73b*/
          break; /*0x58c740*/
        case 0x7E4: /*0x58c420*/
          if ( v6 > *p_number ) /*0x58c773*/
          {
            v73 = v77 + *p_number; /*0x58c77f*/
            v74 = fabs(v73); /*0x58c789*/
            *p_number = v74; /*0x58c791*/
          }
          break; /*0x58c793*/
        case 0x7E5: /*0x58c420*/
          if ( v7 == v77 ) /*0x58c7a1*/
            v6 = *p_number; /*0x58c7a5*/
          ArgListj = v6; /*0x58c7a7*/
          *p_number = ArgListj; /*0x58c7af*/
          break; /*0x58c7b1*/
        case 0x7E6: /*0x58c420*/
          if ( 1.0 == v77 ) /*0x58c7c3*/
            v6 = *p_number; /*0x58c7c7*/
          ArgListk = v6; /*0x58c7c9*/
          *p_number = ArgListk; /*0x58c7d1*/
          break; /*0x58c7d3*/
        case 0x7E7: /*0x58c420*/
          v75 = log(*p_number); /*0x58c7e8*/
          *p_number = v75; /*0x58c7f0*/
          break; /*0x58c7f2*/
        case 0x7E8: /*0x58c420*/
          v76 = log10(*p_number); /*0x58c807*/
          *p_number = v76; /*0x58c80f*/
          break; /*0x58c811*/
        case 0x7E9: /*0x58c420*/
          v72 = v77 + *p_number; /*0x58c750*/
          *p_number = sub_484370(v72); /*0x58c760*/
          break; /*0x58c765*/
        case 0x7EA: /*0x58c420*/
          ArgLista = 1; /*0x58c4b7*/
          if ( v7 != v77 ) /*0x58c4c8*/
            ArgLista = 2; /*0x58c4ca*/
          *p_number = (float)ArgLista; /*0x58c4d6*/
          break; /*0x58c4d8*/
        case 0x7EB: /*0x58c420*/
          break;
        default:
          goto DoActionEnumeration___def_58C420;
      }
    }
    else if ( *(_DWORD *)ArgList == 0x7D1 )
    {
      if ( *(_DWORD *)v79 ) /*0x58c385*/
      {
        v41 = v82; /*0x58c38e*/
        if ( v82->trait == 0xFDE && (*(int (__thiscall **)(Tile *))(*(_DWORD *)v82->owner + 0xC))(v82->owner) == 0x387 ) /*0x58c3a8*/
        {
          unk10 = v81.unk10; /*0x58c3aa*/
          if ( sub_517B20(&v41->text.m_data, (char **)&v81.unk10->member.super.super.m_pcName) ) /*0x58c3b5*/
            *((_DWORD *)v41->owner + 0xB) |= 2u; /*0x58c3c0*/
        }
        else
        {
          unk10 = v81.unk10; /*0x58c3c6*/
        }
        if ( v41->trait == 0xFE6 /*0x58c3e9*/
          && (*(int (__thiscall **)(Tile *))(*(_DWORD *)v41->owner + 0xC))(v41->owner) == 0x386
          && sub_517B20(&v41->text.m_data, (char **)&unk10->member.super.super.m_pcName) )
        {
          *((_DWORD *)v41->owner + 0xB) |= 0x20u; /*0x58c3f4*/
        }
        BSStringT_Set(&v41->text, unk10->member.super.super.m_pcName, 0); /*0x58c401*/
        *p_number = v77; /*0x58c40a*/
      }
    }
    else if ( *(_DWORD *)ArgList && *(_DWORD *)ArgList != 0x23 && *(_DWORD *)ArgList != 0x65 )
    {
DoActionEnumeration___def_58C420:
      PrintError("ERROR: Unknown action enumeration %i \n", *(_DWORD *)ArgList);
    }
LABEL_141:
    v79 = *(_DWORD *)(v79 + 4); /*0x58c82b*/
    v49 = v79; /*0x58c82f*/
    LOBYTE(v87) = 1; /*0x58c837*/
    FormHeapFree((unsigned int)m_data); /*0x58c83f*/
    v78.m_data = 0; /*0x58c84b*/
    v78.m_bufLen = 0; /*0x58c84f*/
    v78.m_dataLen = 0; /*0x58c854*/
  }
  while ( v49 );
  for ( ; v81.numItems; --v81.numItems ) /*0x58c863*/
  {
    start = v81.start; /*0x58c86c*/
    *p_number = *(float *)&v81.start->data; /*0x58c86e*/
    next = start->next; /*0x58c870*/
    v81.start = start->next; /*0x58c874*/
    if ( v81.start ) /*0x58c878*/
      next->prev = 0; /*0x58c87a*/
    else
      v81.end = 0; /*0x58c87f*/
    v81.__vftable->FreeNode(&v81, (Node *)start); /*0x58c88f*/
  }
LABEL_147:
  v52 = v82; /*0x58c898*/
  if ( *((_DWORD *)v82->actionHead + 1) ) /*0x58c89f*/
  {
    if ( v82->trait == 0xFDE && *(float *)&v81.renderTarget != *p_number ) /*0x58c8ba*/
    {
      v53 = Double_To_SInt32(*p_number); /*0x58c8be*/
      BSStringT_Static_Format(&v52->text, "%i", v53); /*0x58c8cd*/
    }
  }
  if ( *(float *)&v81.renderTarget != *p_number || sub_589770((int)v52) || forceUpdate ) /*0x58c8f6*/
  {
    Tile::Value::PropagateReactions(v52); /*0x58c8fa*/
    owner = v52->owner; /*0x58c8ff*/
    if ( v52->owner ) /*0x58c8ff*/
    {
      if ( !*((_BYTE *)owner + 4) /*0x58c91f*/
        && !(*(int (__thiscall **)(Tile *, _DWORD, float, char *))(*(_DWORD *)owner + 0x14))(
              owner,
              v52->trait,
              *p_number,
              v52->text.m_data) )
      {
        Tile::FinalPostParse(v52->owner, v52->trait, *p_number, (int)v52->text.m_data); /*0x58c936*/
      }
    }
  }
  v55 = g_TileValueEvaluationDepth - 1; /*0x58c940*/
  g_TileValueEvaluationDepth = v55; /*0x58c947*/
  *(_DWORD *)(4 * v55 + 0xB3AF10) = 0; /*0x58c94c*/
  LOBYTE(v87) = 0; /*0x58c957*/
  NiTList<float>::~NiTList<float>(&v81); /*0x58c95f*/
  FormHeapFree(0); /*0x58c966*/
}
