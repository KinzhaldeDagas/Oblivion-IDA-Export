void __thiscall BSSimpleList_SortViaArrayAndRebuild(EntryData *this, int (__cdecl *a2)(tListVoid *, tListVoid *))
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

  v2 = this; /*0x5b27b2*/
  v3 = 0; /*0x5b27b4*/
  for ( i = this; i; i = (EntryData *)i->countDelta ) /*0x5b27bb*/
  {
    if ( i->extendData ) /*0x5b27c0*/
      ++v3; /*0x5b27c5*/
  }
  _alloca_(*(int *)v10); /*0x5b27d6*/
  v12 = v10; /*0x5b27df*/
  v5 = v2; /*0x5b27e2*/
  if ( v10 ) /*0x5b27e4*/
  {
    for ( j = 0; j < v3; ++j ) /*0x5b27f8*/
    {
      *(_DWORD *)&v10[4 * j] = v5->extendData; /*0x5b2802*/
      v5 = (EntryData *)v5->countDelta; /*0x5b2805*/
    }
    PointerArray_ShellSort(v10, (int (__cdecl *)(int, _DWORD))a2, v3); /*0x5b2817*/
    if ( v2->countDelta ) /*0x5b281c*/
    {
      do /*0x5b2836*/
      {
        v7 = *(_DWORD *)(v2->countDelta + 4); /*0x5b2825*/
        FormHeapFree(v2->countDelta); /*0x5b2829*/
        v2->countDelta = v7; /*0x5b2833*/
      }
      while ( v7 ); /*0x5b2836*/
    }
    v8 = 0; /*0x5b2838*/
    v2->extendData = 0; /*0x5b283c*/
    for ( k = 0; v8 < v3; k = v2 ) /*0x5b2841*/
    {
      if ( v8 <= 0 ) /*0x5b2845*/
      {
        v2->extendData = *(tListVoid **)&v12[4 * v8]; /*0x5b2874*/
        v2->countDelta = 0; /*0x5b2876*/
      }
      else
      {
        v9 = (EntryData *)FormHeapAlloc(8u); /*0x5b2849*/
        if ( v9 ) /*0x5b2853*/
        {
          v9->extendData = *(tListVoid **)&v12[4 * v8]; /*0x5b285b*/
          v9->countDelta = 0; /*0x5b285d*/
          v2 = v9; /*0x5b2864*/
        }
        else
        {
          v2 = 0; /*0x5b286a*/
        }
      }
      if ( k ) /*0x5b2882*/
        k->countDelta = (SInt32)v2; /*0x5b2884*/
      ++v8; /*0x5b2887*/
    }
  }
  else
  {
    sub_5B1E70(v2, a2); /*0x5b27ea*/
  }
}
