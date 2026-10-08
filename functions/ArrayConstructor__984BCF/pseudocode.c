void __stdcall ArrayConstructor(
        char *a1,
        unsigned int a2,
        int size,
        void (__thiscall *a4)(char *),
        void (__thiscall *a5)(void *))
{
  int i; // [esp+14h] [ebp-1Ch]

  for ( i = 0; i < size; ++i ) /*0x984be3*/
  {
    a4(a1); /*0x984bf3*/
    a1 += a2; /*0x984bf9*/
  }
}
