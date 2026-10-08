void __usercall EnchantmentMenu::~EnchantmentMenu(
        EnchantmentMenu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  unsigned int *v6; // edi
  unsigned int v7; // edi
  _DWORD *v8; // ecx
  unsigned int v9; // edi

  *(_DWORD *)this = &EnchantmentMenu::`vftable'; /*0x5a16a9*/
  v6 = *((unsigned int **)this + 0xC); /*0x5a16af*/
  if ( v6 ) /*0x5a16bc*/
  {
    ContainerEntryExtraData_DestroyDataTable(v6, a2); /*0x5a16c0*/
    FormHeapFree((unsigned int)v6); /*0x5a16c6*/
  }
  v7 = *((_DWORD *)this + 0xB); /*0x5a16ce*/
  if ( v7 ) /*0x5a16d3*/
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0xB), a2); /*0x5a16d7*/
    FormHeapFree(v7); /*0x5a16dd*/
  }
  v8 = *((_DWORD **)this + 0x24); /*0x5a16e5*/
  if ( v8 ) /*0x5a16ed*/
  {
    BSSimpleList_Clear(v8); /*0x5a16ef*/
    FormHeapFree(*((_DWORD *)this + 0x24)); /*0x5a16fb*/
  }
  v9 = *((_DWORD *)this + 0x26); /*0x5a1703*/
  if ( v9 ) /*0x5a170b*/
  {
    sub_57FEB0(*((_DWORD **)this + 0x26)); /*0x5a170f*/
    FormHeapFree(v9); /*0x5a1715*/
  }
  Menu::~Menu((Menu *)this, a3, a4, a5); /*0x5a1727*/
}
