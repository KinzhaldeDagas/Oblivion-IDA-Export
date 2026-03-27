char __usercall sub_607620@<al>(_DWORD *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  int v6; // ecx
  int v7; // eax
  MiddleHighProcess *v8; // eax
  MiddleHighProcess *v9; // edi
  void (__thiscall ***v10)(_DWORD, int); // ecx

  v6 = a1[0x16];
  if ( !v6 || (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) != 1 )
  {
    v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0x16] + 8))(a1[0x16]);
    sub_674550(a2, a3, a4, a5, (int)a1, v7);
    v8 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu);
    if ( v8 )
      v9 = MiddleHighProcess::MiddleHighProcess(v8);
    else
      v9 = 0;
    v9->Copy(v9, (BaseProcess *)a1[0x16]);
    v10 = (void (__thiscall ***)(_DWORD, int))a1[0x16];
    if ( v10 )
      (**v10)(v10, 1);
    a1[0x16] = v9;
    sub_673A90((int)a1, 1, 0, 0, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x178))(a1, 0);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)a1[0x16] + 0x4C))(a1[0x16]);
  }
  return 1;
}
