void __thiscall sub_626C90(_DWORD *this, int a2)
{
  bool v2; // zf
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  v2 = this + 0x15 == 0;
  v3 = this + 0x15;
  v4 = v3;
  if ( v2 )
  {
LABEL_4:
    BSSimpleList_PushFront(v3, a2);
  }
  else
  {
    while ( *v4 != a2 )
    {
      v4 = (_DWORD *)v4[1];
      if ( !v4 )
        goto LABEL_4;
    }
  }
}
