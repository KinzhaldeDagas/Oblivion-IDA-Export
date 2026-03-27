void __thiscall sub_4FB510(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *i; // eax
  _DWORD *v5; // eax

  if ( !*(this + 2) )
  {
    v3 = (_DWORD *)FormHeapAlloc(8u);
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
    }
    else
    {
      v3 = 0;
    }
    *(this + 2) = v3;
  }
  for ( i = (_DWORD *)*(this + 2); i; i = (_DWORD *)i[1] )
  {
    if ( !*i )
      break;
    if ( *(_DWORD *)*i == a2 )
      return;
  }
  v5 = (_DWORD *)FormHeapAlloc(8u);
  *v5 = a2;
  v5[1] = 0;
  BSSimpleList_PushFront((_DWORD *)*(this + 2), (int)v5);
}
