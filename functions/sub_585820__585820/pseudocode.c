void __usercall sub_585820(_BYTE *this@<ecx>, unsigned int a2@<ebp>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  float *v6; // eax
  int v7; // ecx
  int v8; // eax
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+4h] [ebp-18h]
  float v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]

  if ( (char)*(this + 0x31) > 0 )
  {
    v12 = dword_B13994;
    v11 = flt_A30634;
    v10 = (float)dword_B3A704;
    v9 = (float)dword_B3A700;
    v6 = sub_571F90(1);
    sub_5723E0((char *)v6, a2, a3, a4, a5, "|", v9, v10, 1, 0xFFFFFFFF, v11, v12);
    v7 = *((_DWORD *)this + 4);
    v8 = v7 + *((_DWORD *)this + 0xB);
    if ( v8 > v7 )
      v8 = *((_DWORD *)this + 4);
    if ( v8 - dword_B1398C <= 0 )
      v8 = dword_B1398C;
    if ( v8 > v7 )
      v8 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 0xB) = v8;
    sub_585620(this, a2, a4, a5);
    sub_5794C0(0);
  }
}
