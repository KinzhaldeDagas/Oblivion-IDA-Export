char __usercall sub_659A60@<al>(_DWORD **a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  int v6; // eax
  HighProcess *v7; // eax
  HighProcess *v8; // edi
  void (__thiscall ***v9)(_DWORD, int); // ecx

  v6 = (*(int (__thiscall **)(_DWORD *))(*a1[0x16] + 8))(a1[0x16]);
  sub_674550(a2, a3, a4, a5, (int)a1, v6);
  v7 = (HighProcess *)FormHeapAlloc(0x2ECu);
  if ( v7 )
    v8 = HighProcess::HighProcess(v7);
  else
    v8 = 0;
  v8->Copy(v8, (BaseProcess *)a1[0x16]);
  v9 = (void (__thiscall ***)(_DWORD, int))a1[0x16];
  if ( v9 )
    (**v9)(v9, 1);
  a1[0x16] = &v8->__vftable;
  sub_673A90((int)a1, 0, 0, 0, 0);
  ((void (__thiscall *)(_DWORD **, _DWORD))(*a1)[0x5E])(a1, 0);
  (*(void (__thiscall **)(_DWORD *))(*a1[0x16] + 0x4C))(a1[0x16]);
  return 1;
}
