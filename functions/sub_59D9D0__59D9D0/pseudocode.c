char __userpurge sub_59D9D0@<al>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  int v8; // edi
  _DWORD *v9; // ecx

  v8 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x34))(
         a1,
         a4,
         a3,
         a2);
  if ( sub_578FE0() != v8 )
    return 0;
  v9 = (_DWORD *)a1[0xD];
  if ( !v9 || Tile_GetFloat(v9, 0xFA1) != fConstant_2 || (unsigned int)(a5 - 9) > 3 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 0xC))(a1, 4, a1[0xD]);
  return 1;
}
