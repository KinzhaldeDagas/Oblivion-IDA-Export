char __usercall sub_607530@<al>(_DWORD *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  int v6; // ecx
  int v7; // eax
  HighProcess *v8; // eax
  HighProcess *v9; // edi
  void (__thiscall ***v10)(_DWORD, int); // ecx

  v6 = a1[0x16];
  if ( !v6 || (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) )
  {
    v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0x16] + 8))(a1[0x16]);
    sub_674550(a2, a3, a4, a5, (int)a1, v7);
    v8 = (HighProcess *)FormHeapAlloc(0x2ECu);
    if ( v8 )
      v9 = HighProcess::HighProcess(v8);
    else
      v9 = 0;
    v9->Copy(v9, (BaseProcess *)a1[0x16]);
    v10 = (void (__thiscall ***)(_DWORD, int))a1[0x16];
    if ( v10 )
      (**v10)(v10, 1);
    a1[0x16] = v9;
    sub_673A90((int)a1, 0, 0, 0, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x178))(a1, 0);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)a1[0x16] + 0x4C))(a1[0x16]);
  }
  return 1;
}
