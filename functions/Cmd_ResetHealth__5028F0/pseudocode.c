double __usercall Cmd_ResetHealth@<st0>(double result@<st0>, int a2@<ebx>, int a3@<edi>, int a4, int a5, int *a6)
{
  float v7; // [esp+10h] [ebp-4h]
  float v8; // [esp+20h] [ebp+Ch]

  if ( a6 ) /*0x5028f8*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a6 + 0x190))(a6) ) /*0x502904*/
    {
      (*(void (__thiscall **)(int *, int))(*a6 + 0x288))(a6, 8); /*0x502916*/
      v7 = result; /*0x502918*/
      v8 = (double)Actor_GetBaseCalcAVi(a6, a2, a3, (int)a6, 8) - v7; /*0x50293e*/
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*a6 + 0x2A4))(a6, 8, LODWORD(v8), 0); /*0x50294b*/
      return v8; /*0x502942*/
    }
  }
  return result; /*0x50294f*/
}
