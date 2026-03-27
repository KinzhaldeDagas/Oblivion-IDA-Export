double __usercall sub_6669F0@<st0>(_BYTE *a1@<ecx>, double result@<st0>, double a3@<st1>)
{
  bool v4; // zf
  _DWORD *v5; // eax
  int v6; // edx

  v4 = a1[0x748] != 0;
  a1[0x748] = a1[0x748] == 0;
  if ( !v4 )
  {
    v5 = (_DWORD *)(*(int (__usercall **)@<eax>(_BYTE *@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x174))(a1, result);
    *((_DWORD *)a1 + 0x1D5) = *v5;
    *((_DWORD *)a1 + 0x1D6) = v5[1];
    v6 = *(_DWORD *)a1;
    *((_DWORD *)a1 + 0x1D7) = v5[2];
    (*(void (__thiscall **)(_BYTE *))(v6 + 0xEC))(a1);
    *((float *)a1 + 0x1D7) = a3 * *((float *)a1 + 0x175) + *((float *)a1 + 0x1D7);
    *((float *)a1 + 0x1D3) = *((float *)a1 + 0xA);
    *((float *)a1 + 0x1D4) = *((float *)a1 + 8);
  }
  return result;
}
