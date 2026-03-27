void __cdecl sub_A26CC0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B4088C;
  if ( dword_B4088C )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B4088C + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
