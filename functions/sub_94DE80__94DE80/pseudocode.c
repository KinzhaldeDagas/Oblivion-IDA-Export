int __thiscall sub_94DE80(__m128 *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int i; // eax
  int v9; // ecx
  int result; // eax
  int v11; // ecx
  _DWORD *v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v12[0] = 0;
  v12[1] = 0;
  v13 = 0x80000000;
  sub_94DB40(this, (int)v12);
  v3 = 4 * *((_DWORD *)this + 0x20);
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
  if ( v4 < v3 )
  {
    v5 = 2 * v4;
    if ( v3 >= v5 )
      v5 = 4 * *((_DWORD *)this + 0x20);
    sub_8A6E40((const void **)a2, v5, 0x10);
  }
  *(_DWORD *)(a2 + 4) = v3;
  v6 = 0;
  if ( *((int *)this + 0x20) > 0 )
  {
    v7 = 0;
    for ( i = 0; ; i += 4 )
    {
      *(__m128 *)(*(_DWORD *)a2 + v7) = *(this + 6);
      *(_OWORD *)(*(_DWORD *)a2 + v7 + 0x10) = *(_OWORD *)&v12[0][i];
      v9 = v7 + 0x10;
      *(_OWORD *)(*(_DWORD *)a2 + v9 + 0x10) = *(_OWORD *)&v12[0][i];
      ++v6;
      v7 = v9 + 0x30;
      *(_OWORD *)(*(_DWORD *)a2 + v7 - 0x10) = *(_OWORD *)&v12[0][4 * (v6 % *((_DWORD *)this + 0x20))];
      if ( v6 >= *((_DWORD *)this + 0x20) )
        break;
    }
  }
  result = v13;
  if ( v13 >= 0 )
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    return sub_8A75D0(v11, v12[0], 0x10 * v13, 0x14);
  }
  return result;
}
