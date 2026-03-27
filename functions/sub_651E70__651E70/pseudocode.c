void __thiscall sub_651E70(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( a2 )
  {
    if ( !*(this + 0x5C) )
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
      *(this + 0x5C) = v3;
    }
    v4 = (_DWORD *)*(this + 0x5C);
    if ( v4 )
    {
      while ( *v4 != a2 )
      {
        v4 = (_DWORD *)v4[1];
        if ( !v4 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      BSSimpleList_PushFront((_DWORD *)*(this + 0x5C), a2);
    }
  }
}
