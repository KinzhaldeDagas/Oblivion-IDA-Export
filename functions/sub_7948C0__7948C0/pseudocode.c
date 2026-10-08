// Applies the optional Compute transform to stock indexed geometry.
void __thiscall OB_CIndexedGeometry_Transform_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        const OB_stTransform_010201A0 *transform)
{
  void *begin; // eax
  unsigned int v4; // ecx
  int v5; // ebx
  int v6; // ebp
  void *v7; // eax
  char *v8; // eax
  double v9; // st7
  float *v10; // eax
  double v11; // st7
  void *v12; // eax
  char *v13; // eax
  double v14; // st7
  float *v15; // eax
  double v16; // st7
  float v17; // [esp+4h] [ebp-24h]
  float v18; // [esp+4h] [ebp-24h]
  float v19; // [esp+8h] [ebp-20h]
  float v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+Ch] [ebp-1Ch]
  float v22; // [esp+Ch] [ebp-1Ch]
  float v23; // [esp+10h] [ebp-18h]
  float v24; // [esp+14h] [ebp-14h]
  float v25; // [esp+18h] [ebp-10h]
  float v26; // [esp+1Ch] [ebp-Ch]
  float v27; // [esp+20h] [ebp-8h]
  float v28; // [esp+24h] [ebp-4h]

  begin = this->vertexCoords.begin; /*0x7948c6*/
  if ( begin ) /*0x7948cb*/
    v4 = ((char *)this->vertexCoords.end - (char *)begin) >> 2; /*0x7948d6*/
  else
    v4 = 0; /*0x7948cd*/
  if ( (unsigned __int16)(v4 / 3) ) /*0x7948e2*/
  {
    v5 = 0; /*0x7948f7*/
    v6 = (unsigned __int16)(v4 / 3); /*0x7948f9*/
    do /*0x794a7e*/
    {
      v7 = this->vertexCoords.begin; /*0x794900*/
      if ( !v7 || !(((char *)this->vertexCoords.end - (char *)v7) >> 2) ) /*0x79490c*/
        _invalid_parameter_noinfo(v5, (int)this, (int)transform); /*0x794911*/
      v8 = (char *)this->vertexCoords.begin; /*0x794916*/
      v9 = *(float *)&v8[v5]; /*0x794919*/
      v10 = (float *)&v8[v5]; /*0x79491c*/
      v17 = v9; /*0x79491e*/
      v19 = v10[1]; /*0x794925*/
      v21 = v10[2]; /*0x79492c*/
      v23 = transform->m[8] * v21 + transform->m[0] * v17 + transform->m[4] * v19 + transform->m[0xC]; /*0x79495b*/
      v24 = transform->m[1] * v17 + transform->m[5] * v19 + transform->m[9] * v21 + transform->m[0xD]; /*0x794979*/
      v11 = v21 * transform->m[0xA] + v19 * transform->m[6] + v17 * transform->m[2] + transform->m[0xE]; /*0x794996*/
      *v10 = v23; /*0x794999*/
      v10[1] = v24; /*0x79499b*/
      v25 = v11; /*0x79499e*/
      v10[2] = v25; /*0x7949a6*/
      if ( this->vertexWeighting ) /*0x7949a9*/
      {
        v12 = this->originalVertexCoords.begin; /*0x7949b3*/
        if ( v12 ) /*0x7949b8*/
        {
          if ( ((char *)this->originalVertexCoords.end - (char *)v12) >> 2 ) /*0x7949c6*/
          {
            v13 = (char *)this->originalVertexCoords.begin; /*0x7949e5*/
            v14 = *(float *)&v13[v5]; /*0x7949e8*/
            v15 = (float *)&v13[v5]; /*0x7949eb*/
            v18 = v14; /*0x7949ed*/
            v20 = v15[1]; /*0x7949f4*/
            v22 = v15[2]; /*0x7949fb*/
            v26 = transform->m[8] * v22 + transform->m[0] * v18 + transform->m[4] * v20 + transform->m[0xC]; /*0x794a2a*/
            v27 = transform->m[1] * v18 + transform->m[5] * v20 + transform->m[9] * v22 + transform->m[0xD]; /*0x794a48*/
            v16 = v22 * transform->m[0xA] + v20 * transform->m[6] + v18 * transform->m[2] + transform->m[0xE]; /*0x794a65*/
            *v15 = v26; /*0x794a68*/
            v15[1] = v27; /*0x794a6a*/
            v28 = v16; /*0x794a6d*/
            v15[2] = v28; /*0x794a75*/
          }
        }
      }
      v5 += 0xC; /*0x794a78*/
      --v6; /*0x794a7b*/
    }
    while ( v6 ); /*0x794a7e*/
  }
}
