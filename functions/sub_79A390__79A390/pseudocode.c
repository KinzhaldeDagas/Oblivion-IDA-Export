void __thiscall sub_79A390(_DWORD *this, unsigned __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int i; // ebp
  int v6; // ebx
  unsigned int j; // esi
  unsigned __int16 v9; // [esp+10h] [ebp+Ch]

  if ( *this )
  {
    for ( i = 0; i < *(this + 0xB); ++i )
    {
      v9 = 2 * sub_799EE0(a4);
      v6 = FormHeapAlloc((unsigned __int64)v9 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v9);
      for ( j = 0; j < 2 * sub_799EE0(a4); ++j )
        *(_WORD *)(v6 + 2 * j) = j + a3 + 2 * i * sub_799EE0(a4);
      sub_796100((_DWORD *)*this, a2, v6, v9);
      ++*(_WORD *)(*this + 0x26);
    }
  }
}
