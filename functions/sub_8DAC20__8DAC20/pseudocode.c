char *__thiscall sub_8DAC20(char *this, int a2, int a3)
{
  char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  int v7; // ecx
  char *v8; // eax
  int v9; // ebp
  int v10; // edi
  int v11; // ecx
  char *v12; // eax
  int v13; // edi

  *((_DWORD *)this + 2) = a2; /*0x8dac2d*/
  *((_WORD *)this + 3) = 1; /*0x8dac31*/
  *(_DWORD *)this = &off_A9A3B8; /*0x8dac35*/
  v4 = this + 0x9A1; /*0x8dac3b*/
  v5 = 0x40; /*0x8dac41*/
  do /*0x8dac51*/
  {
    v4[0xFFFFFFFF] = 0; /*0x8dac48*/
    *v4 = 0; /*0x8dac4b*/
    v4 += 0x14; /*0x8dac4d*/
    --v5; /*0x8dac50*/
  }
  while ( v5 ); /*0x8dac51*/
  v6 = this + 0x16B0; /*0x8dac53*/
  v7 = 0x10; /*0x8dac59*/
  do /*0x8dac75*/
  {
    *((_DWORD *)v6 + 0xFFFFFFFF) = 0; /*0x8dac60*/
    *(_DWORD *)v6 = 0; /*0x8dac63*/
    *((_DWORD *)v6 + 1) = 0; /*0x8dac65*/
    *((_DWORD *)v6 + 2) = 0; /*0x8dac68*/
    v6[0x10] = 0; /*0x8dac6b*/
    v6[0x11] = 0; /*0x8dac6e*/
    v6 += 0x34; /*0x8dac71*/
    --v7; /*0x8dac74*/
  }
  while ( v7 ); /*0x8dac75*/
  *((_DWORD *)this + 0x701) = 0; /*0x8dac7b*/
  *((_DWORD *)this + 0x702) = 0; /*0x8dac81*/
  *((_DWORD *)this + 0x703) = 0x80000000; /*0x8dac87*/
  *((_DWORD *)this + 0x704) = 0; /*0x8dac91*/
  *((_DWORD *)this + 0x705) = 0; /*0x8dac97*/
  *((_DWORD *)this + 0x706) = 0; /*0x8dac9d*/
  *((_DWORD *)this + 0x707) = 0; /*0x8daca3*/
  *(this + 0x1BF4) = 0; /*0x8daca9*/
  *(this + 0x1C00) = 1; /*0x8dacb0*/
  *((_DWORD *)this + 0x3A4) = 0; /*0x8dacb6*/
  v8 = this + 0xC; /*0x8dacbc*/
  v9 = 8; /*0x8dacbf*/
  do /*0x8dace7*/
  {
    v10 = 8; /*0x8dacc4*/
    do /*0x8dace4*/
    {
      *(_DWORD *)v8 = a3; /*0x8dacd2*/
      if ( a3 ) /*0x8dacd4*/
      {
        if ( *(_WORD *)(a3 + 4) ) /*0x8dacd6*/
          ++*(_WORD *)(a3 + 6); /*0x8dacdc*/
      }
      v8 += 4; /*0x8dace0*/
      --v10; /*0x8dace3*/
    }
    while ( v10 ); /*0x8dace4*/
    --v9; /*0x8dace6*/
  }
  while ( v9 ); /*0x8dace7*/
  v11 = 0; /*0x8dace9*/
  v12 = this + 0x10C; /*0x8daceb*/
  do /*0x8dad00*/
  {
    v13 = 1 << v11++; /*0x8dacf4*/
    v12 += 4; /*0x8dacf7*/
    *((_DWORD *)v12 + 0xFFFFFFFF) = v13; /*0x8dacfd*/
  }
  while ( v11 < 0x20 ); /*0x8dad00*/
  sub_8DA280(this); /*0x8dad04*/
  *((_DWORD *)this + 0x6FF) = 0x80; /*0x8dad09*/
  *((_DWORD *)this + 0x6FE) = 0x200; /*0x8dad13*/
  *(this + 0x1BF5) = 0; /*0x8dad1e*/
  return this; /*0x8dad1d*/
}
