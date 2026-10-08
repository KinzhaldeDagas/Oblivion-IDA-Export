_BYTE *__cdecl sub_931520(_BYTE *a1, int a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  _BYTE *v9; // esi
  int v11; // [esp+10h] [ebp-210h]
  int *v12; // [esp+14h] [ebp-20Ch] BYREF
  int v13; // [esp+18h] [ebp-208h]
  unsigned int v14; // [esp+1Ch] [ebp-204h]
  int v15; // [esp+20h] [ebp-200h] BYREF

  v4 = *(_DWORD *)(a2 + 4); /*0x931536*/
  v5 = 0x80000080; /*0x93153e*/
  v12 = &v15; /*0x931544*/
  v14 = 0x80000080; /*0x931548*/
  v15 = a3; /*0x93154c*/
  v13 = 1; /*0x931550*/
LABEL_2:
  v6 = v12[--v13]; /*0x931560*/
  v11 = v6; /*0x931571*/
  v7 = v6; /*0x931575*/
  while ( 1 ) /*0x931584*/
  {
    v7 = v4 + 8 * *(unsigned __int16 *)(v7 + 4); /*0x931584*/
    if ( *(_WORD *)(v7 + 6) == 1 ) /*0x93158f*/
      goto LABEL_6; /*0x93158f*/
    if ( *(_WORD *)(v7 + 6) == 2 ) /*0x931592*/
    {
      if ( a4 == 3 ) /*0x93166e*/
        goto LABEL_8; /*0x93166e*/
      goto LABEL_7; /*0x93166e*/
    }
    if ( *(_WORD *)(v7 + 6) == 3 ) /*0x931599*/
    {
LABEL_6:
      if ( *(unsigned __int16 *)(v7 + 6) != a4 ) /*0x9315a2*/
        break; /*0x9315a2*/
    }
LABEL_7:
    *(_WORD *)(v7 + 6) = a4; /*0x9315a8*/
    v5 = v14; /*0x9315b4*/
LABEL_8:
    if ( v7 == v6 ) /*0x9315ba*/
    {
      do /*0x931612*/
      {
        v6 = v4 + 8 * *(unsigned __int16 *)(v6 + 4); /*0x9315cf*/
        v8 = v4 + 8 * *(unsigned __int16 *)(v6 + 2); /*0x9315d3*/
        if ( !*(_WORD *)(v8 + 6) ) /*0x9315c9*/
        {
          if ( v13 == (v5 & 0x3FFFFFFF) ) /*0x9315e5*/
            sub_8A6EE0((const void **)&v12, 4); /*0x9315ee*/
          v12[v13] = v8; /*0x9315fe*/
          v5 = v14; /*0x931605*/
          ++v13; /*0x93160a*/
        }
      }
      while ( v6 != v11 ); /*0x931612*/
      if ( !v13 ) /*0x93161a*/
      {
        v9 = a1; /*0x931622*/
        *a1 = 1; /*0x931629*/
        if ( v5 >= 0 ) /*0x93162c*/
          sub_8A75D0( /*0x931654*/
            *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
            v12,
            4 * v5,
            0x14);
        return v9; /*0x931654*/
      }
      goto LABEL_2; /*0x93161a*/
    }
  }
  v9 = a1; /*0x93167b*/
  *a1 = 0; /*0x931682*/
  if ( v5 < 0 ) /*0x931685*/
    return v9; /*0x931665*/
  sub_8A75D0( /*0x9316ad*/
    *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
    v12,
    4 * v5,
    0x14);
  return a1; /*0x931659*/
}
