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

  v2 = flt_A96CFC;
  v4 = this->m128_i8[8];
  *((float *)this + 0x14) = flt_A96CFC;
  if ( (v4 & 8) != 0 )
  {
    if ( *((_DWORD *)this + 0xC) )
    {
      v5 = a2;
      if ( -flt_A7DEB4 == *((float *)this + 8)
        || (v10 = v5 - *((float *)this + 8), *((float *)this + 0x14) = v10, v10 >= 0.0) )
      {
        v8 = v5;
      }
      else
      {
        v6 = v5;
        v7 = v2;
        v8 = v6;
        *((float *)this + 0x14) = v7;
      }
      v9 = v8;
      v11 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(this->m128_i32[0] + 0x64))(LODWORD(v9));
      sub_8B8380(this);
      if ( *((float *)this + 6) == v11 )
        this->m128_i16[4] &= ~8u;
    }
  }
}
