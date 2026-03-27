void __cdecl sub_4B2730(_DWORD *a1, int arg4, int a2)
{
  _DWORD *v3; // ebp
  int v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // esi

  v3 = a1;
  if ( a1 && arg4 )
  {
    v4 = a2;
    a1 = 0;
    if ( !NiTMap_GetAt(&off_B08300, a2, &a1) || (v5 = a1) == 0 )
    {
      v6 = (_DWORD *)FormHeapAlloc(8u);
      if ( v6 )
      {
        *v6 = 0;
        v6[1] = 0;
      }
      else
      {
        v6 = 0;
      }
      v5 = v6;
      NiTMap_SetAt(&off_B08300, v4, (int)v6);
    }
    v7 = v5;
    if ( v5 )
    {
      do
      {
        v8 = v7[1];
        if ( !v8 && !*v7 )
          break;
        if ( *(_DWORD **)*v7 == v3 )
        {
          v9 = (_DWORD *)*v7;
          if ( *v7 )
            goto LABEL_17;
          break;
        }
        v7 = (_DWORD *)v7[1];
      }
      while ( v8 );
    }
    v9 = (_DWORD *)FormHeapAlloc(8u);
    *v9 = v3;
    v9[1] = 0;
    BSSimpleList_PushFront(v5, (int)v9);
LABEL_17:
    v9[1] += arg4;
  }
}
