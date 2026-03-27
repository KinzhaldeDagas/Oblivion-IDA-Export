int __thiscall sub_9530E0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v3 = a2 + *(this + 2);
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_8;
      v3 = *(this + 3) - a2;
    }
  }
  else
  {
    v3 = a2;
  }
  *(this + 2) = v3;
LABEL_8:
  v4 = *(this + 2);
  v5 = *(this + 3);
  if ( v4 <= v5 )
    *(this + 3) = v5;
  else
    *(this + 3) = v4;
  return 0;
}
