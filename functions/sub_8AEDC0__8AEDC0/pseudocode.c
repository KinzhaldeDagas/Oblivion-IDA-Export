float *__thiscall sub_8AEDC0(_DWORD *this, int a2)
{
  __m128 v3[3]; // [esp+10h] [ebp-50h] BYREF
  __m128 v4; // [esp+40h] [ebp-20h] BYREF

  sub_6848D0(this, v3);
  sub_607740(a2, v3);
  return sub_43F3E0((float *)(a2 + 0x24), &v4);
}
