float *__thiscall sub_8AEE10(_DWORD *this, float *a2)
{
  __m128 v4; // [esp+10h] [ebp-50h] BYREF
  __m128 v5; // [esp+20h] [ebp-40h] BYREF
  __m128 v6; // [esp+30h] [ebp-30h] BYREF
  __m128 v7; // [esp+40h] [ebp-20h] BYREF

  sub_89F580(this, (int)a2);
  sub_6848D0(this, &v4);
  sub_47DCD0(a2 + 8, &v4);
  sub_47DCD0(a2 + 0xC, &v5);
  sub_47DCD0(a2 + 0x10, &v6);
  return sub_47DCD0(a2 + 0x14, &v7);
}
