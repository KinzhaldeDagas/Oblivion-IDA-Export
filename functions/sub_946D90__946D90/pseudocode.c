char *__thiscall sub_946D90(char *this, _DWORD *a2)
{
  char *v3; // edi
  unsigned __int64 v4; // rax
  double v5; // st7
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  unsigned __int64 v14; // [esp+10h] [ebp-40h] BYREF
  _DWORD *v15[2]; // [esp+18h] [ebp-38h] BYREF
  int v16; // [esp+20h] [ebp-30h]
  _DWORD v17[5]; // [esp+24h] [ebp-2Ch] BYREF
  _DWORD v18[6]; // [esp+38h] [ebp-18h] BYREF

  *((_WORD *)this + 3) = 1;
  *((_DWORD *)this + 2) = &off_A9D1C0;
  *(this + 0xC) = 1;
  *(_DWORD *)this = &off_AA297C;
  *((_DWORD *)this + 2) = &off_AA2964;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0x80000000;
  v3 = this + 0x2C;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0x80000000;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0x80000000;
  sub_9584C0(v18);
  v18[0] = 0;
  v18[3] = 0;
  v18[1] = 0;
  v18[2] = 1;
  LODWORD(v4) = sub_917FD0();
  v14 = __PAIR64__(HIDWORD(v4) & 0x80000000, 0);
  v18[5] = 0x3F800000;
  v15[0] = 0;
  v15[1] = 0;
  v5 = flt_A342A4 / (double)v4;
  v16 = 0x80000000;
  *(float *)&v18[4] = v5;
  sub_8BC030(v17, (int)v3, 1);
  sub_90BBA0(&v14, dword_A9C288);
  sub_9582E0(1, (int)v17, (int)&v14, 1, 0, (int)v18, (unsigned int)&unk_BA99F8, (int)v15);
  sub_8BC2E0(v17);
  v6 = TlsIndex;
  if ( v16 >= 0 )
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, v15[0], 0x18 * (v16 & 0x3FFFFFFF), 0x14);
  }
  if ( (*((_DWORD *)this + 0xA) & 0x3FFFFFFF) < a2[1] )
  {
    if ( *((int *)this + 0xA) >= 0 )
    {
      v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C);
      if ( !v8 )
        v8 = dword_BA7D9C;
      sub_8A75D0(v8, *((_DWORD **)this + 8), 4 * *((_DWORD *)this + 0xA), 0x14);
    }
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    *((_DWORD *)this + 8) = sub_8A7560(v9, 4 * a2[1], 0x14);
    *((_DWORD *)this + 0xA) = a2[1] | *((_DWORD *)this + 0xA) & 0x40000000;
  }
  v10 = a2[1];
  v11 = *((_DWORD **)this + 8);
  *((_DWORD *)this + 9) = v10;
  if ( v10 > 0 )
  {
    v12 = *a2 - (_DWORD)v11;
    do
    {
      *v11 = *(_DWORD *)((char *)v11 + v12);
      ++v11;
      --v10;
    }
    while ( v10 );
  }
  return this;
}
