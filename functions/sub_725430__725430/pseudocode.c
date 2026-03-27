char *__thiscall sub_725430(char **this, float *a2, _DWORD **a3)
{
  char *result; // eax

  result = sub_71A5A0(this, (int)a2, a3);
  a2[0x42] = *((float *)this + 0x42);
  a2[0x43] = *((float *)this + 0x43);
  a2[0x44] = *((float *)this + 0x44);
  return result;
}
