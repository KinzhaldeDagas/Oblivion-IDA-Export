void __usercall Actor_ModCurAVf(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8)
{
  int v9; // ebp
  int v11; // [esp+Ch] [ebp-8h]

  if ( a4 == 0xA && *(float *)&a5 < 0.0 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x278))(a1) ) /*0x5e2c06*/
  {
    Actor_ModCurAVf_::Done(0xA, a5, a6); /*0x5e2c06*/
  }
  else
  {
    v9 = a1[0x16]; /*0x5e2c0d*/
    if ( v9 ) /*0x5e2c12*/
    {
      if ( (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0x170))(a1, a2, a3) ) /*0x5e2c21*/
        (*(int (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1); /*0x5e2c33*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 0x288))(v9); /*0x5e2c54*/
      Actor_ModCurAVf_::CheckHealthDmg(v11, a1, a4, a5, a6, a7, a8); /*0x5e2c5a*/
    }
    else
    {
      Actor_ModCurAVf_::CheckHealthDmg(a4, a1, a4, a5, a6, a7, a8); /*0x5e2c12*/
    }
  }
}
