WaterShader *__thiscall WaterShader::WaterShader(WaterShader *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  UInt32 v3; // edi
  UInt32 v4; // edi
  UInt32 v5; // edi
  UInt32 v6; // edi
  bool v7; // cc
  WaterShader *result; // eax

  BSShader::BSShader(&this->super); /*0x7dc9cd*/
  this->super.__vftable = (BSShaderVtbl *)&WaterShader::`vftable'; /*0x7dc9ea*/
  ArrayConstructor( /*0x7dc9f0*/
    (char *)this->Unk07C,
    4u,
    0x10,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  this->Vertex[0] = 0; /*0x7dc9f5*/
  this->Vertex[1] = 0; /*0x7dc9fb*/
  ArrayConstructor( /*0x7dca1b*/
    (char *)this->Pixel,
    4u,
    0x10,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  this->Unk104[0] = 0; /*0x7dca20*/
  this->Unk104[1] = 0; /*0x7dca26*/
  this->Unk104[2] = 0; /*0x7dca2c*/
  this->Unk104[3] = 0; /*0x7dca32*/
  this->Unk104[4] = 0; /*0x7dca38*/
  v2 = InterlockedDecrement; /*0x7dca3e*/
  this->super.member.super.IsInitialized = 1; /*0x7dca44*/
  v3 = this->Unk104[1]; /*0x7dca48*/
  if ( v3 ) /*0x7dca55*/
  {
    if ( !v2((volatile LONG *)(v3 + 4)) ) /*0x7dca5b*/
      (**(void (__thiscall ***)(UInt32, int))v3)(v3, 1); /*0x7dca6d*/
    this->Unk104[1] = 0; /*0x7dca6f*/
  }
  v4 = this->Unk104[3]; /*0x7dca75*/
  if ( v4 ) /*0x7dca7d*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x7dca83*/
      (**(void (__thiscall ***)(UInt32, int))v4)(v4, 1); /*0x7dca95*/
    this->Unk104[3] = 0; /*0x7dca97*/
  }
  v5 = this->Unk104[0]; /*0x7dca9d*/
  if ( v5 ) /*0x7dcaa5*/
  {
    if ( !v2((volatile LONG *)(v5 + 4)) ) /*0x7dcaab*/
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1); /*0x7dcabd*/
    this->Unk104[0] = 0; /*0x7dcabf*/
  }
  v6 = this->Unk104[4]; /*0x7dcac5*/
  if ( v6 ) /*0x7dcacd*/
  {
    if ( !v2((volatile LONG *)(v6 + 4)) ) /*0x7dcad3*/
      (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1); /*0x7dcae5*/
    this->Unk104[4] = 0; /*0x7dcae7*/
  }
  v7 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le <= 2; /*0x7dcaed*/
  OB_ShaderConstantStorage_010201A0[0x14] = 0.0; /*0x7dcaf6*/
  MEMORY[0xB45DCC] = this; /*0x7dcafc*/
  OB_ShaderConstantStorage_010201A0[0x15] = 0.0; /*0x7dcb02*/
  unk_B45DBB = 0; /*0x7dcb08*/
  OB_ShaderConstantStorage_010201A0[0x10] = 0.0; /*0x7dcb0e*/
  unk_B45DC0 = 0; /*0x7dcb14*/
  OB_ShaderConstantStorage_010201A0[0x11] = 0.0; /*0x7dcb1a*/
  OB_ShaderConstantStorage_010201A0[0x2C] = 0.0; /*0x7dcb40*/
  OB_ShaderConstantStorage_010201A0[0x2D] = 0.0; /*0x7dcb4e*/
  OB_ShaderConstantStorage_010201A0[0x2E] = 0.0; /*0x7dcb60*/
  OB_ShaderConstantStorage_010201A0[0x2F] = 0.0; /*0x7dcb69*/
  OB_ShaderConstantStorage_010201A0[0x34] = 0.0; /*0x7dcb73*/
  OB_ShaderConstantStorage_010201A0[0x35] = 0.0; /*0x7dcb7d*/
  OB_ShaderConstantStorage_010201A0[0x36] = 0.0; /*0x7dcb82*/
  OB_ShaderConstantStorage_010201A0[0x37] = 0.0; /*0x7dcb88*/
  result = this; /*0x7dcb8e*/
  if ( v7 ) /*0x7dcb90*/
    unk_B45DB9 = 0; /*0x7dcb92*/
  return result; /*0x7dcb98*/
}
