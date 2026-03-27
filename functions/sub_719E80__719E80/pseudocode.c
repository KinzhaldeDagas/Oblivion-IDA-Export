bool __thiscall sub_719E80(NiTriBasedGeomData *this, int a2)
{
  int v2; // ebx
  bool result; // al
  unsigned __int16 v5; // di
  unsigned int v6; // ecx
  _WORD *v7; // eax
  int v8; // ebx
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  _WORD *v12; // eax
  int v13; // ebx

  v2 = a2;
  result = sub_732E10(this, a2);
  if ( result )
  {
    v5 = *((_WORD *)this + 0x22);
    if ( v5 != *(_WORD *)(a2 + 0x44) )
      return 0;
    v6 = 0;
    if ( v5 )
    {
      v7 = *((_WORD **)this + 0x12);
      v8 = *(_DWORD *)(a2 + 0x48) - (_DWORD)v7;
      while ( *v7 == *(_WORD *)((char *)v7 + v8) )
      {
        ++v6;
        ++v7;
        if ( v6 >= v5 )
        {
          v2 = a2;
          goto LABEL_9;
        }
      }
    }
    else
    {
LABEL_9:
      v9 = this->members.m_usTriangles + 2 * v5;
      v10 = 0;
      v11 = v9;
      if ( !v9 )
        return 1;
      v12 = *((_WORD **)this + 0x13);
      v13 = *(_DWORD *)(v2 + 0x4C) - (_DWORD)v12;
      while ( *v12 == *(_WORD *)((char *)v12 + v13) )
      {
        ++v10;
        ++v12;
        if ( v10 >= v11 )
          return 1;
      }
    }
    return 0;
  }
  return result;
}
