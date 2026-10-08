int *__thiscall sub_52FC40(int **this, int a2, int a3)
{
  int **v4; // ebp
  int **v5; // ecx
  int *v6; // esi
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  int v11; // eax

  if ( !a2 ) /*0x52fc6d*/
    return 0; /*0x52fc71*/
  v4 = this + 0xA; /*0x52fc76*/
  v5 = this + 0xA; /*0x52fc79*/
  v6 = 0; /*0x52fc7b*/
  if ( !v5 ) /*0x52fc7f*/
    goto LABEL_17; /*0x52fc7f*/
  do /*0x52fc81*/
  {
    v7 = *v5; /*0x52fc81*/
    if ( !*v5 ) /*0x52fc81*/
      break; /*0x52fc81*/
    if ( v6 ) /*0x52fc89*/
      return v6; /*0x52fc89*/
    v5 = (int **)v5[1]; /*0x52fc8b*/
    v6 = v7; /*0x52fc8e*/
    if ( *((_BYTE *)v7 + 0x20) ) /*0x52fc90*/
    {
      v8 = *v7; /*0x52fc95*/
      if ( *v6 && *(_DWORD *)(v8 + 0xC) == a2 ) /*0x52fc9e*/
        continue; /*0x52fc9e*/
      v9 = v6[7]; /*0x52fca0*/
      if ( !v9 ) /*0x52fca5*/
      {
LABEL_14:
        v6 = 0; /*0x52fcb5*/
        continue; /*0x52fcb5*/
      }
      v10 = *(_DWORD *)(v9 + 0xC) == a2; /*0x52fca7*/
    }
    else
    {
      if ( *v7 == a2 ) /*0x52fcae*/
        continue; /*0x52fcae*/
      v10 = v7[7] == a2; /*0x52fcb0*/
    }
    if ( !v10 ) /*0x52fcb3*/
      goto LABEL_14; /*0x52fcb3*/
  }
  while ( v5 ); /*0x52fc81*/
  if ( !v6 ) /*0x52fcbd*/
  {
LABEL_17:
    v11 = FormHeapAlloc(0x24u); /*0x52fcbf*/
    if ( v11 ) /*0x52fccb*/
    {
      *(_DWORD *)(v11 + 0xC) = 0; /*0x52fccd*/
      *(_DWORD *)(v11 + 0x18) = 1; /*0x52fcd0*/
      *(_DWORD *)(v11 + 0x10) = 0; /*0x52fcd7*/
      *(_DWORD *)(v11 + 0x14) = 0; /*0x52fcda*/
      *(_DWORD *)(v11 + 8) = 0; /*0x52fcdd*/
      *(_DWORD *)(v11 + 4) = &TopicInfoArray::`vftable'; /*0x52fce0*/
      *(_DWORD *)v11 = 0; /*0x52fce7*/
      *(_DWORD *)(v11 + 0x1C) = 0; /*0x52fce9*/
      *(_BYTE *)(v11 + 0x20) = 0; /*0x52fcec*/
    }
    else
    {
      v11 = 0; /*0x52fcf1*/
    }
    v6 = (int *)v11; /*0x52fcfe*/
    *(_DWORD *)v11 = a2; /*0x52fd00*/
    BSSimpleList_PushBack(v4, v11); /*0x52fd02*/
  }
  return v6; /*0x52fd09*/
}
