int __thiscall sub_94D430(__m128 *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int result; // eax
  int v11; // ecx
  const void *v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v12[0] = 0;
  v12[1] = 0;
  v13 = 0x80000000;
  sub_94D2E0(this, v12);
  v3 = 2 * *((_DWORD *)this + 0x27);
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
  if ( v4 < v3 )
  {
    v5 = 2 * v4;
    if ( v3 >= v5 )
      v5 = 2 * *((_DWORD *)this + 0x27);
    sub_8A6E40((const void **)a2, v5, 0x10);
  }
  *(_DWORD *)(a2 + 4) = v3;
  v6 = 0;
  if ( *((int *)this + 0x27) > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      *(_OWORD *)(*(_DWORD *)a2 + v7) = *(_OWORD *)((char *)v12[0] + v8);
      v9 = v7 + 0x10;
      *(_OWORD *)(*(_DWORD *)a2 + v9) = *(_OWORD *)((char *)v12[0] + v8 + 0x10);
      v7 = v9 + 0x10;
      ++v6;
      v8 += 0x10;
    }
    while ( v6 < *((_DWORD *)this + 0x27) );
  }
  result = v13;
  if ( v13 >= 0 )
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    return sub_8A75D0(v11, (_DWORD *)v12[0], 0x10 * v13, 0x14);
  }
  return result;
}
