void __thiscall _Fac_tidy(void *this)
{
  std::_Fac_node *i; // eax
  unsigned int v2; // esi
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x9808cc*/
  std::_Lockit::_Lockit((std::_Lockit *)&v3, 0); /*0x9808d2*/
  for ( i = unk_BA9B54; unk_BA9B54; i = unk_BA9B54 ) /*0x9808d7*/
  {
    v2 = (unsigned int)i; /*0x9808e1*/
    unk_BA9B54 = *(std::_Fac_node **)i; /*0x9808e7*/
    std::_Fac_node::~_Fac_node(i); /*0x9808ec*/
    FormHeapFree(v2); /*0x9808f2*/
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v3); /*0x980905*/
}
