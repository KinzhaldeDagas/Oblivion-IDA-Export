_BYTE *__thiscall sub_927A80(int *this, _BYTE *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v4 = *(this + 6);
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_6:
    *a2 = 1;
    return a2;
  }
  else
  {
    v6 = (_DWORD *)*(this + 5);
    while ( 1 )
    {
      v7 = *v6 + 0x14;
      if ( v7 == a3 || v7 == a4 )
        break;
      ++v5;
      ++v6;
      if ( v5 >= v4 )
        goto LABEL_6;
    }
    *a2 = 0;
    return a2;
  }
}
