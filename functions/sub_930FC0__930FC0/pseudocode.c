int __cdecl sub_930FC0(int a1, const void **a2)
{
  int v2; // ebp
  int i; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  const void *v7; // esi
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // edx
  char *v11; // esi
  int v12; // ecx
  signed int v13; // eax
  int v14; // eax
  int j; // eax
  _DWORD *v16; // ecx
  bool v17; // zf
  int result; // eax
  int v19; // [esp+Ch] [ebp-14h]
  int v20; // [esp+28h] [ebp+8h]

  v2 = a1;
  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
    *((_DWORD *)*a2 + 4 * *(unsigned __int16 *)(*(_DWORD *)(a1 + 4) + 8 * i) + 3) = 0x40000000;
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v6 = *(_DWORD **)(v5 + 0x19C);
  v7 = a2[1];
  v19 = v5;
  v8 = v6[8];
  v9 = (4 * (_DWORD)v7 + 0x10) & 0xFFFFFFF0;
  if ( v8 + v9 > v6[0xB] )
    v8 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, (4 * (_DWORD)v7 + 0x10) & 0xFFFFFFF0);
  else
    v6[8] = v8 + v9;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( (int)a2[1] > 0 )
  {
    v20 = 0;
    do
    {
      if ( *(_DWORD *)((char *)*a2 + v10 + 0xC) == 0x40000000 )
      {
        *(_OWORD *)((char *)*a2 + v20) = *(_OWORD *)((char *)*a2 + v10);
        *(_DWORD *)(v8 + 4 * v12) = v11++;
        v20 += 0x10;
        v2 = a1;
      }
      else
      {
        *(_DWORD *)(v8 + 4 * v12) = 0xFFFFFFFF;
      }
      ++v12;
      v10 += 0x10;
    }
    while ( v12 < (int)a2[1] );
  }
  v13 = (unsigned int)a2[2] & 0x3FFFFFFF;
  if ( v13 < (int)v11 )
  {
    v14 = 2 * v13;
    if ( (int)v11 >= v14 )
      v14 = (int)v11;
    sub_8A6E40(a2, v14, 0x10);
  }
  a2[1] = v11;
  for ( j = 0; j < *(_DWORD *)(v2 + 8); ++j )
    *(_WORD *)(*(_DWORD *)(v2 + 4) + 8 * j) = *(_WORD *)(v8 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v2 + 4) + 8 * j));
  v16 = *(_DWORD **)(v19 + 0x19C);
  v17 = v8 == v16[0xA];
  v16[8] = v8;
  if ( v17 )
    (*(void (__thiscall **)(_DWORD *, int))(*v16 + 0x10))(v16, v8);
  for ( result = 0; result < *(_DWORD *)(v2 + 8); ++result )
    *((_DWORD *)*a2 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v2 + 4) + 8 * result) + 3) = 0;
  return result;
}
