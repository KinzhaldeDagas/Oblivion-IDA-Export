void __userpurge sub_612BD0(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        char a7)
{
  _DWORD *v9; // eax

  if ( a6 != 0xFF )
  {
    if ( *(_DWORD *)(a1 + 0x74) )
    {
      if ( !a7 )
      {
        v9 = (_DWORD *)(*(int (__usercall **)@<eax>(double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) + 0x164))(
                         a5,
                         a4);
        sub_470FC0(v9, 3, 0.0);
      }
      if ( sub_5F48D0(*(PlayerCharacter **)(a1 + 0x3C), a2, a3, a6, a4, a5, a6) )
      {
        *(_DWORD *)(a1 + 0x78) = *(_DWORD *)(a1 + 0x74);
        *(_DWORD *)(a1 + 0x74) = 0;
        *(_DWORD *)(a1 + 0x50) = a6;
      }
    }
  }
}
