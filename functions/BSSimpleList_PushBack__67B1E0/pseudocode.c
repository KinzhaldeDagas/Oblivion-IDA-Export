void __thiscall BSSimpleList_PushBack(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  bool v4; // zf
  _DWORD *v5; // eax

  if ( a2 )
  {
    v2 = this + 1;
    v3 = this;
    if ( *(this + 1) )
    {
      do
      {
        v3 = (_DWORD *)*v2;
        v4 = *(_DWORD *)(*v2 + 4) == 0;
        v2 = (_DWORD *)(*v2 + 4);
      }
      while ( !v4 );
    }
    if ( *v3 )
    {
      v5 = (_DWORD *)FormHeapAlloc(8u);
      if ( v5 )
      {
        *v5 = a2;
        v5[1] = 0;
        v3[1] = v5;
      }
      else
      {
        v3[1] = 0;
      }
    }
    else
    {
      *v3 = a2;
    }
  }
}
