void __thiscall sub_4415C0(_DWORD *this)
{
  unsigned int i; // esi
  char *v3; // ecx
  unsigned int j; // esi
  char *v5; // ecx

  for ( i = 0; i < uExteriorCellBuffer; ++i )
  {
    v3 = *(char **)(*(this + 0xF) + 4 * i);
    if ( v3 )
      sub_4CCDA0(v3);
  }
  for ( j = 0; j < uInteriorCellBuffer; ++j )
  {
    v5 = *(char **)(*(this + 0xE) + 4 * j);
    if ( v5 )
      sub_4CCDA0(v5);
  }
}
