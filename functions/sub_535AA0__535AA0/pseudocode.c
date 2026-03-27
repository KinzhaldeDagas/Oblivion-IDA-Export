_OWORD *__thiscall sub_535AA0(_OWORD *this, float a2)
{
  __int128 v3; // xmm0

  v3 = 0;
  *(float *)&v3 = a2;
  *this = v3;
  return this;
}
