double __thiscall sub_683B50(char **this, float *a2)
{
  double result; // st7
  float v5; // [esp+Ch] [ebp+4h]

  v5 = sub_68C610(this + 5, a2); /*0x683b61*/
  result = v5; /*0x683b6f*/
  if ( v5 <= 0.0 ) /*0x683b74*/
    return (float)sub_68A720((float ***)this, a2); /*0x683b84*/
  return result; /*0x683b88*/
}
