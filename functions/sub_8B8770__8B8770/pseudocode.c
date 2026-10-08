void __thiscall sub_8B8770(__m128 *this, float a2)
{
  double v2; // st7
  __int8 v4; // al
  double v5; // st6
  double v6; // rt0
  double v7; // st6
  double v8; // st7
  float v9; // [esp+0h] [ebp-8h]
  float v10; // [esp+Ch] [ebp+4h]
  float v11; // [esp+Ch] [ebp+4h]

  v2 = flt_A96CFC; /*0x8b8770*/
  v4 = this->m128_i8[8]; /*0x8b8779*/
  *((float *)this + 0x14) = flt_A96CFC; /*0x8b877c*/
  if ( (v4 & 8) != 0 ) /*0x8b8784*/
  {
    if ( *((_DWORD *)this + 0xC) ) /*0x8b8786*/
    {
      v5 = a2; /*0x8b879b*/
      if ( -flt_A7DEB4 == *((float *)this + 8) /*0x8b87bd*/
        || (v10 = v5 - *((float *)this + 8), *((float *)this + 0x14) = v10, v10 >= 0.0) )
      {
        v8 = v5; /*0x8b87c6*/
      }
      else
      {
        v6 = v5; /*0x8b87bf*/
        v7 = v2; /*0x8b87bf*/
        v8 = v6; /*0x8b87bf*/
        *((float *)this + 0x14) = v7; /*0x8b87c1*/
      }
      v9 = v8; /*0x8b87ce*/
      v11 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(this->m128_i32[0] + 0x64))(LODWORD(v9)); /*0x8b87d5*/
      sub_8B8380(this); /*0x8b87d9*/
      if ( *((float *)this + 6) == v11 ) /*0x8b87ec*/
        this->m128_i16[4] &= ~8u; /*0x8b87ee*/
    }
  }
}
