void __thiscall std::_Fac_node::~_Fac_node(std::_Fac_node *this)
{
  void (__thiscall ***v1)(_DWORD, int); // eax

  v1 = (void (__thiscall ***)(_DWORD, int))sub_6F6DC0(*((_DWORD *)this + 1)); /*0x9807e6*/
  if ( v1 ) /*0x9807ed*/
    (**v1)(v1, 1); /*0x9807f5*/
}
