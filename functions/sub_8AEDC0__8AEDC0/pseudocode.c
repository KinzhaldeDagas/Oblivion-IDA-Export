float *__thiscall sub_8AEDC0(_DWORD *this, int a2)
{
  __m128 v3[3]; // [esp+10h] [ebp-50h] BYREF
  __m128 v4; // [esp+40h] [ebp-20h] BYREF

  bhkRefObject_CopyHavokObjectTransform(this, v3); /*0x8aeddd*/
  sub_607740(a2, v3); /*0x8aede8*/
  return HavokVector_ToWorldVector((float *)(a2 + 0x24), &v4); /*0x8aee02*/
}
