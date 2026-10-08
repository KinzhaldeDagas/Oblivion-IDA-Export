// local variable allocation has failed, the output may be wrong!
char __cdecl sub_54BA90(float a1, _DWORD *a2, int *a3, int a4)
{
  int v4; // eax
  int v5; // edi
  int v7; // edi
  int v8; // edi
  int *v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // ebx
  double v13; // kr00_8
  char v14; // [esp+33h] [ebp-11h]
  int v15; // [esp+34h] [ebp-10h]
  float v16; // [esp+34h] [ebp-10h]
  double v17; // [esp+34h] [ebp-10h]
  double v18; // [esp+3Ch] [ebp-8h]
  int v19; // [esp+3Ch] [ebp-8h]
  int vars0; // [esp+44h] [ebp+0h]
  float vars0a; // [esp+44h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+48h] [ebp+4h]

  v14 = 0; /*0x54baa1*/
  if ( !a3 || !a2 ) /*0x54baad*/
    return 0; /*0x54baad*/
  if ( !a2[3] ) /*0x54baaf*/
    goto LABEL_7; /*0x54baaf*/
  v4 = a2[1]; /*0x54bab5*/
  if ( *(_DWORD *)(v4 + 8) ) /*0x54bab8*/
  {
    v5 = *(_DWORD *)(v4 + 8); /*0x54babe*/
    v15 = (*(int (__thiscall **)(int *))(*a3 + 4))(a3); /*0x54bad1*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) != v15 ) /*0x54badd*/
      return 0; /*0x54badd*/
  }
  if ( !a2[3] ) /*0x54badf*/
  {
LABEL_7:
    (*(void (__thiscall **)(int *, _DWORD))(*a3 + 0x10))(a3, 0.0); /*0x54baf2*/
    return 0; /*0x54bafc*/
  }
  v7 = *a3; /*0x54bafd*/
  v16 = ((double (__thiscall *)(int *))*(_DWORD *)(*a3 + 0xC))(a3) + a1; /*0x54bb0d*/
  (*(void (__thiscall **)(int *, _DWORD))(v7 + 0x10))(a3, LODWORD(v16)); /*0x54bb1a*/
  v8 = *(_DWORD *)(a2[1] + 8); /*0x54bb1f*/
  if ( v8 ) /*0x54bb24*/
  {
    while ( 1 ) /*0x54bb39*/
    {
      v18 = ((double (__thiscall *)(int *))*(_DWORD *)(*a3 + 0xC))(a3); /*0x54bb39*/
      if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8) > v18 ) /*0x54bb4f*/
        break; /*0x54bb4f*/
      v14 |= (*(int (__thiscall **)(int *, int, _DWORD, int, int))(*a3 + 0x1C))(a3, v8, 1.0, 1, a4); /*0x54bb6b*/
      v19 = *a3; /*0x54bb71*/
      v17 = ((double (__thiscall *)(int *))*(_DWORD *)(*a3 + 0xC))(a3); /*0x54bb7c*/
      *(float *)&v17 = v17 - ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8); /*0x54bb94*/
      (*(void (__thiscall **)(int *, _DWORD))(v19 + 0x10))(a3, LODWORD(v17)); /*0x54bba2*/
      v9 = (int *)a2[1]; /*0x54bba4*/
      v10 = *v9; /*0x54bba7*/
      v11 = *v9 == 0; /*0x54bbab*/
      a2[1] = *v9; /*0x54bbad*/
      if ( v11 ) /*0x54bbb0*/
        a2[2] = 0; /*0x54bbb7*/
      else
        *(_DWORD *)(v10 + 4) = 0; /*0x54bbb2*/
      (*(void (__thiscall **)(_DWORD *, int *))(*a2 + 8))(a2, v9); /*0x54bbc2*/
      --a2[3]; /*0x54bbc4*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x54bbd0*/
      if ( a2[3] ) /*0x54bbd2*/
      {
        v8 = *(_DWORD *)(a2[1] + 8); /*0x54bbdb*/
        if ( v8 ) /*0x54bbe0*/
          continue; /*0x54bbe0*/
      }
      goto LABEL_16; /*0x54bbe0*/
    }
    v12 = *a3; /*0x54bc00*/
    (*(void (__thiscall **)(int *))(*a3 + 0xC))(a3); /*0x54bc07*/
    LODWORD(v13) = vars0; /*0xf1c00004*/
    HIDWORD(v13) = retaddr; /*0xf1c00008*/
    vars0a = v13 / ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8, 1, a4); /*0x54bc26*/
    return (*(int (__thiscall **)(int *, int, _DWORD))(v12 + 0x1C))(a3, v8, LODWORD(vars0a)) | v14; /*0x54bc38*/
  }
  else
  {
LABEL_16:
    (*(void (__thiscall **)(int *, _DWORD))(*a3 + 0x10))(a3, 0.0); /*0x54bbe6*/
    return v14; /*0x54bbf5*/
  }
}
