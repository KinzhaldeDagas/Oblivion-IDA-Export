unsigned int __cdecl sub_8FE280(_DWORD ***a1, int a2, int a3)
{
  *(_DWORD *)(a2 + 4) = 0; /*0x8fe28a*/
  if ( (*(int (__thiscall **)(_DWORD))(***a1 + 8))(**a1) == 5 ) /*0x8fe29d*/
    *(_DWORD *)(a2 + 4) |= 1u; /*0x8fe29f*/
  if ( (*(int (__thiscall **)(_DWORD))(**a1[1] + 8))(*a1[1]) == 5 ) /*0x8fe2b0*/
    *(_DWORD *)(a2 + 4) |= 2u; /*0x8fe2b2*/
  return sub_8FF120((int)a1, a2, a3); /*0x8fe2c5*/
}
