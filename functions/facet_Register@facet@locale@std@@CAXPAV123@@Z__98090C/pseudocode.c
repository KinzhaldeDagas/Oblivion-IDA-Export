void __cdecl std::locale::facet::facet_Register(struct std::locale::facet *a1)
{
  std::_Fac_node *v1; // eax

  if ( !dword_BA9B54 )
    sub_980D85((int)_Fac_tidy);
  v1 = (std::_Fac_node *)FormHeapAlloc(8u);
  if ( v1 )
  {
    *(_DWORD *)v1 = dword_BA9B54;
    *((_DWORD *)v1 + 1) = a1;
  }
  else
  {
    v1 = 0;
  }
  dword_BA9B54 = v1;
}
