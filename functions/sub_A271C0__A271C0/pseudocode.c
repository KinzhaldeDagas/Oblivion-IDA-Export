void __cdecl sub_A271C0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B430DC;
  if ( dword_B430DC )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B430DC + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
