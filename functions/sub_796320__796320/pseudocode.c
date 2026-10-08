//
//
// [2026-10-02 comparative audit] Fallout AddVertexTexCoord0 0x82828980 independently matches exported T = textureFlip ? -inputT : inputT; retained original coordinates remain unchanged. RT4.1 IndexedGeometry.cpp:787 generalizes this by texture layer. These routines neither add 1 nor clamp T; any plugin D3D rebasing/clamp is a separate rendering policy, not the native export contract. No UV policy change made in this bounds pass.
//
// [2026-10-03 UV domain correction] Verified retained local UV vector is wrapper+C8, begin/end/cap at+CC/+D0/+D4 and stores unflipped source values. Exported diffuse UV vector at+B8 stores GetTextureFlip ? -T : T. Plugin now owns both final and retained streams before transient deletion. Individual-map D3D binding uses retained U and (flip ?1-T:T), preserving the established origin policy without clamping tiled values. It no longer blindly adds1 to every final UV.
void __thiscall OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        const float *diffuseST,
        __int16 mapIndex)
{
  int v3; // edi
  float *begin; // ecx
  OB_stVectorFloat_010201A0 *p_diffuseTexcoords; // ebp
  unsigned int v7; // eax
  float *v8; // ecx
  int v9; // eax
  unsigned __int8 *v10; // edx
  unsigned __int8 *v11; // eax
  float *v12; // edx
  int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned int currentVertexWriteCounter; // edi
  float *v16; // ecx
  unsigned int v17; // edi
  const float *v18; // ebx
  float *v19; // ecx
  unsigned int v20; // edi
  float *v21; // ecx
  unsigned int v22; // edi
  bool TextureFlip; // al
  double v24; // st7
  float *v25; // ecx
  unsigned int v26; // esi
  float mapIndexa; // [esp+1Ch] [ebp+8h]

  begin = this->diffuseTexcoords.begin; /*0x796324*/
  p_diffuseTexcoords = &this->diffuseTexcoords; /*0x79632c*/
  if ( begin ) /*0x796332*/
    v7 = this->diffuseTexcoords.end - begin; /*0x79633d*/
  else
    v7 = 0; /*0x796334*/
  if ( this->currentVertexWriteCounter == v7 >> 1 ) /*0x79634f*/
  {
    v8 = this->diffuseTexcoords.begin; /*0x796355*/
    if ( v8 ) /*0x79635a*/
      v9 = this->diffuseTexcoords.end - v8; /*0x796365*/
    else
      v9 = 0; /*0x79635c*/
    FaceGenFloatVector_ResizeFill( /*0x796374*/
      (OB_stVector4_010201A0 *)&this->diffuseTexcoords,
      v3,
      v9 + 2,
      COERCE_UNSIGNED_INT(0.0));
    if ( mapIndex <= (__int16)0xFFFFFFFF ) /*0x79637d*/
      goto LABEL_29; /*0x79637d*/
    if ( this->retainTexcoords ) /*0x796383*/
    {
      v10 = this->retainedMapIndices.begin; /*0x796388*/
      if ( v10 ) /*0x796396*/
        v11 = (unsigned __int8 *)(this->retainedMapIndices.end - v10); /*0x79639f*/
      else
        v11 = 0; /*0x796398*/
      OB_stVectorByte_ResizeFill_010201A0(&this->retainedMapIndices, (unsigned int)(v11 + 1), 0); /*0x7963a7*/
      v12 = this->retainedDiffuseTexcoords.begin; /*0x7963ac*/
      if ( v12 ) /*0x7963ba*/
        v13 = this->retainedDiffuseTexcoords.end - v12; /*0x7963c5*/
      else
        v13 = 0; /*0x7963bc*/
      FaceGenFloatVector_ResizeFill( /*0x7963d2*/
        (OB_stVector4_010201A0 *)&this->retainedDiffuseTexcoords,
        v3,
        v13 + 2,
        COERCE_UNSIGNED_INT(0.0));
    }
  }
  if ( mapIndex <= (__int16)0xFFFFFFFF || !this->retainTexcoords ) /*0x7963e1*/
  {
LABEL_29:
    v18 = diffuseST; /*0x796479*/
    goto LABEL_30; /*0x796479*/
  }
  v14 = this->retainedMapIndices.begin; /*0x7963ea*/
  currentVertexWriteCounter = this->currentVertexWriteCounter; /*0x7963f2*/
  if ( !v14 || currentVertexWriteCounter >= this->retainedMapIndices.end - v14 ) /*0x796402*/
    _invalid_parameter_noinfo(); /*0x796404*/
  this->retainedMapIndices.begin[currentVertexWriteCounter] = mapIndex; /*0x79640f*/
  v16 = this->retainedDiffuseTexcoords.begin; /*0x796416*/
  v17 = 2 * this->currentVertexWriteCounter; /*0x79641c*/
  if ( !v16 || v17 >= this->retainedDiffuseTexcoords.end - v16 ) /*0x79642f*/
    _invalid_parameter_noinfo(); /*0x796431*/
  v18 = diffuseST; /*0x796436*/
  this->retainedDiffuseTexcoords.begin[v17] = *diffuseST; /*0x796442*/
  v19 = this->retainedDiffuseTexcoords.begin; /*0x796449*/
  v20 = 2 * this->currentVertexWriteCounter + 1; /*0x796451*/
  if ( !v19 || v20 >= this->retainedDiffuseTexcoords.end - v19 ) /*0x796464*/
    _invalid_parameter_noinfo(); /*0x796466*/
  this->retainedDiffuseTexcoords.begin[v20] = diffuseST[1]; /*0x796474*/
LABEL_30:
  v21 = this->diffuseTexcoords.begin; /*0x79647d*/
  v22 = 2 * this->currentVertexWriteCounter; /*0x796484*/
  if ( !v21 || v22 >= this->diffuseTexcoords.end - v21 ) /*0x796494*/
    _invalid_parameter_noinfo(); /*0x796496*/
  this->diffuseTexcoords.begin[v22] = *v18; /*0x7964a0*/
  TextureFlip = CSpeedTreeRT__GetTextureFlip(); // CIndexedGeometry diffuse UV insertion uses the same global texture-flip accessor; with Oblivion's startup value true, stored T is -inputT while retained original CAD texcoords remain unflipped. /*0x7964a3*/
  v24 = v18[1]; /*0x7964aa*/
  if ( TextureFlip ) /*0x7964ad*/
    v24 = -v24; /*0x7964af*/
  v25 = this->diffuseTexcoords.begin; /*0x7964b9*/
  v26 = 2 * this->currentVertexWriteCounter + 1; /*0x7964bf*/
  if ( !v25 || v26 >= p_diffuseTexcoords->end - v25 ) /*0x7964d0*/
    _invalid_parameter_noinfo(); /*0x7964d2*/
  mapIndexa = v24; /*0x7964b5*/
  p_diffuseTexcoords->begin[v26] = mapIndexa; /*0x7964de*/
}
