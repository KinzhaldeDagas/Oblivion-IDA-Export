// Builds one branch cross-section from compact branch vertex position/radius/transform, emits diffuse texcoords, tangent/binormal, coord, packed color, and optional primary wind data into CIndexedGeometry.
int __thiscall OB_CBranch_BuildCrossSection_010201A0(
        _DWORD *this,
        float *a2,
        float a3,
        float a4,
        int a5,
        OB_CIndexedGeometry_010201A0 *a6,
        float *a7,
        float windWeight,
        unsigned __int8 windMatrixIndex,
        float a10,
        int a11)
{
  double v12; // st7
  int result; // eax
  double v14; // st7
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  double v18; // st4
  bool v19; // zf
  float v20; // [esp+18h] [ebp-64h]
  float v21; // [esp+1Ch] [ebp-60h]
  float diffuseST[2]; // [esp+20h] [ebp-5Ch] BYREF
  double v23; // [esp+28h] [ebp-54h]
  float v24; // [esp+30h] [ebp-4Ch]
  float v25; // [esp+34h] [ebp-48h]
  float v26; // [esp+38h] [ebp-44h]
  float tangent; // [esp+3Ch] [ebp-40h] BYREF
  float v28; // [esp+40h] [ebp-3Ch]
  float v29; // [esp+44h] [ebp-38h]
  float coord; // [esp+48h] [ebp-34h] BYREF
  float v31; // [esp+4Ch] [ebp-30h]
  float v32; // [esp+50h] [ebp-2Ch]
  float v33; // [esp+54h] [ebp-28h]
  float v34; // [esp+58h] [ebp-24h]
  float v35; // [esp+5Ch] [ebp-20h]
  float binormal[3]; // [esp+60h] [ebp-1Ch] BYREF
  float rgba[4]; // [esp+6Ch] [ebp-10h] BYREF
  float v38; // [esp+88h] [ebp+Ch]
  float v39; // [esp+88h] [ebp+Ch]
  float v40; // [esp+88h] [ebp+Ch]
  float v41; // [esp+88h] [ebp+Ch]
  float v42; // [esp+88h] [ebp+Ch]
  float v43; // [esp+88h] [ebp+Ch]
  float v44; // [esp+88h] [ebp+Ch]
  int i; // [esp+88h] [ebp+Ch]
  int v46; // [esp+8Ch] [ebp+10h]
  int v47; // [esp+8Ch] [ebp+10h]
  int v48; // [esp+A0h] [ebp+24h]
  float v49; // [esp+A4h] [ebp+28h]
  float v50; // [esp+A4h] [ebp+28h]
  int v51; // [esp+A4h] [ebp+28h]

  v20 = 0.0; /*0x78febc*/
  v21 = 1.0 / (double)a5; /*0x78fece*/
  if ( unk_B429B8 ) /*0x78feb5*/
  {
    v38 = a4 + (1.0 - a4) * a3; /*0x78feee*/
    if ( !a11 ) /*0x78fef2*/
      v38 = v38 * v38; /*0x78fefa*/
    v12 = a3; /*0x78ff0c*/
    v39 = 1.0 - *(float *)(unk_B429B8 + 8) + *(float *)(unk_B429B8 + 8) * v38; /*0x78ff0e*/
  }
  else
  {
    v12 = a3; /*0x78ff14*/
    v39 = 1.0; /*0x78ff16*/
  }
  result = a5; /*0x78ff1e*/
  rgba[2] = v39; /*0x78ff24*/
  rgba[1] = v39; /*0x78ff28*/
  rgba[0] = v39; /*0x78ff2c*/
  rgba[3] = 1.0; /*0x78ff30*/
  if ( a5 >= 0 ) /*0x78ff34*/
  {
    v23 = v12 + a10; /*0x78ff50*/
    v48 = a5 + 1; /*0x78ff58*/
    while ( 1 ) /*0x78ff80*/
    {
      *(float *)&v46 = flt_B2B714 * v20; /*0x78ff80*/
      v40 = v20 * *a7; /*0x78ff89*/
      diffuseST[0] = v12 * a7[2] + v40; /*0x78ff9c*/
      diffuseST[1] = a7[1] * v23; /*0x78ffac*/
      OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(a6, diffuseST, 0xFFFFFFFF); /*0x78ffb0*/
      v41 = cos(*(float *)&v46); /*0x78ffc1*/
      v49 = v41; /*0x78ffcf*/
      v42 = sin(*(float *)&v46); /*0x78ffe2*/
      v24 = a2[0xD] * v42 + v49 * a2[0xA]; /*0x790015*/
      v25 = a2[0xB] * v49 + v42 * a2[0xE]; /*0x790025*/
      v26 = v49 * a2[0xC] + v42 * a2[0xF]; /*0x790033*/
      v43 = flt_B2B70C + *(float *)&v46; /*0x790044*/
      v50 = cos(v43); /*0x790057*/
      v44 = sin(v43); /*0x790078*/
      tangent = a2[0xD] * v44 + v50 * a2[0xA]; /*0x7900ab*/
      v28 = a2[0xB] * v50 + v44 * a2[0xE]; /*0x7900bb*/
      v29 = v50 * a2[0xC] + v44 * a2[0xF]; /*0x7900d0*/
      OB_CIndexedGeometry_AddVertexTangent_010201A0(a6, &tangent); /*0x7900d4*/
      binormal[0] = v28 * v26 - v29 * v25; /*0x790100*/
      binormal[1] = v29 * v24 - v26 * tangent; /*0x79011a*/
      binormal[2] = v25 * tangent - v28 * v24; /*0x790124*/
      OB_CIndexedGeometry_AddVertexBinormal_010201A0(a6, binormal); /*0x790128*/
      v14 = 0.0; /*0x79012d*/
      v15 = 0; /*0x79012f*/
      for ( i = 0; ; i += 0x18 ) /*0x790131*/
      {
        v16 = *(this + 0xD); /*0x790138*/
        *(float *)&v51 = v14; /*0x79013b*/
        if ( !v16 || v15 >= (*(this + 0xE) - v16) / 0x18 ) /*0x79015e*/
          break; /*0x79015e*/
        v17 = *(this + 0xD); /*0x790160*/
        if ( !v17 || v15 >= (*(this + 0xE) - v17) / 0x18 ) /*0x79017f*/
          _invalid_parameter_noinfo(); /*0x790181*/
        v14 = OB_CBranchFlare_Distance_010201A0((float *)(i + *(this + 0xD)), *(float *)&v46, a3) + *(float *)&v51; /*0x7901aa*/
        ++v15; /*0x7901b1*/
      }
      *(float *)&v47 = *(float *)&v51 + dbl_A2F928; /*0x7901ce*/
      coord = a2[6] * v24 + a2[3]; /*0x7901e7*/
      v31 = a2[6] * v25 + a2[4]; /*0x7901fd*/
      v32 = a2[6] * v26 + a2[5]; /*0x790213*/
      if ( *(float *)&v47 != 1.0 ) /*0x790229*/
      {
        v33 = v24 * a2[6] * *(float *)&v47 + a2[3]; /*0x79023b*/
        v18 = a2[6]; /*0x790243*/
        coord = v33; /*0x790246*/
        v34 = v25 * v18 * *(float *)&v47 + a2[4]; /*0x790257*/
        v31 = v34; /*0x79025f*/
        v35 = *(float *)&v47 * (v26 * a2[6]) + a2[5]; /*0x79026b*/
        v32 = v35; /*0x790273*/
      }
      OB_CIndexedGeometry_AddVertexCoord_010201A0(a6, &coord); /*0x790288*/
      OB_CIndexedGeometry_AddVertexColor_010201A0(a6, rgba); /*0x790294*/
      if ( a6->vertexWeighting ) /*0x790299*/
        OB_CIndexedGeometry_AddVertexWind_010201A0(a6, windWeight, windMatrixIndex); /*0x7902b4*/
      result = 1; /*0x7902bd*/
      ++a6->currentVertexWriteCounter; /*0x7902c6*/
      v19 = v48-- == 1; /*0x7902ca*/
      v20 = v21 + v20; /*0x7902d1*/
      if ( v19 ) /*0x7902d5*/
        break; /*0x7902d5*/
      v12 = a3; /*0x78ff61*/
    }
  }
  return result; /*0x7902df*/
}
