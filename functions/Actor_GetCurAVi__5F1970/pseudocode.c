void __userpurge Actor_GetCurAVi(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // ebx

  v6 = a1[0x16]; /*0x5f1975*/
  if ( v6 ) /*0x5f197a*/
  {
    v7 = *a1; /*0x5f1985*/
    if ( a4 == 9 ) /*0x5f1989*/
    {
      Actor_GetCurAVi_::GetMagickaMult(v7); /*0x5f198a*/
    }
    else
    {
      v8 = 0; /*0x5f1a0a*/
      v9 = (*(int (__stdcall **)(int, int))(v7 + 0x170))(a3, a2); /*0x5f1a0e*/
      if ( v9 ) /*0x5f1a12*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x190))(a1) ) /*0x5f1a1e*/
          v8 = v9; /*0x5f1a24*/
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x268))(v6, v8); /*0x5f1a38*/
    }
  }
  else
  {
    Actor_GetBaseCalcAVi(a1, a2, a3, (int)a1, a4); /*0x5f1a47*/
  }
}
