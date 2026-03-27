void __usercall SigilStoneMenu::~SigilStoneMenu(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  unsigned int *v7; // edi
  _DWORD *v8; // ecx
  unsigned int v9; // edi

  this->__vftable = (MenuVtbl *)&SigilStoneMenu::`vftable';
  v7 = *((unsigned int **)this + 0xB);
  if ( v7 )
  {
    ContainerEntryExtraData_DestroyDataTable(v7, a2);
    FormHeapFree((unsigned int)v7);
  }
  v8 = *((_DWORD **)this + 0x1B);
  if ( v8 )
  {
    BSSimpleList_Clear(v8);
    FormHeapFree(*((_DWORD *)this + 0x1B));
  }
  v9 = *((_DWORD *)this + 0x1D);
  if ( v9 )
  {
    sub_57FEB0(*((_DWORD **)this + 0x1D));
    FormHeapFree(v9);
  }
  Menu::~Menu(this, a3, a4, a5);
}
