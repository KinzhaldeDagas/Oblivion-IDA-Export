void __thiscall sub_441670(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  if ( a2 )
  {
    v3 = (_DWORD *)*(this + 0x22);
    if ( v3 )
    {
      v5 = (_DWORD *)*(this + 0x22);
      while ( *v5 != a2 )
      {
        v5 = (_DWORD *)v5[1];
        if ( !v5 )
        {
          BSSimpleList_PushFront(v3, a2);
          return;
        }
      }
    }
    else
    {
      v4 = (_DWORD *)FormHeapAlloc(8u);
      if ( v4 )
      {
        *v4 = a2;
        v4[1] = 0;
        *(this + 0x22) = v4;
      }
      else
      {
        *(this + 0x22) = 0;
      }
    }
  }
}
