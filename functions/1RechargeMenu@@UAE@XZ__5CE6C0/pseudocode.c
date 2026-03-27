void __usercall RechargeMenu::~RechargeMenu(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  unsigned int *v7; // edi

  this->__vftable = (MenuVtbl *)&RechargeMenu::`vftable';
  v7 = *((unsigned int **)this + 0x11);
  if ( v7 )
  {
    ContainerEntryExtraData_DestroyDataTable(v7, a2);
    FormHeapFree((unsigned int)v7);
  }
  Menu::~Menu(this, a3, a4, a5);
}
