void sub_700FD0()
{
  LONG (__stdcall *v0)(volatile LONG *); // ebp
  unsigned int i; // edi
  int v2; // esi

  v0 = InterlockedDecrement; /*0x700fd1*/
  for ( i = 0; i < 0xA; ++i ) /*0x700fd9*/
  {
    v2 = unk_B3F800[i]; /*0x700fe0*/
    if ( v2 ) /*0x700fe8*/
    {
      if ( !v0((volatile LONG *)(v2 + 4)) ) /*0x700fee*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x701000*/
      unk_B3F800[i] = 0; /*0x701002*/
    }
  }
}
