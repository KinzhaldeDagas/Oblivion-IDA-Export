char __thiscall sub_4A6350(_DWORD *this, int a2)
{
  bool v3; // zf
  _DWORD *v4; // ecx
  _DWORD *v5; // eax

  if ( !a2 )
    return 0;
  v3 = this + 1 == 0;
  v4 = this + 1;
  v5 = v4;
  if ( v3 )
  {
LABEL_6:
    BSSimpleList_PushFront(v4, a2);
  }
  else
  {
    while ( *v5 != a2 )
    {
      v5 = (_DWORD *)v5[1];
      if ( !v5 )
        goto LABEL_6;
    }
  }
  return 1;
}
