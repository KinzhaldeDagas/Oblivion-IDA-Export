void __usercall SigilStoneMenu::~SigilStoneMenu(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  unsigned int *v6; // edi
  _DWORD *v7; // ecx
  unsigned int v8; // edi

  this->__vftable = (MenuVtbl *)&SigilStoneMenu::`vftable'; /*0x5d4169*/
  v6 = *((unsigned int **)this + 0xB); /*0x5d416f*/
  if ( v6 ) /*0x5d417c*/
  {
    ContainerEntryExtraData_DestroyDataTable(v6, a2); /*0x5d4180*/
    FormHeapFree((unsigned int)v6); /*0x5d4186*/
  }
  v7 = *((_DWORD **)this + 0x1B); /*0x5d418e*/
  if ( v7 ) /*0x5d4193*/
  {
    BSSimpleList_Clear(v7); /*0x5d4195*/
    FormHeapFree(*((_DWORD *)this + 0x1B)); /*0x5d419e*/
  }
  v8 = *((_DWORD *)this + 0x1D); /*0x5d41a6*/
  if ( v8 ) /*0x5d41ab*/
  {
    sub_57FEB0(*((_DWORD **)this + 0x1D)); /*0x5d41af*/
    FormHeapFree(v8); /*0x5d41b5*/
  }
  Menu::~Menu(this, a3, a4, a5); /*0x5d41c7*/
}
