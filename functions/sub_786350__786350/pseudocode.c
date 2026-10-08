// stBezierSpline evenly-spaced point/table builder. Called after parsing a new profile string, with 0x1F4 samples in the observed constructor path.
void __thiscall OB_StBezierSpline_CreateEvenlySpacedPoints_010201A0(
        OB_stBezierSpline_010201A0 *this,
        unsigned int count)
{
  signed int v2; // edi
  double v4; // st7
  double v5; // st7
  OB_stVec_010201A0 *v6; // eax
  char *begin; // ebx
  _DWORD *data; // esi
  char *v9; // eax
  OB_stVec_010201A0 *end; // esi
  OB_stVector24_010201A0 *p_evenlySpacedPoints; // ebx
  OB_stVec_010201A0 *v12; // edi
  OB_stVec_010201A0 *v13; // eax
  unsigned int v14; // edi
  OB_stVec_010201A0 *v15; // eax
  OB_stVec_010201A0 *v16; // esi
  OB_stVec_010201A0 *v17; // eax
  unsigned int v18; // eax
  double v19; // st7
  double v20; // st7
  unsigned int v21; // esi
  int v22; // ebx
  char *v23; // edi
  int v24; // ebx
  _BYTE *v25; // ecx
  _BYTE *v26; // esi
  int v27; // ebp
  OB_stVector24_010201A0 *v28; // eax
  unsigned int v29; // edi
  float *v30; // ebx
  float *v31; // edi
  OB_stVec_010201A0 *v32; // eax
  OB_stVec_010201A0 *v33; // eax
  OB_stVec_010201A0 *v34; // eax
  bool v35; // cf
  OB_stVec_010201A0 *v36; // eax
  unsigned int v37; // esi
  OB_stVec_010201A0 *v38; // eax
  OB_stVec_010201A0 *v39; // esi
  unsigned __int8 *v40; // eax
  unsigned __int8 *v41; // eax
  char *v42; // esi
  char *v43; // edi
  float x; // [esp+28h] [ebp-58h]
  float v45; // [esp+28h] [ebp-58h]
  unsigned int v46; // [esp+2Ch] [ebp-54h]
  int v47; // [esp+30h] [ebp-50h]
  float v49; // [esp+38h] [ebp-48h]
  float v50; // [esp+38h] [ebp-48h]
  int v51; // [esp+3Ch] [ebp-44h]
  float v52; // [esp+40h] [ebp-40h]
  OB_stVector24Iterator_010201A0 v53; // [esp+44h] [ebp-3Ch] BYREF
  OB_stVector16_010201A0 v54; // [esp+4Ch] [ebp-34h] BYREF
  OB_stVec_010201A0 result; // [esp+5Ch] [ebp-24h] BYREF
  unsigned int v56; // [esp+7Ch] [ebp-4h]
  unsigned int counta; // [esp+84h] [ebp+4h]
  unsigned int countb; // [esp+84h] [ebp+4h]

  v2 = 0; /*0x78637b*/
  memset(&v54.begin, 0, 0xC); /*0x78637d*/
  v56 = 0; /*0x786392*/
  OB_stVector_stVec_ResizeDefault_010201A0(&v54, count); /*0x786396*/
  if ( count ) /*0x78639d*/
  {
    v4 = (double)(int)count; /*0x7863ab*/
    if ( (int)count < 0 ) /*0x7863af*/
      v4 = v4 + flt_A2FC78; /*0x7863b1*/
    v49 = v4; /*0x7863b7*/
    counta = 0; /*0x7863bb*/
    do /*0x78645b*/
    {
      v53.owner = (OB_stVector24_010201A0 *)v2; /*0x7863c3*/
      v5 = (double)v2; /*0x7863c7*/
      if ( v2 < 0 ) /*0x7863cb*/
        v5 = v5 + flt_A2FC78; /*0x7863cd*/
      v52 = v5 / v49; /*0x7863e0*/
      v6 = OB_StBezierSpline_SampleControlCurve_010201A0(this, &result, v52); /*0x7863ec*/
      begin = (char *)v54.begin; /*0x7863f1*/
      data = (_DWORD *)v6->data; /*0x7863f7*/
      if ( !v54.begin || v2 >= (unsigned int)(((char *)v54.end - (char *)v54.begin) / 0x18) ) /*0x786414*/
      {
        _invalid_parameter_noinfo(); /*0x786416*/
        begin = (char *)v54.begin; /*0x78641b*/
      }
      *(_DWORD *)&begin[counta] = *data; /*0x786425*/
      v9 = &begin[counta]; /*0x78642b*/
      *((_DWORD *)v9 + 1) = data[1]; /*0x78642d*/
      *((_DWORD *)v9 + 2) = data[2]; /*0x786433*/
      *((_DWORD *)v9 + 3) = data[3]; /*0x786439*/
      *((_DWORD *)v9 + 4) = data[4]; /*0x78643f*/
      *((_DWORD *)v9 + 5) = data[5]; /*0x786449*/
      Shared_NoOpVirtual_60D0A0(&result); /*0x78644c*/
      counta += 0x18; /*0x786451*/
      ++v2; /*0x786456*/
    }
    while ( v2 < count ); /*0x78645b*/
  }
  end = this->evenlySpacedPoints.end; /*0x786465*/
  p_evenlySpacedPoints = (OB_stVector24_010201A0 *)&this->evenlySpacedPoints; /*0x786468*/
  if ( this->evenlySpacedPoints.begin > end ) /*0x786472*/
    _invalid_parameter_noinfo(); /*0x786474*/
  v12 = this->evenlySpacedPoints.begin; /*0x786479*/
  if ( v12 > this->evenlySpacedPoints.end ) /*0x78647f*/
    _invalid_parameter_noinfo(); /*0x786481*/
  OB_stVector24_EraseRange_010201A0( /*0x786491*/
    p_evenlySpacedPoints,
    &v53,
    (OB_stVector24Iterator_010201A0)__PAIR64__((unsigned int)v12, (unsigned int)p_evenlySpacedPoints),
    (OB_stVector24Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)p_evenlySpacedPoints));
  OB_stVector_stVec_ResizeDefault_010201A0((OB_stVector16_010201A0 *)p_evenlySpacedPoints, count); /*0x786499*/
  v13 = this->controlPoints.begin; /*0x7864a2*/
  v14 = 0; /*0x7864a5*/
  countb = 0; /*0x7864a9*/
  if ( !v13 || !(this->controlPoints.end - v13) ) /*0x7864c3*/
    _invalid_parameter_noinfo(); /*0x7864c7*/
  v15 = this->evenlySpacedPoints.begin; /*0x7864cc*/
  v16 = this->controlPoints.begin; /*0x7864d1*/
  if ( !v15 || !(this->evenlySpacedPoints.end - v15) ) /*0x7864ea*/
    _invalid_parameter_noinfo(); /*0x7864ee*/
  v17 = this->evenlySpacedPoints.begin; /*0x7864f3*/
  v17->data[0] = v16->data[0]; /*0x7864f8*/
  v17->data[1] = v16->data[1]; /*0x7864fd*/
  v17->data[2] = v16->data[2]; /*0x786503*/
  v17->data[3] = v16->data[3]; /*0x786509*/
  v17->data[4] = v16->data[4]; /*0x78650f*/
  v17->size = v16->size; /*0x786515*/
  v18 = count - 1; /*0x786518*/
  v47 = 1; /*0x78651e*/
  v46 = count - 1; /*0x786526*/
  if ( count - 1 > 1 ) /*0x78652a*/
  {
    v53.owner = (OB_stVector24_010201A0 *)count; /*0x786532*/
    v19 = (double)(int)count; /*0x786536*/
    if ( (int)count < 0 ) /*0x78653a*/
      v19 = v19 + flt_A2FC78; /*0x78653c*/
    v50 = v19; /*0x786542*/
    v51 = 1; /*0x786546*/
    while ( 1 ) /*0x78655c*/
    {
      v20 = (double)v47; /*0x78655c*/
      if ( v47 < 0 ) /*0x786562*/
        v20 = v20 + flt_A2FC78; /*0x786564*/
      v21 = v14; /*0x786570*/
      x = v20 / v50; /*0x786572*/
      if ( v14 < v18 ) /*0x786576*/
      {
        v22 = 3 * v14; /*0x78657c*/
        v23 = (char *)v54.begin; /*0x78657f*/
        v24 = 8 * v22; /*0x786587*/
        while ( 1 ) /*0x786590*/
        {
          if ( !v23 || v21 >= ((char *)v54.end - (char *)v23) / 0x18 ) /*0x7865ad*/
          {
            _invalid_parameter_noinfo(); /*0x7865af*/
            v23 = (char *)v54.begin; /*0x7865b4*/
          }
          if ( *(float *)&v23[v24] <= (double)x ) /*0x7865c6*/
          {
            if ( !v23 || v21 + 1 >= ((char *)v54.end - (char *)v23) / 0x18 ) /*0x7865e8*/
            {
              _invalid_parameter_noinfo(); /*0x7865ea*/
              v23 = (char *)v54.begin; /*0x7865ef*/
            }
            if ( *(float *)&v23[v24 + 0x18] > (double)x ) /*0x786602*/
              break; /*0x786602*/
          }
          ++v21; /*0x786604*/
          v24 += 0x18; /*0x786607*/
          if ( v21 >= v46 ) /*0x78660e*/
            goto LABEL_41; /*0x78660e*/
        }
        countb = v21; /*0x786612*/
LABEL_41:
        v14 = countb; /*0x786616*/
      }
      OB_stVec_ctor_xyzwv_010201A0(&result, x, 0.0, 0.0, 0.0, 0.0); /*0x78663a*/
      v25 = v54.begin; /*0x78663f*/
      if ( !v54.begin || (v26 = v54.end, v14 >= ((char *)v54.end - (char *)v54.begin) / 0x18) ) /*0x786662*/
      {
        _invalid_parameter_noinfo(); /*0x786664*/
        v26 = v54.end; /*0x786669*/
        v25 = v54.begin; /*0x78666d*/
      }
      v27 = 0x18 * v14; /*0x786678*/
      v28 = (OB_stVector24_010201A0 *)&v25[0x18 * v14]; /*0x78667a*/
      v29 = v14 + 1; /*0x78667d*/
      v53.owner = v28; /*0x786682*/
      if ( !v25 || v29 >= (v26 - v25) / 0x18 ) /*0x78669f*/
      {
        _invalid_parameter_noinfo(); /*0x7866a1*/
        v26 = v54.end; /*0x7866a6*/
        v25 = v54.begin; /*0x7866aa*/
      }
      v30 = (float *)&v25[0x18 * v29]; /*0x7866b3*/
      if ( !v25 || countb >= (v26 - v25) / 0x18 ) /*0x7866d1*/
      {
        _invalid_parameter_noinfo(); /*0x7866d3*/
        v26 = v54.end; /*0x7866d8*/
        v25 = v54.begin; /*0x7866dc*/
      }
      v45 = (x - *(float *)&v53.owner->allocatorState) / (*v30 - *(float *)&v25[v27]); /*0x7866f3*/
      if ( !v25 || v29 >= (v26 - v25) / 0x18 ) /*0x786710*/
      {
        _invalid_parameter_noinfo(); /*0x786712*/
        v26 = v54.end; /*0x786717*/
        v25 = v54.begin; /*0x78671b*/
      }
      v31 = (float *)&v25[0x18 * v29]; /*0x786724*/
      if ( !v25 || countb >= (v26 - v25) / 0x18 ) /*0x786740*/
      {
        _invalid_parameter_noinfo(); /*0x786742*/
        v25 = v54.begin; /*0x786747*/
      }
      v32 = this->evenlySpacedPoints.begin; /*0x786753*/
      v53.owner = *(OB_stVector24_010201A0 **)&v25[v27 + 4]; /*0x786756*/
      result.data[1] = (v31[1] - *(float *)&v53.owner) * v45 + *(float *)&v53.owner; /*0x78676f*/
      if ( !v32 || v47 >= (unsigned int)(this->evenlySpacedPoints.end - v32) ) /*0x78678f*/
        _invalid_parameter_noinfo(); /*0x786791*/
      v33 = this->evenlySpacedPoints.begin; /*0x786796*/
      v33[v51].data[0] = result.data[0]; /*0x7867a1*/
      v34 = &v33[v51]; /*0x7867a8*/
      v34->data[1] = result.data[1]; /*0x7867aa*/
      v34->data[2] = result.data[2]; /*0x7867b1*/
      v34->data[3] = result.data[3]; /*0x7867b8*/
      v34->data[4] = result.data[4]; /*0x7867bf*/
      v34->size = result.size; /*0x7867ca*/
      Shared_NoOpVirtual_60D0A0(&result); /*0x7867cd*/
      v35 = ++v47 < v46; /*0x7867dc*/
      ++v51; /*0x7867e4*/
      if ( !v35 ) /*0x7867e8*/
        break; /*0x7867e8*/
      v14 = countb; /*0x786550*/
      v18 = v46; /*0x786554*/
    }
    p_evenlySpacedPoints = (OB_stVector24_010201A0 *)&this->evenlySpacedPoints; /*0x7867ee*/
  }
  v36 = this->controlPoints.begin; /*0x7867f6*/
  if ( v36 ) /*0x7867fb*/
    v36 = (OB_stVec_010201A0 *)(this->controlPoints.end - v36); /*0x786811*/
  v37 = (unsigned int)&v36[0xFFFFFFFF].size + 3; /*0x786813*/
  v38 = this->controlPoints.begin; /*0x786816*/
  if ( !v38 || v37 >= this->controlPoints.end - v38 ) /*0x786835*/
    _invalid_parameter_noinfo(); /*0x786837*/
  v39 = &this->controlPoints.begin[v37]; /*0x786846*/
  v40 = p_evenlySpacedPoints->begin; /*0x786849*/
  if ( !v40 || v46 >= (p_evenlySpacedPoints->end - v40) / 0x18 ) /*0x786868*/
    _invalid_parameter_noinfo(); /*0x78686a*/
  v41 = &p_evenlySpacedPoints->begin[0x18 * v46]; /*0x786877*/
  *(float *)v41 = v39->data[0]; /*0x78687a*/
  *((_DWORD *)v41 + 1) = LODWORD(v39->data[1]); /*0x78687f*/
  *((_DWORD *)v41 + 2) = LODWORD(v39->data[2]); /*0x786885*/
  *((_DWORD *)v41 + 3) = LODWORD(v39->data[3]); /*0x78688b*/
  *((_DWORD *)v41 + 4) = LODWORD(v39->data[4]); /*0x786891*/
  *((_DWORD *)v41 + 5) = v39->size; /*0x786897*/
  v42 = (char *)v54.begin; /*0x78689a*/
  v56 = 0xFFFFFFFF; /*0x7868a0*/
  if ( v54.begin ) /*0x7868a8*/
  {
    v43 = (char *)v54.end; /*0x7868aa*/
    if ( v54.begin != v54.end ) /*0x7868b0*/
    {
      do /*0x7868be*/
      {
        Shared_NoOpVirtual_60D0A0(v42); /*0x7868b4*/
        v42 += 0x18; /*0x7868b9*/
      }
      while ( v42 != v43 ); /*0x7868be*/
      v42 = (char *)v54.begin; /*0x7868c0*/
    }
    FormHeapFree((unsigned int)v42); /*0x7868c5*/
  }
}
