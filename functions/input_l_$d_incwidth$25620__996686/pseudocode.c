int __usercall _input_l_::_d_incwidth_25620@<eax>(int a1@<ecx>, int a2@<ebp>, signed int a3@<ebx>)
{
  bool v3; // zf
  FILE *v5; // edx
  signed int v6; // ebx

  v3 = (*(_DWORD *)(a2 - 0xC))-- == 1; /*0x996686*/
  if ( v3 && a1 ) /*0x99668d*/
  {
    *(_BYTE *)(a2 + 3) = 1; /*0x99668f*/
    return _input_l_::_getnum_25615(a3, a2); /*0x996693*/
  }
  else
  {
    v5 = *(FILE **)(a2 - 0x14); /*0x996695*/
    ++*(_DWORD *)(a2 + 4); /*0x996698*/
    v6 = _inc(a1, v5); /*0x9966a0*/
    *(_DWORD *)(a2 - 4) = v6; /*0x9966a2*/
    return _input_l_::_getnum_25615(v6, a2); /*0x9966a3*/
  }
}
