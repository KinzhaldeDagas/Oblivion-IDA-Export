char **__thiscall sub_6F2610(char **this, char **a2)
{
  char *v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  char *v9; // eax
  char *v10; // edx
  unsigned int v11; // eax
  _DWORD *v12; // ecx
  char *v13; // eax
  unsigned int v14; // eax
  char *v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 0xC) == 0 )
  {
    sub_6F1630(this);
    return this;
  }
  v7 = (int)*(this + 1);
  if ( v7 )
    v8 = (int)&(*(this + 2))[-v7] / 0xC;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (int)&(*(this + 3))[-v7] / 0xC;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        FormHeapFree((unsigned int)*(this + 1));
      v14 = sub_6F1080(a2);
      if ( !sub_556FE0(this, v14) )
        return this;
      v12 = *(this + 1);
      v13 = a2[1];
    }
    else
    {
      v15 = &v4[0xC * sub_6F1080(this)];
      sub_6F1350(v4, v15, v7);
      v12 = *(this + 2);
      v13 = v15;
    }
    *(this + 2) = (char *)sub_6F15A0(v13, a2[2], v12);
    return this;
  }
  sub_6F1240(v4, a2[2], v7);
  v9 = a2[1];
  if ( v9 )
    v10 = &(*(this + 1))[0xC * ((a2[2] - v9) / 0xC)];
  else
    v10 = *(this + 1);
  *(this + 2) = v10;
  return this;
}
