_DWORD *__thiscall sub_79FB80(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v6; // ebx
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 0x30) == 0 )
  {
    sub_79F630(this);
    return this;
  }
  v6 = (_DWORD *)*(this + 1);
  if ( v6 )
    v7 = (*(this + 2) - (int)v6) / 0x30;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(this + 3) - (int)v6) / 0x30;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 0x30 * sub_799F10(this);
      sub_79E0C0(a2[1], v11, (int)v6);
      sub_79EA70(this, v11, a2[2], (_DWORD *)*(this + 2));
    }
    if ( v6 )
    {
      sub_79EAA0(v6, (_DWORD *)*(this + 2));
      FormHeapFree(*(this + 1));
    }
    v12 = sub_799F10(a2);
    if ( sub_79AD20(this, v12) )
      sub_79EA70(this, a2[1], a2[2], (_DWORD *)*(this + 1));
    return this;
  }
  v8 = (_DWORD *)sub_79BE80(a2[1], a2[2], (int)v6);
  sub_79E150(v8, (_DWORD *)*(this + 2));
  v9 = a2[1];
  if ( v9 )
    *(this + 2) = *(this + 1) + 0x30 * ((a2[2] - v9) / 0x30);
  else
    *(this + 2) = *(this + 1);
  return this;
}
