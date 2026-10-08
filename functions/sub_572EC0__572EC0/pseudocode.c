char __userpurge sub_572EC0@<al>(double st5_0@<st2>, double st6_0@<st1>, double a3@<st0>, int a4, int a5)
{
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // edi
  TES *v8; // ecx

  v6 = *(&dword_B12DD0 + 6 * a4); /*0x572ecc*/
  if ( v6 ) /*0x572ed7*/
  {
    if ( (_BYTE)a5 || unk_B3A6D4 ) /*0x572ee0*/
    {
      (*(void (__usercall **)(_DWORD@<ecx>, int *, _DWORD, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(v6 + 0x1C) + 0x88))( /*0x572f05*/
        *(_DWORD *)(v6 + 0x1C),
        &a5,
        *(&dword_B12DD0 + 6 * a4),
        a3,
        st6_0,
        st5_0);
      if ( a5 ) /*0x572f0d*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))a5; /*0x572f10*/
        if ( !InterlockedDecrement((volatile LONG *)(a5 + 4)) ) /*0x572f16*/
          (**v7)(v7, 1); /*0x572f2c*/
      }
      v8 = MEMORY[0xB333A0]; /*0x572f31*/
      *(float *)(0x18 * a4 + 0xB12DD4) = 0.0; /*0x572f39*/
      *(&dword_B12DD0 + 6 * a4) = 0; /*0x572f43*/
      LOBYTE(v6) = sub_440AF0((int)v8, st5_0, st6_0, 0.0, 0, 0, 0); /*0x572f4d*/
    }
    else
    {
      byte_B12DC8[0x18 * a4] = 0; /*0x572ee9*/
    }
  }
  return v6; /*0x572ef0*/
}
