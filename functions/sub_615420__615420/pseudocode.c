void __usercall sub_615420(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v5; // ebx
  void (__thiscall **v6)(_DWORD *, int); // edi
  int v7; // eax

  if ( *(_DWORD *)(a1 + 0x70) == 6 )
  {
    if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) )
      sub_5F4AE0(*(Actor **)(a1 + 0x3C), a2, a3, a4, 0);
    if ( *(float *)(a1 + 0xD8) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) )
    {
      v5 = *(_DWORD **)(a1 + 0x3C);
      v6 = (void (__thiscall **)(_DWORD *, int))(*v5 + 0x340);
      v7 = sub_6135F0(a1);
      (*v6)(v5, v7);
    }
  }
}
