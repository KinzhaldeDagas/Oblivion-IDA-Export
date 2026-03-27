void __cdecl sub_A27220()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B430E0;
  if ( dword_B430E0 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B430E0 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
