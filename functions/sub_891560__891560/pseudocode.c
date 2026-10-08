// TES4 authoritative: writes proxy position. Adds metadata/world transform basis offset, then writes to collision object through 0x8AC080.
bhkCharacterProxy *__thiscall bhkCharacterController_WriteRelativePosition(bhkCharacterProxy *this, float *a2)
{
  float *v3; // edi
  __m128 v5; // [esp+10h] [ebp-70h] BYREF
  __m128 v6; // [esp+20h] [ebp-60h] BYREF
  __m128 v7[4]; // [esp+30h] [ebp-50h] BYREF

  bhkRefObject_CopyHavokObjectTransform(*((_DWORD **)this + 0xD9), v7); /*0x891586*/
  hkBasis_TransformVector(&v6, v7, (__m128 *)this + 0x34); /*0x89159b*/
  v3 = *((float **)this + 2); /*0x8915a3*/
  v5 = _mm_add_ps(*(__m128 *)a2, v6); /*0x8915b0*/
  if ( v3 ) /*0x8915b5*/
    bhkRefObject_UpdateHavokObject(this); /*0x8915b9*/
  bhkCollisionWrapper_SetPositionAdjusted(v3, &v5); /*0x8915c5*/
  return (bhkCharacterProxy *)bhkRefObject_UpdateHavokObject(this); /*0x8915d1*/
}
