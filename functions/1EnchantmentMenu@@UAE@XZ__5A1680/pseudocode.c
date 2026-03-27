void __usercall EnchantmentMenu::~EnchantmentMenu(
        EnchantmentMenu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  unsigned int *v7; // edi
  unsigned int v8; // edi
  _DWORD *v9; // ecx
  unsigned int v10; // edi

  *(_DWORD *)this = &EnchantmentMenu::`vftable';
  v7 = *((unsigned int **)this + 0xC);
  if ( v7 )
  {
    ContainerEntryExtraData_DestroyDataTable(v7, a2);
    FormHeapFree((unsigned int)v7);
  }
  v8 = *((_DWORD *)this + 0xB);
  if ( v8 )
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0xB), a2);
    FormHeapFree(v8);
  }
  v9 = *((_DWORD **)this + 0x24);
  if ( v9 )
  {
    BSSimpleList_Clear(v9);
    FormHeapFree(*((_DWORD *)this + 0x24));
  }
  v10 = *((_DWORD *)this + 0x26);
  if ( v10 )
  {
    sub_57FEB0(*((_DWORD **)this + 0x26));
    FormHeapFree(v10);
  }
  Menu::~Menu((Menu *)this, a3, a4, a5);
}
