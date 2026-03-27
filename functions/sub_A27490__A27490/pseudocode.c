void __cdecl sub_A27490()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B43108;
  if ( dword_B43108 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B43108 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
