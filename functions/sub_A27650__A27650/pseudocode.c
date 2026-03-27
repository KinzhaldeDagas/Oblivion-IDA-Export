void __cdecl sub_A27650()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B45084;
  if ( dword_B45084 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B45084 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
