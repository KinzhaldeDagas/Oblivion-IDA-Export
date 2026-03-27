_BYTE *__thiscall sub_9363E0(unsigned __int8 *this, _BYTE *a2, _BYTE *a3)
{
  int v3; // eax

  v3 = *(this + 0x21) - 1;
  if ( v3 < 0 )
  {
LABEL_5:
    *a2 = 0;
    return a2;
  }
  else
  {
    while ( *(this + 4 * v3) != *a3 || *(this + 4 * v3 + 1) != a3[1] )
    {
      if ( --v3 < 0 )
        goto LABEL_5;
    }
    *a2 = 1;
    return a2;
  }
}
