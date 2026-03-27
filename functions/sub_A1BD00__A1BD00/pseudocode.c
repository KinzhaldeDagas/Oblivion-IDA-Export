void __cdecl sub_A1BD00()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))dword_B36084;
  if ( dword_B36084 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B36084 + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
