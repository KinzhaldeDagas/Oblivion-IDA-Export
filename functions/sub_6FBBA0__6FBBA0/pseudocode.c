float *__thiscall sub_6FBBA0(float *this, float *a2)
{
  double v3; // st7
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+8h] [ebp-4h]

  v4 = fabs(*this);
  v5 = fabs(*(this + 1));
  if ( v5 <= (double)v4 )
  {
    v3 = v5;
    v7 = fabs(*(this + 2));
    if ( v7 < v3 )
      goto LABEL_3;
    sub_4BF9E0(this, a2, (float *)&dword_B258DC);
    return a2;
  }
  else
  {
    v6 = fabs(*(this + 2));
    if ( v6 < (double)v4 )
    {
LABEL_3:
      sub_4BF9E0(this, a2, (float *)&dword_B258E8);
      return a2;
    }
    sub_4BF9E0(this, a2, (float *)&dword_B258D0);
    return a2;
  }
}
