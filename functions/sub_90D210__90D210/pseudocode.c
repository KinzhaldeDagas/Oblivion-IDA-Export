_BYTE *__thiscall sub_90D210(_DWORD *this, _BYTE *a2, _DWORD *a3)
{
  _DWORD *v3; // eax

  v3 = a3;
  if ( a3 )
  {
    while ( v3 != this )
    {
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
        goto LABEL_4;
    }
    *a2 = 1;
    return a2;
  }
  else
  {
LABEL_4:
    *a2 = 0;
    return a2;
  }
}
