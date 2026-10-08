float **__cdecl sub_6CB0B0(float **a1, int a2)
{
  unsigned int v2; // ebp
  void *v3; // eax
  void *v4; // eax
  char v5; // bl
  char *v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  float *v10; // ebx
  int v11; // edi
  float *v12; // edi

  v2 = 0; /*0x6cb0d7*/
  v3 = (void *)FormHeapAlloc(0x68u); /*0x6cb0e3*/
  if ( v3 ) /*0x6cb0fe*/
    v4 = sub_6C7FB0(v3, *(char **)(a2 + 8), *(unsigned __int16 *)(a2 + 0x16), *(unsigned __int16 *)(a2 + 0x16), 0); /*0x6cb10d*/
  else
    v4 = 0; /*0x6cb114*/
  *a1 = (float *)v4; /*0x6cb11c*/
  if ( v4 ) /*0x6cb11e*/
    InterlockedIncrement((volatile LONG *)v4 + 1); /*0x6cb124*/
  v5 = 1; /*0x6cb137*/
  if ( *(_WORD *)(a2 + 0x16) ) /*0x6cb12a*/
  {
    do /*0x6cb1c5*/
    {
      v6 = *(char **)(*(_DWORD *)(a2 + 0x10) + 4 * v2); /*0x6cb142*/
      v7 = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * v2); /*0x6cb14a*/
      if ( v6 ) /*0x6cb151*/
      {
        if ( v7 ) /*0x6cb155*/
        {
          if ( v5 ) /*0x6cb159*/
          {
            v8 = (*(unsigned __int8 *)(v7 + 8) >> 1) & 3; /*0x6cb161*/
            if ( v8 != 2 ) /*0x6cb167*/
            {
              if ( v8 ) /*0x6cb16b*/
                v8 = 0; /*0x6cb16d*/
            }
            *((_DWORD *)*a1 + 9) = v8; /*0x6cb17a*/
            v5 = 0; /*0x6cb18e*/
            (*a1)[0xA] = *(float *)(v7 + 0xC); /*0x6cb190*/
            (*a1)[0xB] = *(float *)(v7 + 0x14); /*0x6cb1a0*/
            (*a1)[0xC] = *(float *)(v7 + 0x18); /*0x6cb1b0*/
          }
          sub_6CA8E0(*a1, v6, (volatile LONG *)v7); /*0x6cb1b7*/
        }
      }
      ++v2; /*0x6cb1c0*/
    }
    while ( v2 < *(unsigned __int16 *)(a2 + 0x16) ); /*0x6cb1c5*/
  }
  v9 = *(_DWORD *)(a2 + 0x2C); /*0x6cb1cb*/
  v10 = *a1; /*0x6cb1ce*/
  v11 = *((_DWORD *)*a1 + 8); /*0x6cb1d0*/
  if ( v11 != v9 ) /*0x6cb1d5*/
  {
    if ( v11 ) /*0x6cb1d9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x6cb1df*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x6cb1f5*/
    }
    *((_DWORD *)v10 + 8) = v9; /*0x6cb1f9*/
    if ( v9 ) /*0x6cb1fc*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x6cb202*/
  }
  v12 = *a1; /*0x6cb208*/
  FormHeapFree(*((_DWORD *)*a1 + 0x17)); /*0x6cb20e*/
  v12[0x17] = 0.0; /*0x6cb216*/
  return a1; /*0x6cb21f*/
}
