NiTPointerList__BSImageSpaceShader *__thiscall RepairMenu::RepairMenuList::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  RepairMenu::RepairMenuList::~RepairMenuList(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
