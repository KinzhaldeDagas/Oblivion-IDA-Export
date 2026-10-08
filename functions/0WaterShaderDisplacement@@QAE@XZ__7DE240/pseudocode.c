WaterShaderDisplacement *__thiscall WaterShaderDisplacement::WaterShaderDisplacement(WaterShaderDisplacement *this)
{
  double v2; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st6
  double v7; // st5

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7de269*/
  *(_DWORD *)this = &WaterShaderDisplacement::`vftable'; /*0x7de289*/
  ArrayConstructor( /*0x7de28f*/
    (char *)this + 0xB4,
    4u,
    8,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x7de2ae*/
    (char *)this + 0xD4,
    4u,
    8,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x3E) = 0; /*0x7de2b5*/
  *((_DWORD *)this + 0x3F) = 0; /*0x7de2bb*/
  *((_DWORD *)this + 0x40) = 0; /*0x7de2c1*/
  *((_DWORD *)this + 0x41) = 0; /*0x7de2c7*/
  *((_DWORD *)this + 0x42) = 0; /*0x7de2cd*/
  *((_DWORD *)this + 0x43) = 0; /*0x7de2d3*/
  *((_BYTE *)this + 0x20) = 1; /*0x7de2d9*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x50]) = this; /*0x7de2dd*/
  *((_DWORD *)this + 0x3D) = 0; /*0x7de2e3*/
  unk_B3FF00 = 0; /*0x7de2e9*/
  *((float *)this + 0x45) = 0.0; /*0x7de2ef*/
  v2 = kFaceEarNormalMatchRadius; /*0x7de2f5*/
  *((float *)this + 0x46) = kFaceEarNormalMatchRadius; /*0x7de2fd*/
  *((float *)this + 0x47) = v2; /*0x7de303*/
  *((float *)this + 0x48) = 1.0; /*0x7de30b*/
  v4 = flt_A43328; /*0x7de311*/
  *((float *)this + 0x49) = flt_A43328; /*0x7de317*/
  v5 = v4; /*0x7de31d*/
  OB_ShaderConstantStorage_010201A0[0x4C] = 0.0; /*0x7de31f*/
  OB_ShaderConstantStorage_010201A0[0x51] = v2; /*0x7de325*/
  v6 = flt_A3F424; /*0x7de32b*/
  OB_ShaderConstantStorage_010201A0[0x52] = flt_A3F424; /*0x7de331*/
  v7 = flt_A47E70; /*0x7de337*/
  OB_ShaderConstantStorage_010201A0[0x53] = flt_A47E70; /*0x7de33d*/
  OB_ShaderConstantStorage_010201A0[0x54] = flt_A34BA0; /*0x7de349*/
  OB_ShaderConstantStorage_010201A0[0x55] = flt_A47E6C; /*0x7de355*/
  OB_ShaderConstantStorage_010201A0[0x56] = v6; /*0x7de35d*/
  OB_ShaderConstantStorage_010201A0[0x57] = v7; /*0x7de363*/
  OB_ShaderConstantStorage_010201A0[0x58] = v5; /*0x7de369*/
  *((_DWORD *)this + 0x24) = 0; /*0x7de36f*/
  return this; /*0x7de375*/
}
