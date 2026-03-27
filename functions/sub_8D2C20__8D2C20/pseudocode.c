__m128 *__thiscall sub_8D2C20(__m128 *this, __m128 *a2)
{
  __m128 *result; // eax
  _OWORD v4[3]; // [esp+10h] [ebp-30h] BYREF

  result = sub_8D2AB0((char *)v4, this, a2);
  *this = (__m128)v4[0];
  *(this + 1) = (__m128)v4[1];
  *(this + 2) = (__m128)v4[2];
  return result;
}
