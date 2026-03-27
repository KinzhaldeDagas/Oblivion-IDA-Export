int __userpurge sub_948CB0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  sub_8B0DA0(a1 + 0x18, a2);
  *(_DWORD *)(a1 + 0x24) = a3;
  return a3;
}
