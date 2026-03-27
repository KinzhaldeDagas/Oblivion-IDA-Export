void __thiscall sub_5B27A0(EntryData *this, int (__cdecl *a2)(tListVoid *, tListVoid *))
{
  EntryData *v2; // esi
  int v3; // ebx
  EntryData *i; // eax
  EntryData *v5; // ecx
  int j; // eax
  SInt32 v7; // edi
  int v8; // edi
  EntryData *v9; // eax
  char v10[12]; // [esp+0h] [ebp-18h] BYREF
  EntryData *k; // [esp+Ch] [ebp-Ch]
  char *v12; // [esp+10h] [ebp-8h]

  v2 = this;
  v3 = 0;
  for ( i = this; i; i = (EntryData *)i->countDelta )
  {
    if ( i->extendData )
      ++v3;
  }
  _alloca_();
  v12 = v10;
  v5 = v2;
  if ( v10 )
  {
    for ( j = 0; j < v3; ++j )
    {
      *(_DWORD *)&v10[4 * j] = v5->extendData;
      v5 = (EntryData *)v5->countDelta;
    }
    sub_506F00(v10, (int (__cdecl *)(int, _DWORD))a2, v3);
    if ( v2->countDelta )
    {
      do
      {
        v7 = *(_DWORD *)(v2->countDelta + 4);
        FormHeapFree(v2->countDelta);
        v2->countDelta = v7;
      }
      while ( v7 );
    }
    v8 = 0;
    v2->extendData = 0;
    for ( k = 0; v8 < v3; k = v2 )
    {
      if ( v8 <= 0 )
      {
        v2->extendData = *(tListVoid **)&v12[4 * v8];
        v2->countDelta = 0;
      }
      else
      {
        v9 = (EntryData *)FormHeapAlloc(8u);
        if ( v9 )
        {
          v9->extendData = *(tListVoid **)&v12[4 * v8];
          v9->countDelta = 0;
          v2 = v9;
        }
        else
        {
          v2 = 0;
        }
      }
      if ( k )
        k->countDelta = (SInt32)v2;
      ++v8;
    }
  }
  else
  {
    sub_5B1E70(v2, a2);
  }
}
