// Initializes ahkCharacterProxy side data and default up vector to (0,0,1,0) at this+0x40. Controller states later fetch runtime up/gravity basis via vtable+0x58 and context+0x20.
__m128 *__thiscall sub_8B9CA0(__m128 *this, int a2)
{
  __int128 v4; // [esp+10h] [ebp-20h]

  hkpCharacterProxy_InitFromCinfo(this, a2);    // ahkCharacterProxy constructor path initializes default up vector to (0,0,1,0) at this+0x40. /*0x8b9cbb*/
  *(float *)&v4 = 0.0; /*0x8b9cc6*/
  *((float *)&v4 + 1) = 0.0; /*0x8b9cca*/
  this->m128_i32[0] = (__int32)&ahkCharacterProxy::`vftable'{for `ahkCharacterProxy'}; /*0x8b9cce*/
  this->m128_i32[2] = (__int32)&ahkCharacterProxy::`vftable'{for `hkEntityListener'}; /*0x8b9cd6*/
  *((float *)&v4 + 2) = 1.0; /*0x8b9cdd*/
  this->m128_i32[3] = (__int32)&ahkCharacterProxy::`vftable'{for `hkPhantomListener'}; /*0x8b9ce1*/
  *((_DWORD *)this + 0x2C) = 0; /*0x8b9ce8*/
  *((float *)&v4 + 3) = 0.0; /*0x8b9cf4*/
  *((__int128 *)this + 4) = v4; /*0x8b9cfd*/
  return this; /*0x8b9d01*/
}
