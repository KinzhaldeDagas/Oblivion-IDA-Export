bool *__thiscall sub_8DE0C0(_DWORD *this, bool *a2, int **a3)
{
  int v3; // ebp
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int j; // ebx
  int v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  _DWORD *v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // eax
  signed int v25; // ecx
  signed int v26; // esi
  unsigned int v27; // edi
  int v28; // eax
  int v29; // ecx
  int v31; // eax
  bool v32; // sf
  int v33; // ecx
  _DWORD *i; // [esp+10h] [ebp-38h]
  _DWORD *v35; // [esp+14h] [ebp-34h] BYREF
  signed int v36; // [esp+18h] [ebp-30h]
  int v37; // [esp+1Ch] [ebp-2Ch]
  _BYTE v38[40]; // [esp+20h] [ebp-28h] BYREF

  v3 = 0; /*0x8de0c9*/
  for ( i = this; v3 < *(this + 0xE); ++v3 ) /*0x8de0d2*/
  {
    v4 = *(_DWORD *)(*(this + 0xD) + 4 * v3); /*0x8de0d7*/
    v5 = *(_DWORD *)(v4 + 0x3C); /*0x8de0da*/
    v6 = v4 + 0x14; /*0x8de0dd*/
    v7 = 0; /*0x8de0e0*/
    if ( v5 > 0 ) /*0x8de0e4*/
    {
      do /*0x8de129*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 8 * v7 + 4); /*0x8de0e9*/
        v9 = v8 + *(_DWORD *)(v8 + 0x10); /*0x8de0f0*/
        if ( !*(_BYTE *)(v9 + 0x91) ) /*0x8de0f2*/
        {
          sub_91F220(a3, v3, *(unsigned __int16 *)(v9 + 0x8C)); /*0x8de10b*/
          if ( *(_DWORD *)**a3 == -(*a3)[1] ) /*0x8de11d*/
          {
LABEL_36:
            *a2 = 1; /*0x8de2e8*/
            return a2; /*0x8de2f6*/
          }
        }
        ++v7; /*0x8de126*/
      }
      while ( v7 < *(_DWORD *)(v6 + 0x28) ); /*0x8de129*/
      this = i; /*0x8de12b*/
    }
  }
  for ( j = 0; j < *(this + 0xE); ++j ) /*0x8de13e*/
  {
    v11 = *(_DWORD *)(*(this + 0xD) + 4 * j); /*0x8de143*/
    v12 = 0; /*0x8de149*/
    if ( *(int *)(v11 + 0x6C) > 0 ) /*0x8de14d*/
    {
      v13 = 0; /*0x8de14f*/
      do /*0x8de1aa*/
      {
        v14 = *(_DWORD *)(v11 + 0x68); /*0x8de151*/
        v15 = *(_DWORD *)(v14 + v13 + 4); /*0x8de154*/
        v16 = v13 + v14; /*0x8de15e*/
        if ( !*(_BYTE *)(v15 + 0x91) ) /*0x8de158*/
        {
          v17 = *(_DWORD *)(v16 + 8); /*0x8de164*/
          if ( !*(_BYTE *)(v17 + 0x91) ) /*0x8de167*/
          {
            sub_91F220(a3, *(unsigned __int16 *)(v15 + 0x8C), *(unsigned __int16 *)(v17 + 0x8C)); /*0x8de185*/
            if ( *(_DWORD *)**a3 == -(*a3)[1] ) /*0x8de19b*/
              goto LABEL_36; /*0x8de19b*/
          }
        }
        ++v12; /*0x8de1a4*/
        v13 += 0x1C; /*0x8de1a5*/
      }
      while ( v12 < *(_DWORD *)(v11 + 0x6C) ); /*0x8de1aa*/
      this = i; /*0x8de1ac*/
    }
  }
  v18 = *(this + 0x18); /*0x8de1b8*/
  v19 = 0; /*0x8de1bb*/
  v20 = v38; /*0x8de1bf*/
  v21 = 0x8000000A; /*0x8de1c3*/
  v35 = v38; /*0x8de1c8*/
  v36 = 0; /*0x8de1cc*/
  v37 = 0x8000000A; /*0x8de1d0*/
  if ( v18 <= 0 ) /*0x8de1d4*/
  {
LABEL_31:
    if ( v21 >= 0 ) /*0x8de291*/
    {
      v29 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8de2a2*/
      if ( !v29 ) /*0x8de2aa*/
        v29 = unk_BA7D9C; /*0x8de2ac*/
      sub_8A75D0(v29, v20, 4 * v21, 0x14); /*0x8de2bf*/
    }
    *a2 = *(_DWORD *)**a3 == -(*a3)[1]; /*0x8de2df*/
    return a2; /*0x8de2e5*/
  }
  while ( 1 ) /*0x8de1e0*/
  {
    v22 = *(this + 0x17); /*0x8de1e0*/
    v23 = *(_DWORD *)(v22 + 4 * v19); /*0x8de1e3*/
    v24 = (_DWORD *)(v22 + 4 * v19); /*0x8de1e8*/
    if ( v23 ) /*0x8de1eb*/
      break; /*0x8de1eb*/
LABEL_30:
    if ( ++v19 >= *(this + 0x18) ) /*0x8de289*/
      goto LABEL_31; /*0x8de289*/
  }
  v36 = 0; /*0x8de1f1*/
  (*(void (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)*v24 + 0xC))(*v24, &v35); /*0x8de202*/
  v25 = v36; /*0x8de205*/
  v20 = v35; /*0x8de209*/
  v26 = 0; /*0x8de20d*/
  v27 = 0xFFFFFFFF; /*0x8de20f*/
  do /*0x8de229*/
  {
    if ( v26 >= v36 ) /*0x8de214*/
      goto LABEL_29; /*0x8de214*/
    if ( !*(_BYTE *)(v35[v26] + 0x91) ) /*0x8de219*/
      v27 = v26; /*0x8de223*/
    ++v26; /*0x8de225*/
  }
  while ( v27 == 0xFFFFFFFF ); /*0x8de229*/
  if ( v26 >= v36 ) /*0x8de22d*/
  {
LABEL_29:
    v21 = v37; /*0x8de27b*/
    this = i; /*0x8de27f*/
    goto LABEL_30; /*0x8de27f*/
  }
  while ( 1 ) /*0x8de230*/
  {
    v28 = v20[v26]; /*0x8de230*/
    if ( *(_BYTE *)(v28 + 0x91) ) /*0x8de233*/
      goto LABEL_28; /*0x8de23b*/
    sub_91F220(a3, *(unsigned __int16 *)(v20[v27] + 0x8C), *(unsigned __int16 *)(v28 + 0x8C)); /*0x8de256*/
    if ( *(_DWORD *)**a3 == -(*a3)[1] ) /*0x8de268*/
      break; /*0x8de268*/
    v25 = v36; /*0x8de26e*/
    v20 = v35; /*0x8de272*/
LABEL_28:
    if ( ++v26 >= v25 ) /*0x8de279*/
      goto LABEL_29; /*0x8de279*/
  }
  v31 = v37; /*0x8de2f9*/
  v32 = v37 < 0; /*0x8de2fd*/
  *a2 = 1; /*0x8de303*/
  if ( !v32 ) /*0x8de306*/
  {
    v33 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8de318*/
    if ( !v33 ) /*0x8de320*/
      v33 = unk_BA7D9C; /*0x8de322*/
    sub_8A75D0(v33, v35, 4 * v31, 0x14); /*0x8de338*/
  }
  return a2; /*0x8de2d5*/
}
