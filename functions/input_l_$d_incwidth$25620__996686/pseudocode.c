int __usercall _input_l_::_d_incwidth_25620@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  bool v2; // zf
  FILE *v4; // edx

  v2 = (*(_DWORD *)(a2 - 0xC))-- == 1;
  if ( v2 && a1 )
  {
    *(_BYTE *)(a2 + 3) = 1;
    return _input_l_::_getnum_25615();
  }
  else
  {
    v4 = *(FILE **)(a2 - 0x14);
    ++*(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 - 4) = _inc(a1, v4);
    return _input_l_::_getnum_25615();
  }
}
