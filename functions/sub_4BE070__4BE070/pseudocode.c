void __usercall sub_4BE070(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  sub_4BDF20(a2, a3, a4, a5, *(_DWORD *)(a1 + 0x1C));
  sub_4CD090(*(_BYTE **)(*(_DWORD *)(a1 + 0x1C) + 0xC), a2, a3, a4, a5);
}
