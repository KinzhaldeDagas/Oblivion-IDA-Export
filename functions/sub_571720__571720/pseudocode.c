int __thiscall sub_571720(float *this, float a2, float a3, int a4)
{
  int v4; // edx
  float *i; // esi

  v4 = 0;
  for ( i = this + 2; a2 != i[0xFFFFFFFE] || a3 != i[0xFFFFFFFF] || *(_DWORD *)i != a4; i += 7 )
  {
    if ( ++v4 >= 0xC8 )
      return 0;
  }
  return *((_DWORD *)this + 7 * v4 + 4);
}
