signed int __thiscall sub_8A63A0(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x26);
  result = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x25) - 4) = 0;
    return 0xFFFFFFFF;
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x25);
    while ( *v4 != a2 )
    {
      ++result;
      ++v4;
      if ( result >= v2 )
        goto LABEL_5;
    }
    *(_DWORD *)(*(this + 0x25) + 4 * result) = 0;
  }
  return result;
}
