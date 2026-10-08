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

  v2 = a1; /*0x930fc4*/
  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i ) /*0x930fd5*/
    *((_DWORD *)*a2 + 4 * *(unsigned __int16 *)(*(_DWORD *)(a1 + 4) + 8 * i) + 3) = 0x40000000; /*0x930fe3*/
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x930fff*/
  v6 = *(_DWORD **)(v5 + 0x19C); /*0x931002*/
  v7 = a2[1]; /*0x931008*/
  v19 = v5; /*0x93100b*/
  v8 = v6[8]; /*0x931017*/
  v9 = (4 * (_DWORD)v7 + 0x10) & 0xFFFFFFF0; /*0x93101a*/
  if ( v8 + v9 > v6[0xB] ) /*0x931023*/
    v8 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, (4 * (_DWORD)v7 + 0x10) & 0xFFFFFFF0); /*0x931030*/
  else
    v6[8] = v8 + v9; /*0x931025*/
  v10 = 0; /*0x93103f*/
  v11 = 0; /*0x931041*/
  v12 = 0; /*0x931043*/
  if ( (int)a2[1] > 0 ) /*0x931047*/
  {
    v20 = 0; /*0x931049*/
    do /*0x931089*/
    {
      if ( *(_DWORD *)((char *)*a2 + v10 + 0xC) == 0x40000000 ) /*0x93105a*/
      {
        *(_OWORD *)((char *)*a2 + v20) = *(_OWORD *)((char *)*a2 + v10); /*0x931064*/
        *(_DWORD *)(v8 + 4 * v12) = v11++; /*0x931068*/
        v20 += 0x10; /*0x93106f*/
        v2 = a1; /*0x931073*/
      }
      else
      {
        *(_DWORD *)(v8 + 4 * v12) = 0xFFFFFFFF; /*0x931079*/
      }
      ++v12; /*0x931083*/
      v10 += 0x10; /*0x931084*/
    }
    while ( v12 < (int)a2[1] ); /*0x931089*/
  }
  v13 = (unsigned int)a2[2] & 0x3FFFFFFF; /*0x93108e*/
  if ( v13 < (int)v11 ) /*0x931095*/
  {
    v14 = 2 * v13; /*0x931097*/
    if ( (int)v11 >= v14 ) /*0x93109b*/
      v14 = (int)v11; /*0x93109d*/
    sub_8A6E40(a2, v14, 0x10); /*0x9310a3*/
  }
  a2[1] = v11; /*0x9310ab*/
  for ( j = 0; j < *(_DWORD *)(v2 + 8); ++j ) /*0x9310b5*/
    *(_WORD *)(*(_DWORD *)(v2 + 4) + 8 * j) = *(_WORD *)(v8 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v2 + 4) + 8 * j)); /*0x9310ce*/
  v16 = *(_DWORD **)(v19 + 0x19C); /*0x9310dd*/
  v17 = v8 == v16[0xA]; /*0x9310e3*/
  v16[8] = v8; /*0x9310e6*/
  if ( v17 ) /*0x9310e9*/
    (*(void (__thiscall **)(_DWORD *, int))(*v16 + 0x10))(v16, v8); /*0x9310ee*/
  for ( result = 0; result < *(_DWORD *)(v2 + 8); ++result ) /*0x93111e*/
    *((_DWORD *)*a2 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v2 + 4) + 8 * result) + 3) = 0; /*0x93112c*/
  return result; /*0x931138*/
}
