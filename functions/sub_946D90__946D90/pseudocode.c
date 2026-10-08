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
  const void *v15[2]; // [esp+18h] [ebp-38h] BYREF
  int v16; // [esp+20h] [ebp-30h]
  _DWORD v17[5]; // [esp+24h] [ebp-2Ch] BYREF
  _DWORD v18[6]; // [esp+38h] [ebp-18h] BYREF

  *((_WORD *)this + 3) = 1; /*0x946d9f*/
  *((_DWORD *)this + 2) = &off_A9D1C0; /*0x946da3*/
  *(this + 0xC) = 1; /*0x946daa*/
  *(_DWORD *)this = &off_AA297C; /*0x946dad*/
  *((_DWORD *)this + 2) = &off_AA2964; /*0x946db3*/
  *((_DWORD *)this + 8) = 0; /*0x946dba*/
  *((_DWORD *)this + 9) = 0; /*0x946dbd*/
  *((_DWORD *)this + 0xA) = 0x80000000; /*0x946dc5*/
  v3 = this + 0x2C; /*0x946dc9*/
  *((_DWORD *)this + 0xB) = 0; /*0x946dcc*/
  *((_DWORD *)this + 0xC) = 0; /*0x946dce*/
  *((_DWORD *)this + 0xD) = 0x80000000; /*0x946dd1*/
  *((_DWORD *)this + 0xE) = 0; /*0x946dd8*/
  *((_DWORD *)this + 0xF) = 0; /*0x946ddb*/
  *((_DWORD *)this + 0x10) = 0x80000000; /*0x946dde*/
  sub_9584C0(v18); /*0x946de1*/
  v18[0] = 0; /*0x946de6*/
  v18[3] = 0; /*0x946dea*/
  v18[1] = 0; /*0x946dee*/
  v18[2] = 1; /*0x946df2*/
  LODWORD(v4) = sub_917FD0(); /*0x946df6*/
  v14 = __PAIR64__(HIDWORD(v4) & 0x80000000, 0); /*0x946e18*/
  v18[5] = 0x3F800000; /*0x946e2a*/
  v15[0] = 0; /*0x946e32*/
  v15[1] = 0; /*0x946e36*/
  v5 = flt_A342A4 / (double)v4; /*0x946e3a*/
  v16 = 0x80000000; /*0x946e40*/
  *(float *)&v18[4] = v5; /*0x946e48*/
  sub_8BC030(v17, (int)v3, 1); /*0x946e4c*/
  sub_90BBA0(&v14, dword_A9C288); /*0x946e5a*/
  sub_9582E0(1, (int)v17, (int)&v14, 1, 0, (int)v18, (char *)unk_BA99F8, v15); /*0x946e7a*/
  sub_8BC2E0(v17); /*0x946e86*/
  v6 = MEMORY[0xBA9DE4]; /*0x946e91*/
  if ( v16 >= 0 ) /*0x946e97*/
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C); /*0x946ea3*/
    if ( !v7 ) /*0x946eab*/
      v7 = unk_BA7D9C; /*0x946ead*/
    sub_8A75D0(v7, (_DWORD *)v15[0], 0x18 * (v16 & 0x3FFFFFFF), 0x14); /*0x946ec6*/
  }
  if ( (*((_DWORD *)this + 0xA) & 0x3FFFFFFF) < a2[1] ) /*0x946ede*/
  {
    if ( *((int *)this + 0xA) >= 0 ) /*0x946ee2*/
    {
      v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C); /*0x946eee*/
      if ( !v8 ) /*0x946ef6*/
        v8 = unk_BA7D9C; /*0x946ef8*/
      sub_8A75D0(v8, *((_DWORD **)this + 8), 4 * *((_DWORD *)this + 0xA), 0x14); /*0x946f08*/
    }
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6) + 0x19C); /*0x946f16*/
    if ( !v9 ) /*0x946f1e*/
      v9 = unk_BA7D9C; /*0x946f20*/
    *((_DWORD *)this + 8) = sub_8A7560(v9, 4 * a2[1], 0x14); /*0x946f35*/
    *((_DWORD *)this + 0xA) = a2[1] | *((_DWORD *)this + 0xA) & 0x40000000; /*0x946f45*/
  }
  v10 = a2[1]; /*0x946f48*/
  v11 = *((_DWORD **)this + 8); /*0x946f4d*/
  *((_DWORD *)this + 9) = v10; /*0x946f50*/
  if ( v10 > 0 ) /*0x946f55*/
  {
    v12 = *a2 - (_DWORD)v11; /*0x946f57*/
    do /*0x946f69*/
    {
      *v11 = *(_DWORD *)((char *)v11 + v12); /*0x946f63*/
      ++v11; /*0x946f65*/
      --v10; /*0x946f68*/
    }
    while ( v10 ); /*0x946f69*/
  }
  return this; /*0x946f6b*/
}
