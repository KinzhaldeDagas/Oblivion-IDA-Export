void __cdecl sub_A26B10()
{
  NiDevImageConverter *v0; // esi

  v0 = dword_B3FD28;
  if ( dword_B3FD28 )
  {
    if ( !InterlockedDecrement((volatile LONG *)dword_B3FD28 + 1) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(NiDevImageConverter *, int))v0)(v0, 1);
    }
  }
}
