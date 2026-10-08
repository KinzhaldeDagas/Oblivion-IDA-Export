char *__thiscall sub_725430(char **this, float *a2, _DWORD **a3)
{
  char *result; // eax

  result = sub_71A5A0(this, (int)a2, a3); /*0x72543e*/
  a2[0x42] = *((float *)this + 0x42); /*0x725449*/
  a2[0x43] = *((float *)this + 0x43); /*0x725455*/
  a2[0x44] = *((float *)this + 0x44); /*0x725461*/
  return result; /*0x725467*/
}
