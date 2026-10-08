bool __cdecl sub_7B2A00(int a1)
{
  int v1; // eax
  bool v2; // bl
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // esi

  v1 = a1; /*0x7b2a22*/
  v2 = 0; /*0x7b2a26*/
  if ( a1 ) /*0x7b2a2a*/
  {
    a1 = 0; /*0x7b2a2c*/
    v3 = sub_4A1AB0(&off_B2C34C, v1, &a1); /*0x7b2a47*/
    v4 = (void (__thiscall ***)(_DWORD, int))a1; /*0x7b2a4e*/
    if ( v3 ) /*0x7b2a52*/
      v2 = a1 != 0; /*0x7b2a58*/
    if ( a1 ) /*0x7b2a64*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(a1 + 4)) ) /*0x7b2a6a*/
        (**v4)(v4, 1); /*0x7b2a7c*/
    }
  }
  return v2; /*0x7b2a80*/
}
