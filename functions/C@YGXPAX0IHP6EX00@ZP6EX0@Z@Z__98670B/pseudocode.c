void __stdcall `eh vector copy constructor iterator'(
        char *a1,
        char *a2,
        unsigned int a3,
        int a4,
        void (__thiscall *a5)(void *, void *),
        void (__thiscall *a6)(void *))
{
  int i; // [esp+14h] [ebp-1Ch]

  for ( i = 0; i < a4; ++i ) /*0x98671f*/
  {
    a5(a1, a2); /*0x986730*/
    a1 += a3; /*0x986736*/
    a2 += a3; /*0x986739*/
  }
  `eh vector copy constructor iterator'((int)a1, (int)a2, a3, a4, (int)a5, (int)a6); /*0x986773*/
}
