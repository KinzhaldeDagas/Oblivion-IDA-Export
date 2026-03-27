WaterShader *__thiscall WaterShader::WaterShader(WaterShader *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  UInt32 v3; // edi
  UInt32 v4; // edi
  UInt32 v5; // edi
  UInt32 v6; // edi
  bool v7; // cc
  WaterShader *result; // eax

  BSShader::BSShader(&this->super);
  this->super.__vftable = (BSShaderVtbl *)&WaterShader::`vftable';
  ArrayConstructor(
    this->Unk07C,
    4u,
    0x10,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  this->Vertex[0] = 0;
  this->Vertex[1] = 0;
  ArrayConstructor(
    this->Pixel,
    4u,
    0x10,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  this->Unk104[0] = 0;
  this->Unk104[1] = 0;
  this->Unk104[2] = 0;
  this->Unk104[3] = 0;
  this->Unk104[4] = 0;
  v2 = InterlockedDecrement;
  this->super.member.super.IsInitialized = 1;
  v3 = this->Unk104[1];
  if ( v3 )
  {
    if ( !v2((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v3)(v3, 1);
    this->Unk104[1] = 0;
  }
  v4 = this->Unk104[3];
  if ( v4 )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v4)(v4, 1);
    this->Unk104[3] = 0;
  }
  v5 = this->Unk104[0];
  if ( v5 )
  {
    if ( !v2((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1);
    this->Unk104[0] = 0;
  }
  v6 = this->Unk104[4];
  if ( v6 )
  {
    if ( !v2((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1);
    this->Unk104[4] = 0;
  }
  v7 = ShaderPackage <= 2;
  flt_B45E64 = 0.0;
  waterShader = this;
  flt_B45E68 = 0.0;
  byte_B45DBB = 0;
  WaterShader_ScrollX = 0.0;
  byte_B45DC0 = 0;
  WaterShader_ScrollY = 0.0;
  *(float *)&dword_B45EC4 = 0.0;
  *(float *)&dword_B45EC8 = 0.0;
  *(float *)&dword_B45ECC = 0.0;
  *(float *)&dword_B45ED0 = 0.0;
  *(float *)&dword_B45EE4 = 0.0;
  *(float *)&dword_B45EE8 = 0.0;
  flt_B45EEC = 0.0;
  flt_B45EF0 = 0.0;
  result = this;
  if ( v7 )
    byte_B45DB9 = 0;
  return result;
}
