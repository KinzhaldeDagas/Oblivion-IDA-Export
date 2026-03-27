void __usercall sub_447D80(int a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  _DWORD *v4; // esi

  v4 = (_DWORD *)(a1 + 0x64);
  if ( a1 != 0xFFFFFF9C )
  {
    do
    {
      if ( !*v4 )
        break;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 0x6C))(*v4);
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 );
  }
  sub_447CA0(a1, a2, a3);
}
