void __cdecl sub_7013A0(const void *a1)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  unsigned int i; // edi
  int v3; // esi

  v1 = InterlockedDecrement;
  qmemcpy(byte_B3F718, a1, 0x44u);
  for ( i = 0; i < 0xA; ++i )
  {
    v3 = dword_B3F800[i];
    if ( v3 )
    {
      if ( !v1((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      dword_B3F800[i] = 0;
    }
  }
}
