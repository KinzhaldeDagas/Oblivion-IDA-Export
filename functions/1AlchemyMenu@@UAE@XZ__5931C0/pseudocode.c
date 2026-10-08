void __usercall AlchemyMenu::~AlchemyMenu(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int **v8; // edi
  int v9; // ebp
  unsigned int *v10; // ebx
  int v11; // edi

  this->__vftable = (MenuVtbl *)&AlchemyMenu::`vftable'; /*0x5931eb*/
  v6 = *((_DWORD *)this + 0x25); /*0x5931f1*/
  if ( v6 ) /*0x593201*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x10))(v6, 1); /*0x59320a*/
  v7 = *((_DWORD *)this + 0x28); /*0x59320c*/
  if ( v7 ) /*0x593214*/
  {
    sub_57FEB0(*((_DWORD **)this + 0x28)); /*0x593218*/
    FormHeapFree(v7); /*0x59321e*/
  }
  v8 = (unsigned int **)((char *)this + 0xB0); /*0x593226*/
  v9 = 4; /*0x59322c*/
  do /*0x59324d*/
  {
    v10 = *v8; /*0x593231*/
    if ( *v8 ) /*0x593231*/
    {
      ContainerEntryExtraData_DestroyDataTable(*v8, a2); /*0x593239*/
      FormHeapFree((unsigned int)v10); /*0x59323f*/
    }
    ++v8; /*0x593247*/
    --v9; /*0x59324a*/
  }
  while ( v9 ); /*0x59324d*/
  if ( *((_DWORD *)this + 0x2B) ) /*0x59324f*/
  {
    do /*0x59327a*/
    {
      v11 = *(_DWORD *)(*((_DWORD *)this + 0x2B) + 4); /*0x593266*/
      FormHeapFree(*((_DWORD *)this + 0x2B)); /*0x59326a*/
      *((_DWORD *)this + 0x2B) = v11; /*0x593274*/
    }
    while ( v11 ); /*0x59327a*/
  }
  *((_DWORD *)this + 0x2A) = 0; /*0x59327e*/
  Menu::~Menu(this, a3, a4, a5); /*0x593290*/
}
