void __usercall RechargeMenu::~RechargeMenu(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  unsigned int *v6; // edi

  this->__vftable = (MenuVtbl *)&RechargeMenu::`vftable'; /*0x5ce6e9*/
  v6 = *((unsigned int **)this + 0x11); /*0x5ce6ef*/
  if ( v6 ) /*0x5ce6fc*/
  {
    ContainerEntryExtraData_DestroyDataTable(v6, a2); /*0x5ce700*/
    FormHeapFree((unsigned int)v6); /*0x5ce706*/
  }
  Menu::~Menu(this, a3, a4, a5); /*0x5ce718*/
}
