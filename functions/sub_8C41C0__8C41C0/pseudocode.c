float *__thiscall sub_8C41C0(__m128 **this, int a2)
{
  float *result; // eax
  __m128 *v4; // esi

  result = (float *)sub_8A2690(this, (_DWORD *)a2); /*0x8c41c9*/
  if ( this ) /*0x8c41d0*/
  {
    v4 = *(this + 2); /*0x8c41d2*/
    if ( v4 ) /*0x8c41d7*/
    {
      sub_47DCD0((float *)(a2 + 0x30), v4 + 2); /*0x8c41e0*/
      sub_47DCD0((float *)(a2 + 0x20), v4 + 3); /*0x8c41ec*/
      return sub_47DCD0((float *)(a2 + 0x10), v4 + 1); /*0x8c41f8*/
    }
  }
  return result; /*0x8c41fd*/
}
