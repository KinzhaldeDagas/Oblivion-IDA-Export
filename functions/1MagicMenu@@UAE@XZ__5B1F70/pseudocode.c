void __usercall MagicMenu::~MagicMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  int v6; // ecx
  unsigned int **v7; // esi
  int v8; // edx
  unsigned int *v9; // edi
  int v10; // esi

  this->__vftable = (MenuVtbl *)&MagicMenu::`vftable';
  while ( dword_B14368 )
  {
    v5 = dword_B14360;
    v6 = *(_DWORD *)dword_B14360;
    dword_B14360 = v6;
    if ( v6 )
      *(_DWORD *)(v6 + 4) = 0;
    else
      dword_B14364 = 0;
    v7 = *(unsigned int ***)(v5 + 8);
    ((void (__thiscall *)(void ***, int))g_MagicMenuMagicItemList[2])(&g_MagicMenuMagicItemList, v5);
    --dword_B14368;
    if ( v7 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        ContainerEntryExtraData_DestroyDataTable(*v7, v8);
        FormHeapFree((unsigned int)v9);
      }
      FormHeapFree((unsigned int)v7);
    }
  }
  if ( *((_DWORD *)this + 0xF) )
  {
    do
    {
      v10 = *(_DWORD *)(*((_DWORD *)this + 0xF) + 4);
      FormHeapFree(*((_DWORD *)this + 0xF));
      *((_DWORD *)this + 0xF) = v10;
    }
    while ( v10 );
  }
  *((_DWORD *)this + 0xE) = 0;
  sub_5B1D70((unsigned int *)this + 0x10);
  Menu::~Menu(this, a2, a3, a4);
}
