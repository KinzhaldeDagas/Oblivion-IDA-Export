float *__thiscall sub_8C3CD0(__m128 **this, float *a2)
{
  float *result; // eax
  __m128 *v4; // esi
  __m128 *v5; // esi

  result = (float *)sub_8AEA60(this, (int)a2);
  if ( this )
  {
    v4 = *(this + 2);
    if ( v4 )
    {
      v5 = v4 + 1;
      if ( v5 )
      {
        sub_47DCD0(a2 + 4, v5);
        sub_47DCD0(a2 + 8, v5 + 1);
        return sub_47DCD0(a2 + 0xC, v5 + 2);
      }
    }
  }
  return result;
}
