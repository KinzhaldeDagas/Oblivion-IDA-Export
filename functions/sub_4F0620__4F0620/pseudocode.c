_DWORD *__fastcall sub_4F0620(int a1)
{
  int v1; // ebx
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  TESObjectCELL *v4; // ecx
  int *v5; // esi
  int v6; // eax
  TESObjectCELL *v7; // eax

  do
  {
    v1 = a1;
    a1 = *(_DWORD *)(a1 + 0x7C);
  }
  while ( a1 );
  v2 = (_DWORD *)FormHeapAlloc(8u);
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
    v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  if ( v3 )
  {
    v4 = *(TESObjectCELL **)(v1 + 0x34);
    if ( v4 )
      sub_4CB520(v4, v3);
  }
  v5 = (int *)(TESDataHandler + 0xC);
  if ( TESDataHandler != 0xFFFFFFF4 )
  {
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        if ( *(_DWORD *)(v6 + 0x7C) == v1 )
        {
          if ( v3 )
          {
            v7 = *(TESObjectCELL **)(v6 + 0x34);
            if ( v7 )
              sub_4CB520(v7, v3);
          }
        }
      }
      v5 = (int *)v5[1];
    }
    while ( v5 );
  }
  return v3;
}
