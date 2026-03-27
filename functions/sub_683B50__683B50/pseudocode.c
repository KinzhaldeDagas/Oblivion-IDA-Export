double __thiscall sub_683B50(char **this, float *a2)
{
  double result; // st7
  float v5; // [esp+Ch] [ebp+4h]

  v5 = sub_68C610(this + 5, a2);
  result = v5;
  if ( v5 <= 0.0 )
    return (float)sub_68A720(this, a2);
  return result;
}
