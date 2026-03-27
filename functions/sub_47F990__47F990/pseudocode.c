_DWORD *__thiscall sub_47F990(int *this, _DWORD *a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  int v8; // eax
  int v9; // edx

  v3 = *(this + 0x12);
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    *a2 = 0;
    a2[1] = 0;
    return a2;
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x11);
    v6 = v5;
    while ( *v6 != a3 )
    {
      ++v4;
      v6 += 4;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v8 = 4 * v4;
    v9 = v5[v8 + 2];
    a2[1] = v5[v8 + 3];
    *a2 = v9;
    return a2;
  }
}
