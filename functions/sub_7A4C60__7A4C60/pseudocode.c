int *__thiscall sub_7A4C60(int *this, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  char *v12; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 0x54) == 0 )
  {
    sub_7A4C20(this);
    return this;
  }
  v6 = *(this + 1);
  if ( v6 )
    v7 = (*(this + 2) - v6) / 0x54;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(this + 3) - v6) / 0x54;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 0x54 * sub_7876A0(this);
      sub_7A45C0(a2[1], v11, v6);
      sub_7A4BF0(v11, a2[2], (char *)*(this + 2));
    }
    if ( v6 )
    {
      sub_7A45A0(v6, *(this + 2));
      FormHeapFree(*(this + 1));
    }
    v12 = (char *)sub_7876A0(a2);
    if ( sub_7A3230(this, v12) )
      sub_7A4BF0(a2[1], a2[2], (char *)*(this + 1));
    return this;
  }
  v8 = sub_7A3B80(a2[1], a2[2], v6);
  sub_7A36B0(v8, *(this + 2));
  v9 = a2[1];
  if ( v9 )
    *(this + 2) = *(this + 1) + 0x54 * ((a2[2] - v9) / 0x54);
  else
    *(this + 2) = *(this + 1);
  return this;
}
