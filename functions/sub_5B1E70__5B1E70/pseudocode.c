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

  v2 = this;
  p_extendData = 0;
  if ( this )
  {
    v4 = 0;
    v5 = v2;
    do
    {
      if ( v5->extendData )
        ++v4;
      v5 = (EntryData *)v5->countDelta;
    }
    while ( v5 );
    v10 = v4;
    v6 = 1;
    if ( v4 )
    {
      while ( v6 )
      {
        for ( i = 0; v2; v2 = (EntryData *)v2->countDelta )
        {
          if ( p_extendData )
          {
            extendData = v2->extendData;
            v8 = *p_extendData;
            if ( a2(*p_extendData, v2->extendData) > 0 )
            {
              if ( v8 )
                v2->extendData = v8;
              if ( extendData )
                *p_extendData = extendData;
              i = 1;
            }
          }
          p_extendData = &v2->extendData;
        }
        if ( !--v10 )
          break;
        v6 = i;
      }
    }
  }
}
