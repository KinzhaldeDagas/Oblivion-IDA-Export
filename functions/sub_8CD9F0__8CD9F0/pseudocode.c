_BYTE *__thiscall sub_8CD9F0(int *this, _BYTE *a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // ecx

  v3 = *(this + 0x25);
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    *a2 = 0;
    return a2;
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x24);
    while ( *v5 != a3 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    *a2 = 1;
    return a2;
  }
}
