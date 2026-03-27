int __thiscall sub_91CD10(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx
  int v6; // ebx

  v2 = *(this + 3);
  result = 0;
  if ( v2 > 0 )
  {
    for ( i = (_DWORD *)*(this + 2); *i != a2; ++i )
    {
      if ( ++result >= v2 )
        return result;
    }
    if ( result >= 0 )
    {
      v5 = *(this + 2);
      v6 = *(this + 3) - 1;
      *(this + 3) = v6;
      *(_DWORD *)(v5 + 4 * result) = *(_DWORD *)(v5 + 4 * v6);
      return (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x10))(
               *(this + 0xFFFFFFFC),
               a2 + 0x14,
               dword_BA8448);
    }
  }
  return result;
}
