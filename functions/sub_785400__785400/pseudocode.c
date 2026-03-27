char **__thiscall sub_785400(char **this, char **a2)
{
  char *v4; // ebp
  unsigned int v5; // ecx
  char *v7; // edi
  unsigned int v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax
  char *v14; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 0x18) == 0 )
  {
    sub_784BF0(this);
    return this;
  }
  v7 = *(this + 1);
  if ( v7 )
    v8 = (*(this + 2) - v7) / 0x18;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v12 = (*(this + 3) - v7) / 0x18;
    else
      v12 = 0;
    if ( v5 <= v12 )
    {
      v14 = &v4[0x18 * sub_783FE0(this)];
      sub_784880(v4, v14, v7);
      *(this + 2) = (char *)sub_7849C0(v14, a2[2], *(this + 2));
      return this;
    }
    if ( v7 )
    {
      sub_7849F0(v7, *(this + 2));
      FormHeapFree((unsigned int)*(this + 1));
    }
    v13 = sub_783FE0(a2);
    if ( sub_784FA0(this, v13) )
      *(this + 2) = (char *)sub_7849C0(a2[1], a2[2], *(this + 1));
    return this;
  }
  v9 = (char *)sub_784880(v4, a2[2], *(this + 1));
  sub_7849F0(v9, *(this + 2));
  v10 = a2[1];
  if ( v10 )
    v11 = &(*(this + 1))[0x18 * ((a2[2] - v10) / 0x18)];
  else
    v11 = *(this + 1);
  *(this + 2) = v11;
  return this;
}
