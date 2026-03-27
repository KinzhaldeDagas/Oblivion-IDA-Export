WaterShaderDisplacement *__thiscall WaterShaderDisplacement::WaterShaderDisplacement(WaterShaderDisplacement *this)
{
  double v2; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st6
  double v7; // st5

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this);
  *(_DWORD *)this = &WaterShaderDisplacement::`vftable';
  ArrayConstructor(
    (char *)this + 0xB4,
    4u,
    8,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0xD4,
    4u,
    8,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  *((_DWORD *)this + 0x40) = 0;
  *((_DWORD *)this + 0x41) = 0;
  *((_DWORD *)this + 0x42) = 0;
  *((_DWORD *)this + 0x43) = 0;
  *((_BYTE *)this + 0x20) = 1;
  dword_B45F54 = (int)this;
  *((_DWORD *)this + 0x3D) = 0;
  byte_B3FF00 = 0;
  *((float *)this + 0x45) = 0.0;
  v2 = flt_A2FAAC;
  *((float *)this + 0x46) = flt_A2FAAC;
  *((float *)this + 0x47) = v2;
  *((float *)this + 0x48) = 1.0;
  v4 = flt_A43328;
  *((float *)this + 0x49) = flt_A43328;
  v5 = v4;
  flt_B45F44 = 0.0;
  WaterShader_Rainforce = v2;
  v6 = flt_A3F424;
  WaterShader_RainVelocity = flt_A3F424;
  v7 = flt_A47E70;
  WaterShader_RainFalloff = flt_A47E70;
  WaterShader_RainSize = flt_A34BA0;
  WaterShader_DisplaceForce = flt_A47E6C;
  WaterShader_DisplayVelocity = v6;
  WaterShader_DisplaceFallOff = v7;
  flt_B45F74 = v5;
  *((_DWORD *)this + 0x24) = 0;
  return this;
}
