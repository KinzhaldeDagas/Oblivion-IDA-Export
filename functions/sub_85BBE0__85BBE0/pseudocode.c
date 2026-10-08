// Pass205: WaterShaderProperty constructor; initializes pass-data block +0x6C..+0x84 with default flags and floats.
BSShaderProperty *__thiscall sub_85BBE0(BSShaderProperty *this)
{
  BSShaderProperty::BSShaderProperty(this); /*0x85bbe3*/
  *((_DWORD *)this + 0x1B) = 0; /*0x85bbec*/
  *((_BYTE *)this + 0x70) = 0; /*0x85bbef*/
  this->vtbl = &WaterShaderProperty::`vftable'; /*0x85bbf2*/
  LOBYTE(OB_ShaderConstantStorage_010201A0[0x68C]) = 0; /*0x85bbf8*/
  *((float *)this + 0x1F) = 1.0; /*0x85bbfd*/
  *((_BYTE *)this + 0x71) = 0; /*0x85bc02*/
  *((_BYTE *)this + 0x72) = 0; /*0x85bc05*/
  *((float *)this + 0x20) = 0.0; /*0x85bc08*/
  *((_DWORD *)this + 0x1E) = 0; /*0x85bc0e*/
  *((_DWORD *)this + 0x1D) = 0; /*0x85bc11*/
  *((_WORD *)this + 0x42) = 0; /*0x85bc14*/
  return this; /*0x85bc22*/
}
