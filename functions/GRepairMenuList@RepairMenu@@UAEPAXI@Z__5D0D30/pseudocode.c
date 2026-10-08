NiTPointerList__BSImageSpaceShader *__thiscall RepairMenu::RepairMenuList::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  RepairMenu::RepairMenuList::~RepairMenuList(this); /*0x5d0d33*/
  if ( (a2 & 1) != 0 ) /*0x5d0d3d*/
    FormHeapFree((unsigned int)this); /*0x5d0d40*/
  return this; /*0x5d0d4a*/
}
