int *__thiscall sub_796BC0(int *this, int *a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  int v15; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) >> 4) == 0 )
  {
    sub_796850(this);
    return this;
  }
  v6 = (_DWORD *)*(this + 1);
  if ( v6 )
    v7 = (*(this + 2) - (int)v6) >> 4;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v11 = (*(this + 3) - (int)v6) >> 4;
    else
      v11 = 0;
    if ( v4 <= v11 )
    {
      if ( v6 )
        v12 = (*(this + 2) - (int)v6) >> 4;
      else
        v12 = 0;
      v13 = v3 + 0x10 * v12;
      sub_795CA0(v3, v13, *(this + 1));
      sub_7967F0(v13, a2[2], (char *)*(this + 2));
    }
    if ( v6 )
    {
      sub_795820(v6, (_DWORD *)*(this + 2));
      FormHeapFree(*(this + 1));
    }
    v14 = a2[1];
    if ( v14 )
      v15 = (a2[2] - v14) >> 4;
    else
      v15 = 0;
    if ( sub_795050(this, (char *)v15) )
      sub_7967F0(a2[1], a2[2], (char *)*(this + 1));
    return this;
  }
  v8 = (_DWORD *)sub_795CA0(v3, a2[2], *(this + 1));
  sub_794FC0(v8, (_DWORD *)*(this + 2));
  v9 = a2[1];
  if ( v9 )
    v10 = *(this + 1) + 0x10 * ((a2[2] - v9) >> 4);
  else
    v10 = *(this + 1);
  *(this + 2) = v10;
  return this;
}
