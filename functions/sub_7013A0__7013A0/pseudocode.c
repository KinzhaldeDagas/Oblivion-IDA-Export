void __cdecl sub_7013A0(const void *a1)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  unsigned int i; // edi
  int v3; // esi

  v1 = InterlockedDecrement; /*0x7013a1*/
  qmemcpy(unk_B3F718, a1, 0x44u); /*0x7013b7*/
  for ( i = 0; i < 0xA; ++i ) /*0x7013b9*/
  {
    v3 = unk_B3F800[i]; /*0x7013c0*/
    if ( v3 ) /*0x7013c8*/
    {
      if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x7013ce*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7013e0*/
      unk_B3F800[i] = 0; /*0x7013e2*/
    }
  }
}
