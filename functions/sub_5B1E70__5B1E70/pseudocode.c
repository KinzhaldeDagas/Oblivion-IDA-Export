void __thiscall sub_5B1E70(EntryData *this, int (__cdecl *a2)(tListVoid *, tListVoid *))
{
  EntryData *v2; // esi
  tListVoid **p_extendData; // ebx
  int v4; // ecx
  EntryData *v5; // eax
  char v6; // al
  tListVoid *extendData; // ebp
  tListVoid *v8; // edi
  char i; // [esp+Bh] [ebp-5h]
  int v10; // [esp+Ch] [ebp-4h]

  v2 = this; /*0x5b1e75*/
  p_extendData = 0; /*0x5b1e77*/
  if ( this ) /*0x5b1e7b*/
  {
    v4 = 0; /*0x5b1e7d*/
    v5 = v2; /*0x5b1e7f*/
    do /*0x5b1e8d*/
    {
      if ( v5->extendData ) /*0x5b1e81*/
        ++v4; /*0x5b1e85*/
      v5 = (EntryData *)v5->countDelta; /*0x5b1e88*/
    }
    while ( v5 ); /*0x5b1e8d*/
    v10 = v4; /*0x5b1e91*/
    v6 = 1; /*0x5b1e95*/
    if ( v4 ) /*0x5b1e97*/
    {
      while ( v6 ) /*0x5b1ea6*/
      {
        for ( i = 0; v2; v2 = (EntryData *)v2->countDelta ) /*0x5b1eaf*/
        {
          if ( p_extendData ) /*0x5b1eb3*/
          {
            extendData = v2->extendData; /*0x5b1eb5*/
            v8 = *p_extendData; /*0x5b1eb7*/
            if ( a2(*p_extendData, v2->extendData) > 0 ) /*0x5b1ec4*/
            {
              if ( v8 ) /*0x5b1ec8*/
                v2->extendData = v8; /*0x5b1eca*/
              if ( extendData ) /*0x5b1ece*/
                *p_extendData = extendData; /*0x5b1ed0*/
              i = 1; /*0x5b1ed2*/
            }
          }
          p_extendData = &v2->extendData; /*0x5b1ed7*/
        }
        if ( !--v10 ) /*0x5b1ee5*/
          break; /*0x5b1ee5*/
        v6 = i; /*0x5b1ea0*/
      }
    }
  }
}
