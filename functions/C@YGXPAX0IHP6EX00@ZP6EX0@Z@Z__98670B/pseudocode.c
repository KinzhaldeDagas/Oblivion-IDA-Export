void __stdcall `eh vector copy constructor iterator'(
        char *a1,
        char *a2,
        unsigned int a3,
        int a4,
        void (__thiscall *a5)(void *, void *),
        void (__thiscall *a6)(void *))
{
  int i; // [esp+14h] [ebp-1Ch]

  for ( i = 0; i < a4; ++i )
  {
    a5(a1, a2);
    a1 += a3;
    a2 += a3;
  }
  `eh vector copy constructor iterator'(a1, a2, a3, a4, a5, a6);
}
