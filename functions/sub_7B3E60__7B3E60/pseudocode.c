unsigned int *sub_7B3E60()
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

  sub_7B3DB0(); /*0x7b3e87*/
  v0 = 0; /*0x7b3e94*/
  if ( dword_B2C350 ) /*0x7b3e8c*/
  {
    v1 = dword_B2C354; /*0x7b3e9a*/
    while ( !*(_DWORD *)(v1 + 4 * v0) ) /*0x7b3ea3*/
    {
      if ( ++v0 >= (unsigned int)dword_B2C350 ) /*0x7b3eae*/
        goto LABEL_5; /*0x7b3eae*/
    }
    result = *(unsigned int **)(v1 + 4 * v0); /*0x7b4006*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x7b3eb0*/
  }
  v3 = 0; /*0x7b3eb2*/
  v12 = result; /*0x7b3eb4*/
  v11 = 0; /*0x7b3eb8*/
  v4 = dword_B2C358 == 0; /*0x7b3ebc*/
  v5 = InterlockedDecrement; /*0x7b3ec2*/
  v14 = 0; /*0x7b3ec8*/
  if ( !v4 ) /*0x7b3ecc*/
  {
    if ( result ) /*0x7b3ed4*/
    {
      do /*0x7b3fc2*/
      {
        sub_7B2600((unsigned int **)&off_B2C34C, &v12, &v13, &v11); /*0x7b3ef4*/
        v3 = v11; /*0x7b3ef9*/
        if ( v11 ) /*0x7b3eff*/
        {
          v6 = *(_DWORD *)(v11 + 8); /*0x7b3f05*/
          if ( v6 ) /*0x7b3f0a*/
          {
            if ( !v5((volatile LONG *)(v6 + 4)) ) /*0x7b3f10*/
              (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7b3f22*/
            *(_DWORD *)(v3 + 8) = 0; /*0x7b3f24*/
          }
          FormHeapFree(*(_DWORD *)(v3 + 0x10)); /*0x7b3f2b*/
          *(_DWORD *)(v3 + 0x10) = 0; /*0x7b3f30*/
          v7 = *(_DWORD *)(v3 + 0x18); /*0x7b3f33*/
          if ( v7 ) /*0x7b3f3b*/
          {
            if ( !v5((volatile LONG *)(v7 + 4)) ) /*0x7b3f41*/
              (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7b3f53*/
            *(_DWORD *)(v3 + 0x18) = 0; /*0x7b3f55*/
          }
          v8 = *(_DWORD *)(v3 + 0x20); /*0x7b3f58*/
          if ( v8 ) /*0x7b3f5d*/
          {
            if ( !v5((volatile LONG *)(v8 + 4)) ) /*0x7b3f63*/
              (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7b3f75*/
            *(_DWORD *)(v3 + 0x20) = 0; /*0x7b3f77*/
          }
          v9 = *(_DWORD *)(v3 + 0x1C); /*0x7b3f7a*/
          if ( v9 ) /*0x7b3f7f*/
          {
            if ( !v5((volatile LONG *)(v9 + 4)) ) /*0x7b3f85*/
              (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7b3f97*/
            *(_DWORD *)(v3 + 0x1C) = 0; /*0x7b3f99*/
          }
          v10 = *(_DWORD *)(v3 + 0x24); /*0x7b3f9c*/
          if ( v10 ) /*0x7b3fa1*/
          {
            if ( !v5((volatile LONG *)(v10 + 4)) ) /*0x7b3fa7*/
              (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7b3fb9*/
            *(_DWORD *)(v3 + 0x24) = 0; /*0x7b3fbb*/
          }
        }
      }
      while ( v12 ); /*0x7b3fc2*/
    }
    result = (unsigned int *)NiTMap_Clear(&off_B2C34C); /*0x7b3fcd*/
  }
  v14 = 0xFFFFFFFF; /*0x7b3fd4*/
  if ( v3 ) /*0x7b3fdc*/
  {
    result = (unsigned int *)v5((volatile LONG *)(v3 + 4)); /*0x7b3fe2*/
    if ( !result ) /*0x7b3fe6*/
      return (**(unsigned int *(__thiscall ***)(unsigned int, int))v3)(v3, 1); /*0x7b3ff0*/
  }
  return result; /*0x7b3ff2*/
}
