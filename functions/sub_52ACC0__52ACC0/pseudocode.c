char *__thiscall sub_52ACC0(char *this)
{
  DNameNode::DNameNode((DNameNode *)(this + 4)); /*0x52aced*/
  Script_Constructor((TESForm *)(this + 0xC)); /*0x52acfd*/
  *this = 0; /*0x52ad0a*/
  TESForm_SetIsLinked((TESForm *)(this + 0xC), 0); /*0x52ad0c*/
  TESForm_MakeTemporary((TESForm *)(this + 0xC)); /*0x52ad13*/
  *(this + 0x34) = 1; /*0x52ad18*/
  *((_DWORD *)this + 0x17) = 0; /*0x52ad1c*/
  *((_DWORD *)this + 0x19) = 0; /*0x52ad1f*/
  *((_DWORD *)this + 0x1A) = 0; /*0x52ad22*/
  *(this + 0x60) = 0; /*0x52ad25*/
  *(this + 0x61) = 0; /*0x52ad28*/
  return this; /*0x52ad2d*/
}
