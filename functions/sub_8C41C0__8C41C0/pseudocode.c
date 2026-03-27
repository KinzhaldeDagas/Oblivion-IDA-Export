float *__thiscall sub_8C41C0(__m128 **this, int a2)
{
  float *result; // eax
  __m128 *v4; // esi

  result = (float *)sub_8A2690(this, (_DWORD *)a2);
  if ( this )
  {
    v4 = *(this + 2);
    if ( v4 )
    {
      sub_47DCD0((float *)(a2 + 0x30), v4 + 2);
      sub_47DCD0((float *)(a2 + 0x20), v4 + 3);
      return sub_47DCD0((float *)(a2 + 0x10), v4 + 1);
    }
  }
  return result;
}
