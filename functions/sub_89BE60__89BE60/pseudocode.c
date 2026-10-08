int __stdcall sub_89BE60(int *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // esi
  signed int v4; // eax
  int **v5; // edx
  int v6; // edx
  char *v7; // ebp
  int i; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int result; // eax
  int v12; // ecx
  char *v13; // [esp+10h] [ebp-1Ch] BYREF
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h]
  char v16; // [esp+1Ch] [ebp-10h] BYREF

  v2 = a2[0x2F]; /*0x89be6f*/
  v3 = 0; /*0x89be75*/
  v4 = 0; /*0x89be77*/
  if ( v2 <= 0 ) /*0x89be7b*/
  {
LABEL_5:
    v4 = 0xFFFFFFFF; /*0x89be8f*/
  }
  else
  {
    v5 = (int **)a2[0x2E]; /*0x89be7d*/
    while ( *v5 != a1 ) /*0x89be85*/
    {
      ++v4; /*0x89be87*/
      ++v5; /*0x89be88*/
      if ( v4 >= v2 ) /*0x89be8d*/
        goto LABEL_5; /*0x89be8d*/
    }
  }
  *(_DWORD *)(a2[0x2E] + 4 * v4) = 0; /*0x89be98*/
  *(_BYTE *)(a2[0x15] + 0x26) = 1; /*0x89be9e*/
  v6 = *a1; /*0x89bea2*/
  v13 = &v16; /*0x89bea8*/
  v14 = 0; /*0x89beb3*/
  v15 = 0x80000004; /*0x89beb7*/
  (*(void (__thiscall **)(int *, char **))(v6 + 0xC))(a1, &v13); /*0x89bebf*/
  v7 = v13; /*0x89bec6*/
  for ( i = 0; i < v14; ++i ) /*0x89bece*/
  {
    v9 = *(_DWORD **)&v13[4 * i]; /*0x89bed0*/
    if ( v9 != a2 ) /*0x89bed6*/
    {
      v3 = v9[0x15]; /*0x89bed8*/
      if ( *(_WORD *)(v3 + 0x20) != 0xFFFF ) /*0x89bee1*/
        break; /*0x89bee1*/
    }
  }
  v10 = a1[3]; /*0x89bee8*/
  if ( v3 != v10 ) /*0x89beed*/
  {
    sub_8DDC90(v10, (int)a1); /*0x89bef0*/
    sub_8DE080((const void **)v3, (int)a1); /*0x89bef8*/
    v7 = v13; /*0x89befd*/
  }
  result = v15; /*0x89bf01*/
  if ( v15 >= 0 ) /*0x89bf07*/
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x89bf19*/
    if ( !v12 ) /*0x89bf21*/
      v12 = unk_BA7D9C; /*0x89bf23*/
    return sub_8A75D0(v12, v7, 4 * v15, 0x14); /*0x89bf35*/
  }
  return result; /*0x89bf3a*/
}
