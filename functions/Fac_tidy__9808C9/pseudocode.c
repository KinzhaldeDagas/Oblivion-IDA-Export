void __thiscall _Fac_tidy(void *this)
{
  std::_Fac_node *i; // eax
  unsigned int v2; // esi
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  std::_Lockit::_Lockit((std::_Lockit *)&v3, 0);
  for ( i = dword_BA9B54; dword_BA9B54; i = dword_BA9B54 )
  {
    v2 = (unsigned int)i;
    dword_BA9B54 = *(std::_Fac_node **)i;
    std::_Fac_node::~_Fac_node(i);
    FormHeapFree(v2);
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v3);
}
