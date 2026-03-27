int __userpurge sub_945F70@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  sub_918100((_WORD *)a1);
  *(_DWORD *)a1 = &off_AA28FC;
  *(_DWORD *)(a1 + 0x20) = a3;
  sub_945EB0(a2);
  if ( *(_DWORD *)(a1 + 0x20) == 0xFFFFFFFF )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1);
    *(_DWORD *)(a1 + 0x20) = socket_0(2, 1, 0);
  }
  return a1;
}
