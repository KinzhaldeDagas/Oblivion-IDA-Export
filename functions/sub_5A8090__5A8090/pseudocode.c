void *__stdcall sub_5A8090(void *a1, int a2)
{
  void *result; // eax

  result = a1; /*0x5a8090*/
  if ( a1 == (void *)1 ) /*0x5a8097*/
  {
    dword_B3B0B4[0xA7] = a2; /*0x5a809d*/
    return (void *)a2; /*0x5a8099*/
  }
  else if ( a1 == (void *)3 ) /*0x5a80a8*/
  {
    dword_B3B0B4[0xA9] = a2; /*0x5a80ae*/
  }
  else if ( a1 == (void *)2 ) /*0x5a80ba*/
  {
    dword_B3B0B4[0xA8] = a2; /*0x5a80c0*/
  }
  return result; /*0x5a80a2*/
}
