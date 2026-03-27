char __thiscall sub_43FEA0(_DWORD *this, int a2)
{
  unsigned int i; // eax

  for ( i = 0; i < uExteriorCellBuffer; ++i )
  {
    if ( *(_DWORD *)(*(this + 0xF) + 4 * i) == a2 )
      return 1;
  }
  return 0;
}
