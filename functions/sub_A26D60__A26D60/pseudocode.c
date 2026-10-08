void __cdecl sub_A26D60()
{
  _DWORD *v0; // edi
  int i; // ebx
  int v2; // esi

  v0 = &unk_B42570; /*0xa26d6a*/
  for ( i = 0xFF; i >= 0; --i ) /*0xa26d6f*/
  {
    v2 = v0[0xFFFFFFFF]; /*0xa26d74*/
    v0 += 0xFFFFFFFF; /*0xa26d77*/
    if ( v2 ) /*0xa26d7c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0xa26d82*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0xa26d94*/
    }
  }
}
