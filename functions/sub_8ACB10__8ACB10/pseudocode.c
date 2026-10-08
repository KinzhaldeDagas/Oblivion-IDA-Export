// TES4 authoritative: initializes low-level hkpCharacterProxy listener/manifold arrays, then calls 0x8AC1E0 to copy cinfo including max slope cosine.
__m128 *__thiscall hkpCharacterProxy_InitFromCinfo(__m128 *this, int a2)
{
  this->m128_i16[3] = 1; /*0x8acb15*/
  this->m128_i32[2] = (__int32)&hkEntityListener::`vftable'; /*0x8acb1b*/
  this->m128_i32[3] = (__int32)&hkPhantomListener::`vftable'; /*0x8acb22*/
  *((_DWORD *)this + 0xC) = 0; /*0x8acb29*/
  this->m128_i32[0] = (__int32)&off_A97C08; /*0x8acb2c*/
  this->m128_i32[2] = (__int32)off_A97BF4; /*0x8acb32*/
  this->m128_i32[3] = (__int32)off_A97BE0; /*0x8acb39*/
  *(_QWORD *)((char *)this + 0x74) = 0; /*0x8acb40*/
  *(_QWORD *)((char *)this + 0x7C) = 0x80000000LL; /*0x8acb4b*/
  *((_DWORD *)this + 0x21) = 0; /*0x8acb54*/
  *((_QWORD *)this + 0x11) = 0x80000000LL; /*0x8acb5a*/
  *((_DWORD *)this + 0x24) = 0; /*0x8acb66*/
  *(_QWORD *)((char *)this + 0x94) = 0x80000000LL; /*0x8acb6c*/
  *((_DWORD *)this + 0x27) = 0; /*0x8acb78*/
  *((_DWORD *)this + 0x28) = 0x80000000; /*0x8acb82*/
  hkpCharacterProxy_ResetFromCinfo(this, a2); /*0x8acb8b*/
  return this; /*0x8acb92*/
}
