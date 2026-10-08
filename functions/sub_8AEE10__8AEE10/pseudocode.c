float *__thiscall sub_8AEE10(_DWORD *this, float *a2)
{
  __m128 v4; // [esp+10h] [ebp-50h] BYREF
  __m128 v5; // [esp+20h] [ebp-40h] BYREF
  __m128 v6; // [esp+30h] [ebp-30h] BYREF
  __m128 v7; // [esp+40h] [ebp-20h] BYREF

  sub_89F580(this, (int)a2); /*0x8aee2c*/
  bhkRefObject_CopyHavokObjectTransform(this, &v4); /*0x8aee38*/
  sub_47DCD0(a2 + 8, &v4); /*0x8aee47*/
  sub_47DCD0(a2 + 0xC, &v5); /*0x8aee54*/
  sub_47DCD0(a2 + 0x10, &v6); /*0x8aee61*/
  return sub_47DCD0(a2 + 0x14, &v7); /*0x8aee73*/
}
