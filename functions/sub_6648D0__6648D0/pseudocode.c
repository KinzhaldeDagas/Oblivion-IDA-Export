unsigned int __thiscall sub_6648D0(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  unsigned int result; // eax
  int v7; // esi

  if ( !*(this + 0x16D) )
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
    *(this + 0x16D) = v3;
  }
  v4 = (_DWORD *)*(this + 0x16D);
  if ( !v4[1] && !*v4 )
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
    BSSimpleList_PushFront((_DWORD *)*(this + 0x16D), (int)v5);
  }
  result = *(this + 0x16D);
  v7 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    result = a2;
    if ( a2 <= 7 )
    {
      result = ActorValue_GetGroupOffsetFromAV(0, a2);
      ++*(_BYTE *)((char)result + v7);
    }
  }
  return result;
}
