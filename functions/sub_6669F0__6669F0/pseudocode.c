double __usercall sub_6669F0@<st0>(_BYTE *a1@<ecx>, double result@<st0>, double a3@<st1>, double a4@<st2>)
{
  bool v5; // zf
  _DWORD *v6; // eax
  int v7; // edx

  v5 = a1[0x748] != 0; /*0x6669fd*/
  a1[0x748] = a1[0x748] == 0; /*0x6669ff*/
  if ( !v5 ) /*0x666a05*/
  {
    v6 = (_DWORD *)(*(int (__usercall **)@<eax>(_BYTE *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x174))( /*0x666a0f*/
                     a1,
                     result,
                     a3);
    *((_DWORD *)a1 + 0x1D5) = *v6; /*0x666a13*/
    *((_DWORD *)a1 + 0x1D6) = v6[1]; /*0x666a1c*/
    v7 = *(_DWORD *)a1; /*0x666a25*/
    *((_DWORD *)a1 + 0x1D7) = v6[2]; /*0x666a27*/
    (*(void (__thiscall **)(_BYTE *))(v7 + 0xEC))(a1); /*0x666a35*/
    *((float *)a1 + 0x1D7) = a4 * *((float *)a1 + 0x175) + *((float *)a1 + 0x1D7); /*0x666a49*/
    *((float *)a1 + 0x1D3) = *((float *)a1 + 0xA); /*0x666a52*/
    *((float *)a1 + 0x1D4) = *((float *)a1 + 8); /*0x666a5b*/
  }
  return result; /*0x666a61*/
}
