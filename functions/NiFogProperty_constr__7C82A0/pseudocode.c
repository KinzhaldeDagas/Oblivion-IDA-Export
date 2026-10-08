// Fog decode: constructs full BSFogProperty. Base NiFogProperty fields use default color; extension adds fogStart +0x2C and fogEnd +0x30.
NiObjectNET *__thiscall NiFogProperty_constr(NiObjectNET *this)
{
  double v2; // st7
  float v3; // edx
  double v4; // st7

  NiObjectNET::NiObjectNET(this); /*0x7c82a3*/
  this->vtbl = (NiObjectVtbl **)&NiFogProperty::`vftable'; /*0x7c82aa*/
  *((float *)this + 8) = 0.0; /*0x7c82b0*/
  *((float *)this + 9) = 0.0; /*0x7c82b3*/
  *((float *)this + 0xA) = 0.0; /*0x7c82b6*/
  *((_WORD *)this + 0xC) = 0; /*0x7c82bb*/
  *((float *)this + 7) = 1.0; /*0x7c82c1*/
  v2 = flt_A905E8; /*0x7c82c4*/
  *((float *)this + 8) = MEMORY[0xB3F9B0][0x38];// Fog decode: BSFogProperty constructor default color.r from B3FA90. /*0x7c82cf*/
  *((float *)this + 9) = MEMORY[0xB3F9B0][0x39];// Fog decode: BSFogProperty constructor default color.g from B3FA94. /*0x7c82d8*/
  v3 = MEMORY[0xB3F9B0][0x3A];                  // Fog decode: BSFogProperty constructor default color.b from B3FA98. /*0x7c82db*/
  *((float *)this + 0xB) = v2;                  // Fog decode: BSFogProperty constructor initializes fogStart at +0x2C. /*0x7c82e1*/
  v4 = flt_A3F4F0; /*0x7c82e4*/
  *((float *)this + 0xA) = v3; /*0x7c82ea*/
  *((float *)this + 0xC) = v4;                  // Fog decode: BSFogProperty constructor initializes fogEnd at +0x30. /*0x7c82ed*/
  this->vtbl = (NiObjectVtbl **)&BSFogProperty::`vftable';// Fog decode: switches constructed object vtable to BSFogProperty after initializing NiFogProperty base and BS fog extension fields. /*0x7c82f0*/
  return this; /*0x7c82f8*/
}
