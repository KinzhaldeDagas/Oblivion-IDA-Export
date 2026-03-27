void __userpurge Actor_GetCurAVi(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>, int a5)
{
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // ebx

  v6 = a1[0x16];
  if ( v6 )
  {
    v7 = *a1;
    if ( a5 == 9 )
    {
      Actor_GetCurAVi_::GetMagickaMult(v7, a4);
    }
    else
    {
      v8 = 0;
      v9 = (*(int (__stdcall **)(int, int))(v7 + 0x170))(a3, a2);
      if ( v9 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x190))(a1) )
          v8 = v9;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x268))(v6, v8);
    }
  }
  else
  {
    Actor_GetBaseCalcAVi(a1, a2, a3, (int)a1, a5);
  }
}
