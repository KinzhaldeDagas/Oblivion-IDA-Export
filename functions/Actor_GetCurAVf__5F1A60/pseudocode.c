double __userpurge Actor_GetCurAVf@<st0>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double result@<st0>, int a5)
{
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // ebx

  v6 = a1[0x16];
  if ( !v6 )
    return (double)Actor_GetBaseCalcAVi(a1, a2, a3, (int)a1, a5);
  v7 = *a1;
  if ( a5 == 9 )
    return Actor_GetCurAVf_::GetMagickaMult(v7, a1, result, COERCE_FLOAT(9));
  v8 = 0;
  v9 = (*(int (__stdcall **)(int, int))(v7 + 0x170))(a3, a2);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x190))(a1) )
      v8 = v9;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x26C))(v6, v8);
  return result;
}
