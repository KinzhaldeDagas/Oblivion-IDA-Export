char **__thiscall sub_79B160(char **this, char **a2)
{
  char *v3; // eax
  unsigned int v4; // ecx
  int v6; // edi
  unsigned int v7; // eax
  char *v8; // eax
  unsigned int v9; // eax
  char *v10; // ebx
  int v11; // eax

  if ( this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 0x38) == 0 )
  {
    sub_79ABD0(this);
    return this;
  }
  v6 = (int)*(this + 1);
  if ( v6 )
    v7 = (int)&(*(this + 2))[-v6] / 0x38;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v9 = (int)&(*(this + 3))[-v6] / 0x38;
    else
      v9 = 0;
    if ( v4 <= v9 )
    {
      v10 = &a2[1][0x38 * sub_799EE0(this)];
      sub_79AA40(a2[1], v10, v6);
      *(this + 2) = sub_79AAD0(v10, a2[2], *(this + 2));
      return this;
    }
    if ( v6 )
      FormHeapFree((unsigned int)*(this + 1));
    v11 = sub_799EE0(a2);
    if ( sub_79ACC0(this, v11) )
      *(this + 2) = sub_79AAD0(a2[1], a2[2], *(this + 1));
    return this;
  }
  sub_79A950(a2[1], a2[2], v6);
  v8 = a2[1];
  if ( v8 )
    *(this + 2) = &(*(this + 1))[0x38 * ((a2[2] - v8) / 0x38)];
  else
    *(this + 2) = *(this + 1);
  return this;
}
