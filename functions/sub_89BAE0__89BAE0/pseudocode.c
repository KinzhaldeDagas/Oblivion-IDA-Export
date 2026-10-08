int __thiscall sub_89BAE0(int *this, int a2)
{
  int *v2; // esi
  int v3; // eax
  int v4; // edi
  char **v5; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  bool v10; // cc
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  _DWORD *v16; // edx
  int v17; // eax
  int v19; // ecx
  int *v20[2]; // [esp+8h] [ebp-24h] BYREF
  char *v21; // [esp+10h] [ebp-1Ch] BYREF
  int v22; // [esp+14h] [ebp-18h]
  int v23; // [esp+18h] [ebp-14h]
  char v24; // [esp+1Ch] [ebp-10h] BYREF

  v2 = this; /*0x89bae4*/
  v3 = *(this + 0x22); /*0x89bae6*/
  v4 = 0; /*0x89baed*/
  v20[0] = this; /*0x89baf1*/
  if ( v3 ) /*0x89baf5*/
  {
    v5 = (char **)*(this + 0x20); /*0x89bb00*/
    LOBYTE(v20[0]) = 0xA; /*0x89bb06*/
    v20[1] = (int *)a2; /*0x89bb0b*/
    sub_8D8830(v5, (int)v20); /*0x89bb0f*/
    return 0; /*0x89bb15*/
  }
  else
  {
    v7 = a2; /*0x89bb1f*/
    if ( *(_WORD *)(a2 + 4) ) /*0x89bb23*/
      ++*(_WORD *)(a2 + 6); /*0x89bb29*/
    ++*(this + 0x22); /*0x89bb39*/
    v8 = *(_DWORD *)a2; /*0x89bb3f*/
    v21 = &v24; /*0x89bb48*/
    v22 = 0; /*0x89bb4c*/
    v23 = 0x80000004; /*0x89bb50*/
    (*(void (__thiscall **)(int, char **))(v8 + 0xC))(a2, &v21); /*0x89bb58*/
    v9 = 0; /*0x89bb5f*/
    v10 = v22 <= 0; /*0x89bb61*/
    *(_DWORD *)(a2 + 8) = v2; /*0x89bb63*/
    if ( v10 ) /*0x89bb66*/
      goto LABEL_22; /*0x89bb66*/
    do /*0x89bc1b*/
    {
      v11 = *(_DWORD *)&v21[4 * v4]; /*0x89bb74*/
      v12 = *(_DWORD *)(v11 + 0x54); /*0x89bb77*/
      v13 = *(_DWORD *)(v11 + 0xBC); /*0x89bb7a*/
      v14 = v11 + 0xB8; /*0x89bb80*/
      v15 = 0; /*0x89bb86*/
      if ( v13 <= 0 ) /*0x89bb8a*/
        goto LABEL_10; /*0x89bb8a*/
      v16 = *(_DWORD **)v14; /*0x89bb8c*/
      while ( *v16 ) /*0x89bb93*/
      {
        ++v15; /*0x89bb95*/
        ++v16; /*0x89bb96*/
        if ( v15 >= v13 ) /*0x89bb9b*/
          goto LABEL_10; /*0x89bb9b*/
      }
      if ( v15 < 0 ) /*0x89bbe9*/
      {
LABEL_10:
        if ( *(_DWORD *)(v14 + 4) == (*(_DWORD *)(v14 + 8) & 0x3FFFFFFF) ) /*0x89bbaa*/
          sub_8A6EE0((const void **)v14, 4); /*0x89bbaf*/
        *(_DWORD *)(*(_DWORD *)v14 + 4 * (*(_DWORD *)(v14 + 4))++) = a2; /*0x89bbc0*/
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)v14 + 4 * v15) = a2; /*0x89bbf1*/
      }
      if ( *(_WORD *)(v12 + 0x20) != 0xFFFF ) /*0x89bbcc*/
      {
        if ( v9 ) /*0x89bbd0*/
        {
          if ( *(_DWORD *)(v9 + 0x54) != *(_DWORD *)(*(_DWORD *)&v21[4 * v4] + 0x54) ) /*0x89bc03*/
            sub_8CD320(v20[0], v9, *(_DWORD *)&v21[4 * v4]); /*0x89bc0c*/
        }
        else
        {
          v9 = *(_DWORD *)&v21[4 * v4]; /*0x89bbda*/
          sub_8DE080((const void **)v12, a2); /*0x89bbe0*/
        }
      }
      v17 = v22; /*0x89bc14*/
      ++v4; /*0x89bc18*/
    }
    while ( v4 < v22 ); /*0x89bc1b*/
    v7 = a2; /*0x89bc23*/
    v2 = v20[0]; /*0x89bc27*/
    if ( !v9 ) /*0x89bc2b*/
LABEL_22:
      v17 = sub_8DE080(*(const void ***)(*(_DWORD *)v21 + 0x54), v7); /*0x89bc37*/
    if ( v2[0x22]-- == 1 ) /*0x89bc3c*/
    {
      v17 = v2[0x21]; /*0x89bc45*/
      if ( v17 ) /*0x89bc4d*/
      {
        LOBYTE(v17) = *((_BYTE *)v2 + 0x90); /*0x89bc4f*/
        if ( !(_BYTE)v17 ) /*0x89bc57*/
          v17 = sub_899210((int)v2); /*0x89bc5b*/
      }
    }
    sub_8DC260(v17, (int)v2, v7); /*0x89bc62*/
    if ( v23 >= 0 ) /*0x89bc70*/
    {
      v19 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x89bc82*/
      if ( !v19 ) /*0x89bc8a*/
        v19 = unk_BA7D9C; /*0x89bc8c*/
      sub_8A75D0(v19, v21, 4 * v23, 0x14); /*0x89bca2*/
    }
    return v7; /*0x89bca7*/
  }
}
