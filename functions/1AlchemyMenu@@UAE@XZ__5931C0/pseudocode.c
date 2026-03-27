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

  this->__vftable = (MenuVtbl *)&AlchemyMenu::`vftable';
  v6 = *((_DWORD *)this + 0x25);
  if ( v6 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x10))(v6, 1);
  v7 = *((_DWORD *)this + 0x28);
  if ( v7 )
  {
    sub_57FEB0(*((_DWORD **)this + 0x28));
    FormHeapFree(v7);
  }
  v8 = (unsigned int **)((char *)this + 0xB0);
  v9 = 4;
  do
  {
    v10 = *v8;
    if ( *v8 )
    {
      ContainerEntryExtraData_DestroyDataTable(*v8, a2);
      FormHeapFree((unsigned int)v10);
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( *((_DWORD *)this + 0x2B) )
  {
    do
    {
      v11 = *(_DWORD *)(*((_DWORD *)this + 0x2B) + 4);
      FormHeapFree(*((_DWORD *)this + 0x2B));
      *((_DWORD *)this + 0x2B) = v11;
    }
    while ( v11 );
  }
  *((_DWORD *)this + 0x2A) = 0;
  Menu::~Menu(this, a3, a4, a5);
}
