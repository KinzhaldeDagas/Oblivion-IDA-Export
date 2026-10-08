int __thiscall sub_4A6120(_DWORD *this, int a2)
{
  int *v3; // ebp
  int v4; // esi
  int v5; // eax
  char v6; // cl
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // edx
  _DWORD *v10; // eax

  if ( this ) /*0x4a6127*/
    v3 = this + 1; /*0x4a6129*/
  else
    v3 = 0; /*0x4a612e*/
  v4 = a2; /*0x4a6130*/
  if ( !a2 ) /*0x4a6136*/
  {
    v5 = FormHeapAlloc(0x14u); /*0x4a613a*/
    if ( v5 ) /*0x4a6144*/
    {
      v6 = *((_BYTE *)this + 0xC); /*0x4a6146*/
      *(_DWORD *)(v5 + 4) = 0; /*0x4a6149*/
      *(_DWORD *)(v5 + 8) = 0; /*0x4a614c*/
      *(_DWORD *)v5 = TESRegionGrassObjectList::`vftable'; /*0x4a614f*/
      *(_BYTE *)(v5 + 0xC) = v6; /*0x4a6155*/
      *(_DWORD *)(v5 + 0x10) = 0; /*0x4a6158*/
    }
    else
    {
      v5 = 0; /*0x4a615d*/
    }
    v4 = v5; /*0x4a615f*/
  }
  if ( v3 ) /*0x4a6163*/
  {
    while ( 1 ) /*0x4a6170*/
    {
      v7 = *v3; /*0x4a6170*/
      if ( !*v3 ) /*0x4a6175*/
        return v4; /*0x4a6175*/
      if ( !*(_BYTE *)(v4 + 0xC) ) /*0x4a6177*/
        break; /*0x4a6177*/
      v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x14))(v7, 0); /*0x4a6184*/
      if ( v8 ) /*0x4a6188*/
      {
        v9 = (_DWORD *)(v4 + 4); /*0x4a618d*/
        if ( v4 != 0xFFFFFFFC ) /*0x4a6191*/
        {
          while ( *v9 != v8 ) /*0x4a6195*/
          {
            v9 = (_DWORD *)v9[1]; /*0x4a6197*/
            if ( !v9 ) /*0x4a619c*/
              goto LABEL_16; /*0x4a619c*/
          }
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 8))(v8, 1); /*0x4a61a9*/
          goto LABEL_23; /*0x4a61ab*/
        }
LABEL_16:
        BSSimpleList_PushBack((_DWORD *)(v4 + 4), v8); /*0x4a619e*/
        goto LABEL_22; /*0x4a619f*/
      }
LABEL_23:
      v3 = (int *)v3[1]; /*0x4a61cc*/
      if ( !v3 ) /*0x4a61d1*/
        return v4; /*0x4a61d1*/
    }
    v10 = (_DWORD *)(v4 + 4); /*0x4a61b0*/
    if ( v4 != 0xFFFFFFFC ) /*0x4a61b4*/
    {
      while ( *v10 != v7 ) /*0x4a61b8*/
      {
        v10 = (_DWORD *)v10[1]; /*0x4a61ba*/
        if ( !v10 ) /*0x4a61bf*/
          goto LABEL_21; /*0x4a61bf*/
      }
      goto LABEL_23; /*0x4a61b8*/
    }
LABEL_21:
    BSSimpleList_PushBack((_DWORD *)(v4 + 4), *v3); /*0x4a61c1*/
LABEL_22:
    ++*(_DWORD *)(v4 + 0x10); /*0x4a61c9*/
    goto LABEL_23; /*0x4a61c9*/
  }
  return v4; /*0x4a61d3*/
}
