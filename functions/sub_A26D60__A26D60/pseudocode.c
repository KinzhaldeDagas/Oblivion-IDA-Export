void __cdecl sub_A26D60()
{
  _DWORD *v0; // edi
  int i; // ebx
  int v2; // esi

  v0 = &unk_B42570;
  for ( i = 0xFF; i >= 0; --i )
  {
    v2 = v0[0xFFFFFFFF];
    v0 += 0xFFFFFFFF;
    if ( v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
}
