int __usercall sub_4352B0@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax

  v5 = *(_DWORD *)(a1 + 0x28);
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 0xC) != 6 )
      sub_477C40(*(int **)(a1 + 0x34), a2, a3, a4, v5);
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)ModelLoaderPtr + 3) + 0x10))(
           *((_DWORD *)ModelLoaderPtr + 3),
           *(_DWORD *)(a1 + 0x34));
}
