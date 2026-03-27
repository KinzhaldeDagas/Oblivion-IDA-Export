float *__thiscall sub_663FF0(_OWORD *this, float *a2)
{
  double v3; // rt0
  __int128 v4; // [esp+0h] [ebp-20h]

  v3 = hkFactor;
  *(float *)&v4 = *a2 * v3;
  *((float *)&v4 + 1) = a2[1] * v3;
  *((float *)&v4 + 2) = v3 * a2[2];
  *(this + 6) = v4;
  return a2;
}
