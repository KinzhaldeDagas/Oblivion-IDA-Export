int __thiscall sub_90C290(unsigned __int8 *this, _DWORD *a2)
{
  _DWORD *v2; // ebp
  int v3; // edi
  int i; // esi
  int v5; // eax
  char v6; // cl
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // eax
  int j; // esi
  int v11; // eax
  __int16 v12; // dx
  int k; // esi
  int v14; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int result; // eax
  signed int *v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  signed int *v21; // [esp+1Ch] [ebp-Ch] BYREF
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  v2 = a2;
  v3 = sub_90D240(a2);
  for ( i = 0; i < v3; ++i )
  {
    v5 = sub_90D2B0(i);
    v6 = *(_BYTE *)(v5 + 0xC);
    if ( v6 == 0x19 || v6 != 0x14 && *(_BYTE *)(v5 + 0xD) == 0x19 )
    {
      v7 = (_DWORD *)sub_90D1F0((_DWORD *)v5);
      sub_90C290(this, v7);
    }
  }
  v21 = 0;
  v22 = 0;
  v23 = 0x80000000;
  if ( v3 > 0 )
    sub_8A6E40((const void **)&v21, v3 < 0 ? 0 : v3, 4);
  v22 = v3;
  v18 = 0;
  v19 = 0;
  v20 = 0x80000000;
  v8 = sub_90D200((int)a2);
  if ( v8 > 0 )
  {
    v9 = 2 * (v20 & 0x3FFFFFFF);
    if ( v8 >= v9 )
      v9 = v8;
    sub_8A6E40((const void **)&v18, v9, 4);
  }
  v19 = v8;
  sub_90C020(this, (int)a2, v21, v18);
  for ( j = 0; j < v3; *(_WORD *)(v11 + 0x12) = v12 )
  {
    v11 = sub_90D2B0(j);
    v12 = v21[j++];
  }
  for ( k = v19 - 1; k >= 0; v2 = (_DWORD *)sub_90D1F0(v2) )
    sub_90D370(v2, v18[k--]);
  v14 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v20 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v18, 4 * v20, 0x14);
  result = v23;
  if ( v23 >= 0 )
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v21, 4 * v23, 0x14);
  return result;
}
