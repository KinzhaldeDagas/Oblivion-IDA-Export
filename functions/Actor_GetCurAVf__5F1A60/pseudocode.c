double __userpurge Actor_GetCurAVf@<st0>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double result@<st0>, int a5)
{
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // ebx

  v6 = a1[0x16]; /*0x5f1a64*/
  if ( !v6 ) /*0x5f1a69*/
    return (double)Actor_GetBaseCalcAVi(a1, a2, a3, (int)a1, a5); /*0x5f1b38*/
  v7 = *a1; /*0x5f1a74*/
  if ( a5 == 9 ) /*0x5f1a78*/
  {
    Actor_GetCurAVf_::GetMagickaMult(v7, a1, COERCE_FLOAT(9)); /*0x5f1a79*/
  }
  else
  {
    v8 = 0; /*0x5f1af3*/
    v9 = (*(int (__userpurge **)@<eax>(int, int, double@<st0>))(v7 + 0x170))(a3, a2, result); /*0x5f1af7*/
    if ( v9 ) /*0x5f1afb*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x190))(a1) ) /*0x5f1b07*/
        v8 = v9; /*0x5f1b0d*/
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x26C))(v6, v8); /*0x5f1b21*/
  }
  return result; /*0x5f1b25*/
}
