signed int __thiscall sub_8DE670(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx
  int v5; // edx

  v2 = *(this + 0x18);
  result = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    result = 0xFFFFFFFF;
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x17);
    while ( *v4 != a2 )
    {
      ++result;
      ++v4;
      if ( result >= v2 )
        goto LABEL_5;
    }
  }
  v5 = *(this + 0x18) - 1;
  for ( *(this + 0x18) = v5; result < *(this + 0x18); ++result )
    *(_DWORD *)(*(this + 0x17) + 4 * result) = *(_DWORD *)(*(this + 0x17) + 4 * result + 4);
  return result;
}
