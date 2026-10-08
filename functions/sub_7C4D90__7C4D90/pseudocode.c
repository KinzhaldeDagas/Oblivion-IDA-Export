unsigned int *sub_7C4D90()
{
  int v0; // eax
  int v1; // edx
  unsigned int *result; // eax
  unsigned int v3; // esi
  bool v4; // zf
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  unsigned int v11; // [esp+14h] [ebp-18h] BYREF
  unsigned int *v12; // [esp+18h] [ebp-14h] BYREF
  int v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  sub_7C4CE0(); /*0x7c4db7*/
  v0 = 0; /*0x7c4dc4*/
  if ( dword_B2CBD8 ) /*0x7c4dbc*/
  {
    v1 = dword_B2CBDC; /*0x7c4dca*/
    while ( !*(_DWORD *)(v1 + 4 * v0) ) /*0x7c4dd3*/
    {
      if ( ++v0 >= (unsigned int)dword_B2CBD8 ) /*0x7c4dde*/
        goto LABEL_5; /*0x7c4dde*/
    }
    result = *(unsigned int **)(v1 + 4 * v0); /*0x7c4f3f*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x7c4de0*/
  }
  v3 = 0; /*0x7c4de2*/
  v12 = result; /*0x7c4de4*/
  v11 = 0; /*0x7c4de8*/
  v4 = dword_B2CBE0 == 0; /*0x7c4dec*/
  v5 = InterlockedDecrement; /*0x7c4df2*/
  v14 = 0; /*0x7c4df8*/
  if ( !v4 ) /*0x7c4dfc*/
  {
    if ( result ) /*0x7c4e04*/
    {
      do /*0x7c4efb*/
      {
        sub_7B2600((unsigned int **)&off_B2CBD4, &v12, &v13, &v11); /*0x7c4e24*/
        v3 = v11; /*0x7c4e29*/
        if ( v11 ) /*0x7c4e2f*/
        {
          if ( !*(_BYTE *)(v11 + 0x32) ) /*0x7c4e35*/
          {
            v6 = *(_DWORD *)(v11 + 8); /*0x7c4e3e*/
            if ( v6 ) /*0x7c4e43*/
            {
              if ( !v5((volatile LONG *)(v6 + 4)) ) /*0x7c4e49*/
                (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c4e5b*/
              *(_DWORD *)(v3 + 8) = 0; /*0x7c4e5d*/
            }
            FormHeapFree(*(_DWORD *)(v3 + 0xC)); /*0x7c4e64*/
            *(_DWORD *)(v3 + 0xC) = 0; /*0x7c4e69*/
            v7 = *(_DWORD *)(v3 + 0x14); /*0x7c4e6c*/
            if ( v7 ) /*0x7c4e74*/
            {
              if ( !v5((volatile LONG *)(v7 + 4)) ) /*0x7c4e7a*/
                (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c4e8c*/
              *(_DWORD *)(v3 + 0x14) = 0; /*0x7c4e8e*/
            }
            v8 = *(_DWORD *)(v3 + 0x1C); /*0x7c4e91*/
            if ( v8 ) /*0x7c4e96*/
            {
              if ( !v5((volatile LONG *)(v8 + 4)) ) /*0x7c4e9c*/
                (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7c4eae*/
              *(_DWORD *)(v3 + 0x1C) = 0; /*0x7c4eb0*/
            }
            v9 = *(_DWORD *)(v3 + 0x18); /*0x7c4eb3*/
            if ( v9 ) /*0x7c4eb8*/
            {
              if ( !v5((volatile LONG *)(v9 + 4)) ) /*0x7c4ebe*/
                (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7c4ed0*/
              *(_DWORD *)(v3 + 0x18) = 0; /*0x7c4ed2*/
            }
            v10 = *(_DWORD *)(v3 + 0x20); /*0x7c4ed5*/
            if ( v10 ) /*0x7c4eda*/
            {
              if ( !v5((volatile LONG *)(v10 + 4)) ) /*0x7c4ee0*/
                (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7c4ef2*/
              *(_DWORD *)(v3 + 0x20) = 0; /*0x7c4ef4*/
            }
          }
        }
      }
      while ( v12 ); /*0x7c4efb*/
    }
    result = (unsigned int *)NiTMap_Clear(&off_B2CBD4); /*0x7c4f06*/
  }
  v14 = 0xFFFFFFFF; /*0x7c4f0d*/
  if ( v3 ) /*0x7c4f15*/
  {
    result = (unsigned int *)v5((volatile LONG *)(v3 + 4)); /*0x7c4f1b*/
    if ( !result ) /*0x7c4f1f*/
      return (**(unsigned int *(__thiscall ***)(unsigned int, int))v3)(v3, 1); /*0x7c4f29*/
  }
  return result; /*0x7c4f2b*/
}
