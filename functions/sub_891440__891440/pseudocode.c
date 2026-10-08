// TES4 authoritative: reads current proxy position. Gets collision object transform at 0x8AC070, subtracts metadata/world transform basis offset, returns Havok-unit position.
__m128 *__thiscall bhkCharacterController_ReadRelativePosition(__m128 *this, __m128 *a2)
{
  _DWORD *v3; // ecx
  __m128 *result; // eax
  __m128 v5; // [esp+10h] [ebp-60h] BYREF
  __m128 v6[4]; // [esp+20h] [ebp-50h] BYREF

  bhkRefObject_CopyHavokObjectTransform(*((_DWORD **)this + 0xD9), v6); /*0x891466*/
  hkBasis_TransformVector(&v5, v6, this + 0x34); /*0x89147b*/
  v3 = (_DWORD *)this->m128_i32[2]; /*0x891480*/
  if ( v3 ) /*0x891485*/
    result = (__m128 *)bhkCollisionWrapper_GetPositionPtr(v3); /*0x891487*/
  else
    result = (__m128 *)&unk_BA7A40; /*0x89148e*/
  *a2 = _mm_sub_ps(*result, v5); /*0x8914a2*/
  return result; /*0x8914a5*/
}
