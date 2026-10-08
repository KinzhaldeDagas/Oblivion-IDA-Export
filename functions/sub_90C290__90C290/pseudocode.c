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

  v2 = a2; /*0x90c294*/
  v3 = sub_90D240(a2); /*0x90c2a5*/
  for ( i = 0; i < v3; ++i ) /*0x90c2ab*/
  {
    v5 = sub_90D2B0(a2, i); /*0x90c2b3*/
    v6 = *(_BYTE *)(v5 + 0xC); /*0x90c2b8*/
    if ( v6 == 0x19 || v6 != 0x14 && *(_BYTE *)(v5 + 0xD) == 0x19 ) /*0x90c2c9*/
    {
      v7 = (_DWORD *)sub_90D1F0((_DWORD *)v5); /*0x90c2cd*/
      sub_90C290(this, v7); /*0x90c2d7*/
    }
  }
  v21 = 0; /*0x90c2e5*/
  v22 = 0; /*0x90c2e9*/
  v23 = 0x80000000; /*0x90c2ed*/
  if ( v3 > 0 )
    sub_8A6E40((const void **)&v21, v3 < 0 ? 0 : v3, 4);
  v22 = v3; /*0x90c315*/
  v18 = 0; /*0x90c319*/
  v19 = 0; /*0x90c31d*/
  v20 = 0x80000000; /*0x90c321*/
  v8 = sub_90D200((int)a2); /*0x90c32e*/
  if ( v8 > 0 ) /*0x90c33b*/
  {
    v9 = 2 * (v20 & 0x3FFFFFFF); /*0x90c33d*/
    if ( v8 >= v9 ) /*0x90c341*/
      v9 = v8; /*0x90c343*/
    sub_8A6E40((const void **)&v18, v9, 4); /*0x90c34d*/
  }
  v19 = v8; /*0x90c364*/
  sub_90C020(this, (int)a2, v21, v18); /*0x90c368*/
  for ( j = 0; j < v3; *(_WORD *)(v11 + 0x12) = v12 ) /*0x90c371*/
  {
    v11 = sub_90D2B0(a2, j); /*0x90c376*/
    v12 = v21[j++]; /*0x90c37f*/
  }
  for ( k = v19 - 1; k >= 0; v2 = (_DWORD *)sub_90D1F0(v2) ) /*0x90c391*/
    sub_90D370(v2, v18[k--]); /*0x90c39d*/
  v14 = MEMORY[0xBA9DE4]; /*0x90c3b4*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90c3ba*/
  if ( v20 >= 0 ) /*0x90c3c1*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v18, 4 * v20, 0x14); /*0x90c3dc*/
  result = v23; /*0x90c3e1*/
  if ( v23 >= 0 ) /*0x90c3e7*/
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v21, 4 * v23, 0x14); /*0x90c402*/
  return result; /*0x90c407*/
}
