void __userpurge sub_8DEF20(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, int (__stdcall ***a4)(signed int))
{
  int v4; // eax
  int v5; // eax

  v4 = *(_DWORD *)(a1 + 0x2C);
  if ( v4 && (v5 = v4 - 1) != 0 )
  {
    if ( v5 == 1 )
      sub_8996C0(*(_DWORD **)(a1 + 0x10), &a4, a4);
  }
  else
  {
    sub_8A9AB0((int)a4, a2, a3, 7, 1, 0);
  }
}
