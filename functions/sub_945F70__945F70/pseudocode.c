int __userpurge sub_945F70@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  sub_918100((_WORD *)a1); /*0x945f73*/
  *(_DWORD *)a1 = &off_AA28FC; /*0x945f7c*/
  *(_DWORD *)(a1 + 0x20) = a3; /*0x945f82*/
  sub_945EB0(a2); /*0x945f85*/
  if ( *(_DWORD *)(a1 + 0x20) == 0xFFFFFFFF ) /*0x945f8e*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1); /*0x945f94*/
    *(_DWORD *)(a1 + 0x20) = socket_0(2, 1, 0); /*0x945fa2*/
  }
  return a1; /*0x945fa7*/
}
