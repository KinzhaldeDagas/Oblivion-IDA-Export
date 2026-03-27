int *__thiscall sub_557470(int *this, int *a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = a2[1];
  if ( !v4 || (v5 = (a2[2] - v4) / 6) == 0 )
  {
    sub_556E30(this);
    return this;
  }
  v7 = *(this + 1);
  if ( v7 )
    v8 = (*(this + 2) - v7) / 6;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (*(this + 3) - v7) / 6;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        FormHeapFree(*(this + 1));
      v14 = sub_54F700(a2);
      if ( !sub_5571B0(this, v14) )
        return this;
      v12 = *(this + 1);
      v13 = a2[1];
    }
    else
    {
      v15 = v4 + 6 * sub_54F700(this);
      sub_556C70(v4, v15, v7);
      v12 = *(this + 2);
      v13 = v15;
    }
    *(this + 2) = sub_6F0130(v13, a2[2], v12);
    return this;
  }
  sub_556780(v4, a2[2], v7);
  v9 = a2[1];
  if ( v9 )
    v10 = *(this + 1) + 6 * ((a2[2] - v9) / 6);
  else
    v10 = *(this + 1);
  *(this + 2) = v10;
  return this;
}
