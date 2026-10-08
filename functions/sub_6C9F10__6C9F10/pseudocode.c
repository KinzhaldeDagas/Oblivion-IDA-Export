LONG __thiscall sub_6C9F10(float *this, int a2, int a3, int a4)
{
  float *v4; // ebx
  unsigned int i; // esi
  void (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // eax
  int v9; // esi
  LONG result; // eax
  bool v11; // zf
  int v12; // edi
  int *v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int **v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // esi
  int v23; // eax
  unsigned int v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-20h] BYREF
  int v27; // [esp+20h] [ebp-1Ch] BYREF
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+26h] [ebp-16h]
  unsigned int v30; // [esp+28h] [ebp-14h]
  __int16 v31; // [esp+2Ch] [ebp-10h]
  int v32; // [esp+38h] [ebp-4h]
  int v33; // [esp+40h] [ebp+4h]

  v4 = this; /*0x6c9f37*/
  for ( i = 0; i < *(_DWORD *)(a2 + 0xC); ++i ) /*0x6c9f41*/
  {
    sub_6C6610((_DWORD *)a2, &v26, i); /*0x6c9f52*/
    if ( v26 ) /*0x6c9f5d*/
    {
      v7 = (void (__thiscall ***)(_DWORD, int))v26; /*0x6c9f5f*/
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x6c9f65*/
        (**v7)(v7, 1); /*0x6c9f7b*/
    }
  }
  v8 = *((_DWORD *)v4 + 9); /*0x6c9f85*/
  if ( v8 == 2 || !v8 ) /*0x6c9f8f*/
    *(_DWORD *)(a2 + 0x24) = v8; /*0x6c9f91*/
  *(float *)(a2 + 0x28) = v4[0xA]; /*0x6c9fa1*/
  *(float *)(a2 + 0x2C) = v4[0xB]; /*0x6c9faf*/
  *(float *)(a2 + 0x30) = v4[0xC]; /*0x6c9fbd*/
  v27 = *((_DWORD *)v4 + 0x19); /*0x6c9fc5*/
  v9 = v27; /*0x6c9fc0*/
  if ( v27 ) /*0x6c9fc9*/
    InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x6c9fcf*/
  result = 0xFFFF; /*0x6c9fd5*/
  v28 = 0xFFFF; /*0x6c9fda*/
  v29 = 0xFFFF; /*0x6c9fdf*/
  v30 = 0xFFFFFFFF; /*0x6c9fe4*/
  v31 = 0xFFFF; /*0x6c9fee*/
  v11 = *((_DWORD *)v4 + 3) == 0; /*0x6c9ff3*/
  v32 = 1; /*0x6c9ff6*/
  v25 = 0; /*0x6c9ffe*/
  if ( !v11 ) /*0x6ca002*/
  {
    v33 = 0; /*0x6ca008*/
    while ( 1 ) /*0x6ca013*/
    {
      v12 = v33 + *((_DWORD *)v4 + 5); /*0x6ca013*/
      v13 = *(int **)(v12 + 4); /*0x6ca01a*/
      if ( *(_DWORD *)v12 && v13 ) /*0x6ca025*/
      {
        if ( !a4 ) /*0x6ca031*/
          goto LABEL_21; /*0x6ca031*/
        v14 = *(_DWORD *)(a4 + 0xC); /*0x6ca033*/
        v15 = 0; /*0x6ca036*/
        if ( v14 ) /*0x6ca03a*/
        {
          v16 = (int **)(*(_DWORD *)(a4 + 0x14) + 4); /*0x6ca043*/
          while ( v13 != *v16 ) /*0x6ca048*/
          {
            ++v15; /*0x6ca04a*/
            v16 += 4; /*0x6ca04d*/
            if ( v15 >= v14 ) /*0x6ca052*/
              goto LABEL_33; /*0x6ca052*/
          }
LABEL_21:
          v17 = 0; /*0x6ca059*/
          if ( (*(unsigned __int16 (__thiscall **)(_DWORD))(*v13 + 0x74))(*(_DWORD *)(v12 + 4)) ) /*0x6ca062*/
          {
            while ( 1 ) /*0x6ca07b*/
            {
              v18 = (*(int (__thiscall **)(int *, int))(*v13 + 0x80))(v13, v17); /*0x6ca07b*/
              v19 = *v13; /*0x6ca080*/
              if ( v18 == *(_DWORD *)(v12 + 8) ) /*0x6ca084*/
                break; /*0x6ca084*/
              if ( ++v17 >= (unsigned int)(*(unsigned __int16 (__thiscall **)(int *))(v19 + 0x74))(v13) ) /*0x6ca093*/
                goto LABEL_32; /*0x6ca093*/
            }
            v20 = (*(int (__thiscall **)(int *, int))(v19 + 0x90))(v13, v17); /*0x6ca09e*/
            v21 = *(_DWORD *)(a2 + 0x14) + 0x10 * sub_6C94E0((unsigned int *)a2, v20, &v27); /*0x6ca0b6*/
            *(_DWORD *)(v21 + 8) = *(_DWORD *)(v12 + 8); /*0x6ca0b8*/
            v22 = *(_DWORD *)(v21 + 4); /*0x6ca0bb*/
            if ( v22 != *(_DWORD *)(v12 + 4) ) /*0x6ca0c1*/
            {
              if ( v22 ) /*0x6ca0c5*/
              {
                if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x6ca0cb*/
                  (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x6ca0e1*/
              }
              v23 = *(_DWORD *)(v12 + 4); /*0x6ca0e3*/
              *(_DWORD *)(v21 + 4) = v23; /*0x6ca0e8*/
              if ( v23 ) /*0x6ca0eb*/
                InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x6ca0f1*/
            }
            *(_BYTE *)(v21 + 0xD) = *(_BYTE *)(v12 + 0xD); /*0x6ca0fa*/
          }
LABEL_32:
          v4 = this; /*0x6ca0fd*/
        }
      }
LABEL_33:
      v33 += 0x10; /*0x6ca101*/
      result = ++v25; /*0x6ca10a*/
      if ( v25 >= *((_DWORD *)v4 + 3) ) /*0x6ca114*/
      {
        v9 = v27; /*0x6ca11a*/
        break; /*0x6ca11a*/
      }
    }
  }
  v32 = 0xFFFFFFFF; /*0x6ca11e*/
  if ( v9 ) /*0x6ca128*/
  {
    result = InterlockedDecrement((volatile LONG *)(v9 + 4)); /*0x6ca12e*/
    if ( !result ) /*0x6ca136*/
      return (**(LONG (__thiscall ***)(int, int))v9)(v9, 1); /*0x6ca140*/
  }
  return result; /*0x6ca142*/
}
