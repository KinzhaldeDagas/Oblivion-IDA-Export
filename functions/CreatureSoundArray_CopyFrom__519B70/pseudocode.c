int **__thiscall CreatureSoundArray_CopyFrom(_DWORD *this, int **a2)
{
  unsigned int v3; // esi
  int v4; // edi
  int **result; // eax
  unsigned int v6; // ebx
  int *v7; // esi
  int v8; // edi
  int v9; // eax
  bool v10; // zf
  int v11; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x519b76*/
  v4 = 0xA; /*0x519b78*/
  do /*0x519b8e*/
  {
    CreatureSoundArray_ClearNthSound(this, v3++); /*0x519b83*/
    --v4; /*0x519b8b*/
  }
  while ( v4 ); /*0x519b8e*/
  result = a2; /*0x519b90*/
  if ( a2 ) /*0x519b96*/
  {
    v6 = 0; /*0x519b99*/
    v11 = 0xA; /*0x519b9f*/
    do /*0x519c00*/
    {
      v7 = 0; /*0x519ba7*/
      if ( v6 <= 9 ) /*0x519bac*/
        v7 = *result; /*0x519bae*/
      for ( ; v7; v7 = (int *)v7[1] ) /*0x519bb2*/
      {
        if ( !v7[1] && !*v7 ) /*0x519bba*/
          break; /*0x519bbd*/
        v8 = *v7; /*0x519bbf*/
        v9 = FormHeapAlloc(8u); /*0x519bc3*/
        if ( v9 ) /*0x519bcd*/
        {
          if ( v8 ) /*0x519bd1*/
          {
            *(_DWORD *)v9 = *(_DWORD *)v8; /*0x519bd5*/
            *(_BYTE *)(v9 + 4) = *(_BYTE *)(v8 + 4); /*0x519bda*/
          }
        }
        CreatureSoundArray_InsertSoundEntry(this, v9, v6); /*0x519be1*/
      }
      result = a2 + 1; /*0x519bf1*/
      ++v6; /*0x519bf4*/
      v10 = v11-- == 1; /*0x519bf7*/
      ++a2; /*0x519bfc*/
    }
    while ( !v10 ); /*0x519c00*/
  }
  return result; /*0x519c03*/
}
