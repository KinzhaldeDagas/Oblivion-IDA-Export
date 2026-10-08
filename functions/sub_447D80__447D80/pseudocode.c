void __usercall sub_447D80(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v5; // esi

  v5 = (_DWORD *)(a1 + 0x64); /*0x447d84*/
  if ( a1 != 0xFFFFFF9C ) /*0x447d89*/
  {
    do /*0x447da2*/
    {
      if ( !*v5 ) /*0x447d90*/
        break; /*0x447d94*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 0x6C))(*v5); /*0x447d9b*/
      v5 = (_DWORD *)v5[1]; /*0x447d9d*/
    }
    while ( v5 ); /*0x447da2*/
  }
  sub_447CA0(a1, a2, a3, a4); /*0x447da8*/
}
