_BYTE *__thiscall sub_90F410(int *this, _BYTE *a2, int a3)
{
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax

  v3 = *(this + 0x49);
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    *a2 = 0;
    return a2;
  }
  else
  {
    v5 = (_DWORD *)(*(this + 0x48) + 4);
    while ( *v5 != a3 )
    {
      ++v4;
      v5 += 2;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    *a2 = 1;
    return a2;
  }
}
