// Oblivion stBezierSpline::AddControlPoint. Builds 2D point/tangent stVecs, normalizes the tangent, appends prior outgoing/current incoming cubic-Bezier controls to splinePoints, then appends the point, tangent, and tangent length. Shipped compact layout: controlPoints@0x0C, tangents@0x1C, lengths@0x2C, splinePoints@0x4C. Binary behavior matches RT4.1 IdvSpline.cpp after observation.
void __thiscall OB_StBezierSpline_AddControlPoint_010201A0(
        OB_stBezierSpline_010201A0 *this,
        const float *point,
        const float *tangent,
        float tangentLength)
{
  int v4; // edi
  double v6; // st7
  void *begin; // eax
  void *v8; // eax
  int v9; // ebx
  void *v10; // ecx
  unsigned int v11; // ebx
  void *v12; // eax
  int v13; // edi
  void *v14; // eax
  OB_stVec_010201A0 *v15; // eax
  OB_stVec_010201A0 *v16; // eax
  OB_stVec_010201A0 *v17; // eax
  float x; // [esp+0h] [ebp-88h]
  float y; // [esp+4h] [ebp-84h]
  OB_stVec_010201A0 v20; // [esp+1Ch] [ebp-6Ch] BYREF
  OB_stVec_010201A0 v21; // [esp+34h] [ebp-54h] BYREF
  OB_stVec_010201A0 v22; // [esp+4Ch] [ebp-3Ch] BYREF
  OB_stVec_010201A0 result; // [esp+64h] [ebp-24h] BYREF
  unsigned int v24; // [esp+84h] [ebp-4h]
  float *pointa; // [esp+8Ch] [ebp+4h]
  OB_stVec_010201A0 *pointb; // [esp+8Ch] [ebp+4h]

  OB_stVec_ctor_xy_010201A0(&v21, *point, point[1]); /*0x786113*/
  y = tangent[1]; /*0x786125*/
  v6 = *tangent; /*0x78612d*/
  v24 = 0; /*0x78612f*/
  x = v6; /*0x78613a*/
  OB_stVec_ctor_xy_010201A0(&v20, x, y); /*0x78613d*/
  LOBYTE(v24) = 1; /*0x786146*/
  OB_stVec_Normalize_010201A0(&v20); /*0x78614b*/
  begin = this->controlPoints.begin; /*0x786150*/
  if ( begin ) /*0x786158*/
  {
    if ( ((char *)this->controlPoints.end - (char *)begin) / 0x18 ) /*0x786172*/
    {
      v8 = this->controlPoints.begin; /*0x78617a*/
      if ( v8 ) /*0x78617f*/
        v9 = ((char *)this->controlPoints.end - (char *)v8) / 0x18; /*0x786199*/
      else
        v9 = 0; /*0x786181*/
      v10 = this->controlPointTangentLengths.begin; /*0x78619b*/
      v11 = v9 - 1; /*0x78619e*/
      if ( !v10 || v11 >= ((char *)this->controlPointTangentLengths.end - (char *)v10) >> 2 ) /*0x7861af*/
        _invalid_parameter_noinfo(v11, v4, (int)this); /*0x7861b1*/
      v12 = this->controlPointTangents.begin; /*0x7861b9*/
      pointa = (float *)((char *)this->controlPointTangentLengths.begin + 4 * v11); /*0x7861c1*/
      if ( !v12 || v11 >= ((char *)this->controlPointTangents.end - (char *)v12) / 0x18 ) /*0x7861e2*/
        _invalid_parameter_noinfo(v11, v4, (int)this); /*0x7861e4*/
      v13 = 0x18 * v11; /*0x7861fc*/
      pointb = OB_stVec_Scale_010201A0( /*0x78620e*/
                 (const OB_stVec_010201A0 *)this->controlPointTangents.begin + v11,
                 &result,
                 *pointa);
      v14 = this->controlPoints.begin; /*0x786215*/
      LOBYTE(v24) = 2; /*0x78621a*/
      if ( !v14 || v11 >= ((char *)this->controlPoints.end - (char *)v14) / 0x18 ) /*0x786239*/
        _invalid_parameter_noinfo(v11, v13, (int)this); /*0x78623b*/
      v15 = OB_stVec_Add_010201A0((const OB_stVec_010201A0 *)((char *)this->controlPoints.begin + v13), &v22, pointb); /*0x786252*/
      LOBYTE(v24) = 3; /*0x78625d*/
      OB_stVector_stVec_PushBack_010201A0(&this->splinePoints.allocatorState, v15); /*0x786265*/
      LOBYTE(v24) = 2; /*0x78626e*/
      Shared_NoOpVirtual_60D0A0(&v22); /*0x786273*/
      LOBYTE(v24) = 1; /*0x78627c*/
      Shared_NoOpVirtual_60D0A0(&result); /*0x786281*/
      v16 = OB_stVec_Scale_010201A0(&v20, &v22, tangentLength); /*0x78629a*/
      LOBYTE(v24) = 4; /*0x7862ab*/
      v17 = OB_stVec_Subtract_010201A0(&v21, &result, v16); /*0x7862b2*/
      LOBYTE(v24) = 5; /*0x7862ba*/
      OB_stVector_stVec_PushBack_010201A0(&this->splinePoints.allocatorState, v17); /*0x7862c2*/
      LOBYTE(v24) = 4; /*0x7862cb*/
      Shared_NoOpVirtual_60D0A0(&result); /*0x7862cf*/
      LOBYTE(v24) = 1; /*0x7862d8*/
      Shared_NoOpVirtual_60D0A0(&v22); /*0x7862dd*/
    }
  }
  OB_stVector_stVec_PushBack_010201A0(&this->controlPoints.allocatorState, &v21); /*0x7862e9*/
  OB_stVector_stVec_PushBack_010201A0(&this->splinePoints.allocatorState, &v21); /*0x7862f6*/
  OB_stVector_stVec_PushBack_010201A0(&this->controlPointTangents.allocatorState, &v20); /*0x786303*/
  OB_stVector_float_PushBack_010201A0(&this->controlPointTangentLengths.allocatorState, (int *)&tangentLength); /*0x786313*/
  LOBYTE(v24) = 0; /*0x78631c*/
  Shared_NoOpVirtual_60D0A0(&v20); /*0x786321*/
  v24 = 0xFFFFFFFF; /*0x78632a*/
  Shared_NoOpVirtual_60D0A0(&v21); /*0x786332*/
}
