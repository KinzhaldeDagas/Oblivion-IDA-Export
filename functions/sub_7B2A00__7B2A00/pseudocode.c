bool __cdecl sub_7B2A00(int a1)
{
  int v1; // eax
  bool v2; // bl
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // esi

  v1 = a1;
  v2 = 0;
  if ( a1 )
  {
    a1 = 0;
    v3 = sub_4A1AB0(&off_B2C34C, v1, &a1);
    v4 = (void (__thiscall ***)(_DWORD, int))a1;
    if ( v3 )
      v2 = a1 != 0;
    if ( a1 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(a1 + 4)) )
        (**v4)(v4, 1);
    }
  }
  return v2;
}
