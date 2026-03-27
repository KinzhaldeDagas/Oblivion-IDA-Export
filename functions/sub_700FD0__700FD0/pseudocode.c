void sub_700FD0()
{
  LONG (__stdcall *v0)(volatile LONG *); // ebp
  unsigned int i; // edi
  int v2; // esi

  v0 = InterlockedDecrement;
  for ( i = 0; i < 0xA; ++i )
  {
    v2 = dword_B3F800[i];
    if ( v2 )
    {
      if ( !v0((volatile LONG *)(v2 + 4)) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
      dword_B3F800[i] = 0;
    }
  }
}
