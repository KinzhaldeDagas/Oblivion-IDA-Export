void __thiscall sub_674820(_DWORD *this, int a2, int a3)
{
  bool v3; // zf
  _DWORD *v4; // ecx
  _DWORD *v5; // eax

  if ( a2 )
  {
    v3 = this + 0x18 == 0;
    v4 = this + 0x18;
    v5 = v4;
    if ( v3 )
    {
LABEL_5:
      BSSimpleList_PushFront(v4, a2);
    }
    else
    {
      while ( *v5 != a2 )
      {
        v5 = (_DWORD *)v5[1];
        if ( !v5 )
          goto LABEL_5;
      }
    }
  }
}
