void __cdecl sub_A1BD30()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B36088;
  if ( dword_B36088 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B36088 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
