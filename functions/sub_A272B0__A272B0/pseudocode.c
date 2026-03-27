void __cdecl sub_A272B0()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B4311C;
  if ( dword_B4311C )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B4311C + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
