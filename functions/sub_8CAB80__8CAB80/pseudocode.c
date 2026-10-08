int __userpurge sub_8CAB80@<eax>(int a1@<ecx>, int a2@<ebx>, char a3)
{
  sub_8CA770(a1, a2); /*0x8cab83*/
  if ( (a3 & 1) != 0 ) /*0x8cab8d*/
    (*(void (__stdcall **)(int, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))(a1, *(unsigned __int16 *)(a1 + 4), 0x32); /*0x8cab9f*/
  return a1; /*0x8caba4*/
}
