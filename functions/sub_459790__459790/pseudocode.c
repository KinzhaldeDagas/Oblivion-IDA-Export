int __thiscall sub_459790(_DWORD *this, int *a2, int a3, int a4)
{
  _DWORD *v4; // ecx
  int *v6; // eax
  int *v7; // esi
  int v8; // edi

  v4 = (_DWORD *)*(this + 4);
  if ( !v4 || !NiTMap_GetAt(v4, (int)a2, &a2) )
    return 0;
  v6 = a2;
  if ( !a2 )
    return 0;
  while ( 1 )
  {
    v7 = (int *)*v6;
    if ( *v6 )
    {
      if ( a3 == v7[1] && a4 == v7[2] )
        break;
    }
    v6 = (int *)v6[1];
    if ( !v6 )
      return 0;
  }
  v8 = *v7;
  BSSimpleList_Remove(a2, *v6);
  FormHeapFree((unsigned int)v7);
  return v8;
}
