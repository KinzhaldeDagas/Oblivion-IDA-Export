void __stdcall _LN21(char *a1, unsigned int a2, int a3, void (__thiscall *a4)(void *))
{
  char *i; // [esp+34h] [ebp+8h]

  for ( i = &a1[a3 * a2]; --a3 >= 0; a4(i) ) /*0x981268*/
    i -= a2; /*0x981274*/
}
