int __cdecl sub_8AFC90(int *a1)
{
  int v1; // esi
  int result; // eax
  int v3; // edi

  v1 = sub_8AFBE0(a1); /*0x8afc9c*/
  result = 0; /*0x8afca1*/
  if ( v1 ) /*0x8afca5*/
  {
    v3 = a1[1]; /*0x8afca7*/
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x9C))(v1, v3) >= 0x1E ) /*0x8afcba*/
      return 0x1E; /*0x8afccc*/
    else
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x9C))(v1, v3); /*0x8afcc7*/
  }
  return result; /*0x8afcc9*/
}
