void __thiscall sub_65DF40(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( !*(this + 0x16B) )
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
    *(this + 0x16B) = v3;
  }
  v4 = (_DWORD *)*(this + 0x16B);
  if ( v4 )
  {
    while ( *v4 != a2 )
    {
      v4 = (_DWORD *)v4[1];
      if ( !v4 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    BSSimpleList_PushFront((_DWORD *)*(this + 0x16B), a2);
  }
}
