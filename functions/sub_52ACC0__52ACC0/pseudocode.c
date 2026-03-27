char *__thiscall sub_52ACC0(char *this)
{
  DNameNode::DNameNode((DNameNode *)(this + 4));
  Script_Constructor((TESForm *)(this + 0xC));
  *this = 0;
  TESForm_SetIsLinked((TESForm *)(this + 0xC), 0);
  TESForm_MakeTemporary((TESForm *)(this + 0xC));
  *(this + 0x34) = 1;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *(this + 0x60) = 0;
  *(this + 0x61) = 0;
  return this;
}
