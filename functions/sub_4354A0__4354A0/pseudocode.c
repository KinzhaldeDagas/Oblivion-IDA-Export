int __usercall sub_4354A0@<eax>(_DWORD *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _DWORD *v6; // ecx
  int (__thiscall *v7)(_DWORD *); // edx

  v6 = (_DWORD *)a1[8];
  if ( v6 )
  {
    if ( sub_4D6FD0(v6) )
    {
      if ( !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[8] + 0x154))(a1[8]) && !sub_57BAC0(a2, a3, a4, a5) )
        (*(void (__thiscall **)(_DWORD *))(*a1 + 0x30))(a1);
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*a1 + 0x2C))(a1);
  v7 = *(int (__thiscall **)(_DWORD *))(*a1 + 0x28);
  a1[3] = 5;
  return v7(a1);
}
