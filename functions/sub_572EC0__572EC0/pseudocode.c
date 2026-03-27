char __userpurge sub_572EC0@<al>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a3@<st0>,
        char a4@<bpl>,
        int a5,
        int a6)
{
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // edi
  TES *v8; // ecx

  v6 = *(&dword_B12DD0 + 6 * a5);
  if ( v6 )
  {
    if ( (_BYTE)a6 || byte_B3A6D4 )
    {
      (*(void (__usercall **)(_DWORD@<ecx>, int *, _DWORD, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(v6 + 0x1C) + 0x88))(
        *(_DWORD *)(v6 + 0x1C),
        &a6,
        *(&dword_B12DD0 + 6 * a5),
        a3,
        st6_0,
        st5_0);
      if ( a6 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))a6;
        if ( !InterlockedDecrement((volatile LONG *)(a6 + 4)) )
          (**v7)(v7, 1);
      }
      v8 = TES;
      *(float *)(0x18 * a5 + 0xB12DD4) = 0.0;
      *(&dword_B12DD0 + 6 * a5) = 0;
      LOBYTE(v6) = sub_440AF0((int)v8, st5_0, st6_0, a4, 0, 0, 0);
    }
    else
    {
      byte_B12DC8[0x18 * a5] = 0;
    }
  }
  return v6;
}
