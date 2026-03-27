unsigned int __cdecl sub_8FE280(_DWORD ***a1, int a2, int a3)
{
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(int (__thiscall **)(_DWORD))(***a1 + 8))(**a1) == 5 )
    *(_DWORD *)(a2 + 4) |= 1u;
  if ( (*(int (__thiscall **)(_DWORD))(**a1[1] + 8))(*a1[1]) == 5 )
    *(_DWORD *)(a2 + 4) |= 2u;
  return sub_8FF120((int)a1, a2, a3);
}
