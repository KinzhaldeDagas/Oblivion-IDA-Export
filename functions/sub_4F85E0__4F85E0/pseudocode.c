char __cdecl sub_4F85E0(_DWORD *a1, int a2, int a3, double *a4)
{
  int v4; // ecx
  bool v5; // zf
  char result; // al

  *a4 = 0.0; /*0x4f85ee*/
  if ( !a1 ) /*0x4f85f0*/
    return 1; /*0x4f85f0*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f85fc*/
    return 1; /*0x4f85fc*/
  v4 = a1[0x16]; /*0x4f8602*/
  if ( !v4 ) /*0x4f8607*/
    return 1; /*0x4f861d*/
  v5 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x64))(v4) == 0; /*0x4f8610*/
  result = 1; /*0x4f8612*/
  if ( !v5 ) /*0x4f8614*/
    *a4 = 1.0; /*0x4f8618*/
  return result; /*0x4f861a*/
}
