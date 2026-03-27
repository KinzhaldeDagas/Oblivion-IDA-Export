_BYTE *__thiscall sub_927AD0(int *this, _BYTE *a2, int a3)
{
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // edx

  if ( a3 )
  {
    v4 = *(this + 8);
    v5 = 0;
    if ( v4 <= 0 )
    {
LABEL_7:
      *a2 = 0;
      return a2;
    }
    else
    {
      v6 = (_DWORD *)*(this + 7);
      while ( *v6 != a3 )
      {
        ++v5;
        ++v6;
        if ( v5 >= v4 )
          goto LABEL_7;
      }
      v7 = *(this + 8) - 1;
      *(this + 8) = v7;
      *(_DWORD *)(*(this + 7) + 4 * v5) = *(_DWORD *)(*(this + 7) + 4 * v7);
      *a2 = 1;
      return a2;
    }
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
