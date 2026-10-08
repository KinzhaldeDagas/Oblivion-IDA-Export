void __cdecl std::locale::facet::facet_Register(struct std::locale::facet *a1)
{
  std::_Fac_node *v1; // eax

  if ( !unk_BA9B54 ) /*0x98090c*/
    sub_980D85((int)_Fac_tidy); /*0x98091a*/
  v1 = (std::_Fac_node *)FormHeapAlloc(8u); /*0x980922*/
  if ( v1 ) /*0x98092a*/
  {
    *(_DWORD *)v1 = unk_BA9B54; /*0x980932*/
    *((_DWORD *)v1 + 1) = a1; /*0x980938*/
  }
  else
  {
    v1 = 0; /*0x98093d*/
  }
  unk_BA9B54 = v1; /*0x98093f*/
}
