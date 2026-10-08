int __thiscall sub_8A9E50(int *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // ebx
  int v15; // edi
  int v16; // edx
  int result; // eax
  _DWORD *v18; // esi
  _DWORD *i; // ecx

  v3 = *(this + 0x13); /*0x8a9e55*/
  v4 = v3 & 0x3FFFFFFF; /*0x8a9e62*/
  if ( (v3 & 0x3FFFFFFF) < *(_DWORD *)(a2 + 0x48) ) /*0x8a9e69*/
  {
    v5 = MEMORY[0xBA9DE4]; /*0x8a9e6d*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8a9e73*/
    if ( v3 >= 0 ) /*0x8a9e7a*/
    {
      v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8a9e80*/
      if ( !v7 ) /*0x8a9e88*/
        v7 = unk_BA7D9C; /*0x8a9e8a*/
      sub_8A75D0(v7, (_DWORD *)*(this + 0x11), 0x10 * v4, 0x14); /*0x8a9e9a*/
    }
    v8 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8a9ea3*/
    if ( !v8 ) /*0x8a9eab*/
      v8 = unk_BA7D9C; /*0x8a9ead*/
    v9 = sub_8A7560(v8, 0x10 * *(_DWORD *)(a2 + 0x48), 0x14); /*0x8a9ebd*/
    v10 = *(this + 0x13); /*0x8a9ec2*/
    *(this + 0x11) = (int)v9; /*0x8a9ec5*/
    *(this + 0x13) = *(_DWORD *)(a2 + 0x48) | v10 & 0x40000000; /*0x8a9ed3*/
  }
  v11 = *(_DWORD *)(a2 + 0x48); /*0x8a9ed6*/
  v12 = (_DWORD *)*(this + 0x11); /*0x8a9edb*/
  *(this + 0x12) = v11; /*0x8a9ede*/
  if ( v11 > 0 ) /*0x8a9ee4*/
  {
    v13 = *(_DWORD *)(a2 + 0x44) - (_DWORD)v12; /*0x8a9ee8*/
    do /*0x8a9f0f*/
    {
      v14 = v12; /*0x8a9ef5*/
      *v12 = *(_DWORD *)((char *)v12 + v13); /*0x8a9ef7*/
      v12[1] = *(_DWORD *)((char *)v12 + v13 + 4); /*0x8a9efc*/
      v12[2] = *(_DWORD *)((char *)v12 + v13 + 8); /*0x8a9f02*/
      v15 = *(_DWORD *)((char *)v12 + v13 + 0xC); /*0x8a9f05*/
      v12 += 4; /*0x8a9f08*/
      --v11; /*0x8a9f0b*/
      v14[3] = v15; /*0x8a9f0c*/
    }
    while ( v11 ); /*0x8a9f0f*/
  }
  v16 = *(this + 0x12); /*0x8a9f11*/
  result = 0; /*0x8a9f14*/
  if ( v16 > 0 ) /*0x8a9f18*/
  {
    v18 = (_DWORD *)*(this + 0x11); /*0x8a9f1a*/
    for ( i = v18; *i != 0x1140; i += 4 ) /*0x8a9f1d*/
    {
      if ( ++result >= v16 ) /*0x8a9f2e*/
        return result; /*0x8a9f2e*/
    }
    result = (int)&v18[4 * result + 2]; /*0x8a9f3a*/
    if ( result ) /*0x8a9f40*/
    {
      *(_BYTE *)result = 0xFD; /*0x8a9f42*/
      *(_BYTE *)(result + 1) = 0; /*0x8a9f45*/
    }
  }
  return result; /*0x8a9f30*/
}
