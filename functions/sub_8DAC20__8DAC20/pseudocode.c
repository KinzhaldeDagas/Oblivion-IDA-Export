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

  *((_DWORD *)this + 2) = a2;
  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &off_A9A3B8;
  v4 = this + 0x9A1;
  v5 = 0x40;
  do
  {
    v4[0xFFFFFFFF] = 0;
    *v4 = 0;
    v4 += 0x14;
    --v5;
  }
  while ( v5 );
  v6 = this + 0x16B0;
  v7 = 0x10;
  do
  {
    *((_DWORD *)v6 + 0xFFFFFFFF) = 0;
    *(_DWORD *)v6 = 0;
    *((_DWORD *)v6 + 1) = 0;
    *((_DWORD *)v6 + 2) = 0;
    v6[0x10] = 0;
    v6[0x11] = 0;
    v6 += 0x34;
    --v7;
  }
  while ( v7 );
  *((_DWORD *)this + 0x701) = 0;
  *((_DWORD *)this + 0x702) = 0;
  *((_DWORD *)this + 0x703) = 0x80000000;
  *((_DWORD *)this + 0x704) = 0;
  *((_DWORD *)this + 0x705) = 0;
  *((_DWORD *)this + 0x706) = 0;
  *((_DWORD *)this + 0x707) = 0;
  *(this + 0x1BF4) = 0;
  *(this + 0x1C00) = 1;
  *((_DWORD *)this + 0x3A4) = 0;
  v8 = this + 0xC;
  v9 = 8;
  do
  {
    v10 = 8;
    do
    {
      *(_DWORD *)v8 = a3;
      if ( a3 )
      {
        if ( *(_WORD *)(a3 + 4) )
          ++*(_WORD *)(a3 + 6);
      }
      v8 += 4;
      --v10;
    }
    while ( v10 );
    --v9;
  }
  while ( v9 );
  v11 = 0;
  v12 = this + 0x10C;
  do
  {
    v13 = 1 << v11++;
    v12 += 4;
    *((_DWORD *)v12 + 0xFFFFFFFF) = v13;
  }
  while ( v11 < 0x20 );
  sub_8DA280(this);
  *((_DWORD *)this + 0x6FF) = 0x80;
  *((_DWORD *)this + 0x6FE) = 0x200;
  *(this + 0x1BF5) = 0;
  return this;
}
