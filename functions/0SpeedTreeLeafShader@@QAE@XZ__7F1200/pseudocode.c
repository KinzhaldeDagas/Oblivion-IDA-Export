// SpeedTreeLeafShader ctor: BSShader base, four vertex-shader refs at +0x37C, two pixel-shader refs at +0x38C, pass +0x394, clears 0x300-byte leaf constant block and initializes global leaf wind/color scalars.
SpeedTreeLeafShader *__thiscall SpeedTreeLeafShader::SpeedTreeLeafShader(SpeedTreeLeafShader *this)
{
  BSShader::BSShader((BSShader *)this); /*0x7f122a*/
  *(_DWORD *)this = &SpeedTreeLeafShader::`vftable'; /*0x7f124c*/
  ArrayConstructor( /*0x7f1252*/
    (char *)this + 0x37C,
    4u,
    4,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x7f1271*/
    (char *)this + 0x38C,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0xE5) = 0; /*0x7f1281*/
  _memset((int)this + 0x7C, 0, 0x300u); /*0x7f128b*/
  OB_ShaderConstantStorage_010201A0[0x251] = 1.0; /*0x7f12b5*/
  OB_ShaderConstantStorage_010201A0[0x254] = 1.0; /*0x7f12c6*/
  OB_ShaderConstantStorage_010201A0[0x252] = 1.0; /*0x7f12d5*/
  OB_ShaderConstantStorage_010201A0[0x253] = 1.0; /*0x7f12e3*/
  OB_ShaderConstantStorage_010201A0[0x257] = 1.0; /*0x7f12f1*/
  OB_ShaderConstantStorage_010201A0[0x255] = 1.0; /*0x7f12fe*/
  OB_ShaderConstantStorage_010201A0[0x256] = 1.0; /*0x7f130c*/
  OB_ShaderConstantStorage_010201A0[0x25A] = 0.0; /*0x7f131a*/
  OB_ShaderConstantStorage_010201A0[0x258] = 1.0; /*0x7f1327*/
  OB_ShaderConstantStorage_010201A0[0x259] = 0.0; /*0x7f1335*/
  OB_ShaderConstantStorage_010201A0[0x25D] = 0.0; /*0x7f1343*/
  OB_ShaderConstantStorage_010201A0[0x25B] = 0.0; /*0x7f134c*/
  OB_ShaderConstantStorage_010201A0[0x25C] = 0.0; /*0x7f1356*/
  OB_ShaderConstantStorage_010201A0[0x260] = 0.0; /*0x7f1360*/
  OB_ShaderConstantStorage_010201A0[0x25E] = 0.0; /*0x7f1365*/
  OB_ShaderConstantStorage_010201A0[0x25F] = 0.0; /*0x7f136b*/
  return this; /*0x7f1373*/
}
