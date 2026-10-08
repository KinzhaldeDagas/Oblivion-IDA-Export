int *__thiscall sub_4B0920(int *this, _DWORD *a2)
{
  int *v2; // edi
  int v3; // ebp
  int (__thiscall **v4)(_DWORD *, int); // esi
  int v5; // eax
  int v6; // eax
  int *v7; // esi
  int *v8; // ebx
  int v9; // ebp
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // esi
  int v15; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x4b0927*/
  v3 = 0; /*0x4b0929*/
  v15 = 0; /*0x4b092f*/
  do /*0x4b0a13*/
  {
    v4 = (int (__thiscall **)(_DWORD *, int))(*a2 + 0x284); /*0x4b093a*/
    Magic_GetSkillAVFromSchool(v3); /*0x4b0940*/
    v6 = (*v4)(a2, v5); /*0x4b094d*/
    v7 = sub_4B07C0(this, v3, v6); /*0x4b095a*/
    v8 = v7; /*0x4b095e*/
    if ( !v7 ) /*0x4b0960*/
      goto LABEL_22; /*0x4b0960*/
    do /*0x4b09d6*/
    {
      v9 = *v7; /*0x4b0966*/
      if ( !*v7 ) /*0x4b096a*/
        goto LABEL_18; /*0x4b096a*/
      if ( !v2 ) /*0x4b096e*/
      {
        v10 = (int *)FormHeapAlloc(8u); /*0x4b0972*/
        if ( v10 ) /*0x4b097c*/
        {
          *v10 = 0; /*0x4b097e*/
          v10[1] = 0; /*0x4b0980*/
          v2 = v10; /*0x4b0983*/
        }
        else
        {
          v2 = 0; /*0x4b0989*/
        }
LABEL_12:
        if ( *v2 ) /*0x4b09a4*/
        {
          v12 = (int *)FormHeapAlloc(8u); /*0x4b09ab*/
          if ( v12 ) /*0x4b09b5*/
          {
            *v12 = *v2; /*0x4b09b9*/
            v12[1] = 0; /*0x4b09bb*/
          }
          else
          {
            v12 = 0; /*0x4b09c4*/
          }
          v12[1] = v2[1]; /*0x4b09c9*/
          v2[1] = (int)v12; /*0x4b09cc*/
        }
        *v2 = v9; /*0x4b09cf*/
        goto LABEL_18; /*0x4b09cf*/
      }
      v11 = v2; /*0x4b098d*/
      do /*0x4b0999*/
      {
        if ( *v11 == v9 ) /*0x4b0992*/
          break; /*0x4b0992*/
        v11 = (int *)v11[1]; /*0x4b0994*/
      }
      while ( v11 ); /*0x4b0999*/
      if ( !v11 ) /*0x4b09a2*/
        goto LABEL_12; /*0x4b09a2*/
LABEL_18:
      v7 = (int *)v7[1]; /*0x4b09d1*/
    }
    while ( v7 ); /*0x4b09d6*/
    if ( v8[1] ) /*0x4b09d8*/
    {
      do /*0x4b09f4*/
      {
        v13 = *(_DWORD *)(v8[1] + 4); /*0x4b09e3*/
        FormHeapFree(v8[1]); /*0x4b09e7*/
        v8[1] = v13; /*0x4b09f1*/
      }
      while ( v13 ); /*0x4b09f4*/
    }
    v3 = v15; /*0x4b09f6*/
    *v8 = 0; /*0x4b09fa*/
LABEL_22:
    FormHeapFree((unsigned int)v8); /*0x4b0a00*/
    v15 = ++v3; /*0x4b0a0f*/
  }
  while ( v3 < 6 ); /*0x4b0a13*/
  return v2; /*0x4b0a1b*/
}
