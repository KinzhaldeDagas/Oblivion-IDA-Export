char __thiscall sub_4A60E0(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  if ( a2 )
  {
    v3 = this + 1;
    v4 = this + 1;
    if ( this == (_DWORD *)0xFFFFFFFC )
    {
LABEL_5:
      BSSimpleList_PushBack(v3, a2);
      ++*(this + 4);
      return 1;
    }
    while ( *v4 != a2 )
    {
      v4 = (_DWORD *)v4[1];
      if ( !v4 )
        goto LABEL_5;
    }
  }
  return 0;
}
