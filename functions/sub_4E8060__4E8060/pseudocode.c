int __thiscall sub_4E8060(float *this, char a2)
{
  int result; // eax
  double v3; // st7
  int v4; // [esp+0h] [ebp-8h]

  v4 = (int)*(this + 7);
  if ( a2 )
  {
    result = v4 | 1;
    v3 = (double)(v4 | 1);
  }
  else
  {
    v3 = (double)(int)(v4 & 0xFFFFFFFE);
  }
  *(this + 7) = v3;
  return result;
}
