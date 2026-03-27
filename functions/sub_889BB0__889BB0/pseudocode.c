int __fastcall sub_889BB0(_DWORD *a1, int a2, char a3)
{
  int v4; // eax

  if ( a1 )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x58))(a1);
    if ( v4 )
      *(_DWORD *)(v4 + 0x2B0) = a3 != 0 ? a1 : 0;
  }
  return sub_89D430(a1, a3);
}
