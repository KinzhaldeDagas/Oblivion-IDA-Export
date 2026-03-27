int __thiscall sub_664970(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int result; // eax

  v3 = (_DWORD *)*(this + 0x16D);
  v4 = 0;
  if ( v3 )
  {
    do
    {
      v7 = v3[1];
      if ( !v7 && !*v3 )
        break;
      v4 = (_DWORD *)*v3;
      v3 = (_DWORD *)v3[1];
    }
    while ( v7 );
  }
  else
  {
    v5 = (_DWORD *)FormHeapAlloc(8u);
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
    }
    else
    {
      v5 = 0;
    }
    *(this + 0x16D) = v5;
    v6 = (_DWORD *)FormHeapAlloc(8u);
    if ( v6 )
    {
      *v6 = 0;
      v6[1] = 0;
      v4 = v6;
      BSSimpleList_PushFront((_DWORD *)*(this + 0x16D), (int)v6);
    }
    else
    {
      v4 = 0;
      BSSimpleList_PushFront((_DWORD *)*(this + 0x16D), 0);
    }
  }
  if ( !v4 )
    return 0;
  result = 0;
  if ( a2 <= 7 )
    return *((char *)v4 + ActorValue_GetGroupOffsetFromAV(0, a2));
  return result;
}
