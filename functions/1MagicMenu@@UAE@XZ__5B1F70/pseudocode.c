void __usercall MagicMenu::~MagicMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  int v6; // ecx
  unsigned int **v7; // esi
  int v8; // edx
  unsigned int *v9; // edi
  int v10; // esi

  this->__vftable = (MenuVtbl *)&MagicMenu::`vftable'; /*0x5b1f9b*/
  while ( dword_B14368 ) /*0x5b1fa3*/
  {
    v5 = dword_B14360; /*0x5b1fb0*/
    v6 = *(_DWORD *)dword_B14360; /*0x5b1fb5*/
    dword_B14360 = v6; /*0x5b1fb9*/
    if ( v6 ) /*0x5b1fbf*/
      *(_DWORD *)(v6 + 4) = 0; /*0x5b1fc1*/
    else
      dword_B14364 = 0; /*0x5b1fc6*/
    v7 = *(unsigned int ***)(v5 + 8); /*0x5b1fcc*/
    ((void (__thiscall *)(void ***, int))g_MagicMenuMagicItemList[2])(&g_MagicMenuMagicItemList, v5); /*0x5b1fdd*/
    --dword_B14368; /*0x5b1fdf*/
    if ( v7 ) /*0x5b1fe8*/
    {
      v9 = *v7; /*0x5b1fea*/
      if ( *v7 ) /*0x5b1fea*/
      {
        ContainerEntryExtraData_DestroyDataTable(*v7, v8); /*0x5b1ff2*/
        FormHeapFree((unsigned int)v9); /*0x5b1ff8*/
      }
      FormHeapFree((unsigned int)v7); /*0x5b2001*/
    }
  }
  if ( *((_DWORD *)this + 0xF) ) /*0x5b2011*/
  {
    do /*0x5b202a*/
    {
      v10 = *(_DWORD *)(*((_DWORD *)this + 0xF) + 4); /*0x5b2019*/
      FormHeapFree(*((_DWORD *)this + 0xF)); /*0x5b201d*/
      *((_DWORD *)this + 0xF) = v10; /*0x5b2027*/
    }
    while ( v10 ); /*0x5b202a*/
  }
  *((_DWORD *)this + 0xE) = 0; /*0x5b202f*/
  sub_5B1D70((unsigned int *)this + 0x10); /*0x5b2032*/
  Menu::~Menu(this, a2, a3, a4); /*0x5b2041*/
}
