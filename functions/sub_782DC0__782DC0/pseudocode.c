int __usercall sub_782DC0@<eax>(int a1@<ecx>, int a2@<esi>)
{
  int result; // eax

  if ( *(_DWORD *)(a1 + 0x28) ) /*0x782dc0*/
    return sub_7630E0(*(_DWORD *)(a1 + 0x20), a2, a1); /*0x782dca*/
  return result; /*0x782dcf*/
}
