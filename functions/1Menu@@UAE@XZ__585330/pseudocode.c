// Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
void __usercall Menu::~Menu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  UInt32 unk14; // eax
  InterfaceManager *Singleton; // eax
  unsigned int v7; // ecx
  TileMenu *tile; // eax
  TileMenu *v9; // ecx
  bool v10; // zf
  UInt32 *p_unk08; // edi
  OblivionTileTemplate *v12; // ebp
  UInt32 v13; // edi
  signed int v14; // [esp-8h] [ebp-18h]
  int v15; // [esp+Ch] [ebp-4h] BYREF

  unk14 = this->members.unk14; /*0x585335*/
  this->__vftable = (MenuVtbl *)&Menu::`vftable'; /*0x58533d*/
  if ( unk14 ) /*0x585343*/
  {
    v14 = unk14; /*0x585347*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x58534b*/
    sub_57CFE0((int)Singleton, a2, a3, a4, v14, 1); /*0x585355*/
  }
  v7 = this->members.id - 0x3E9; /*0x585361*/
  v15 = 0; /*0x58536e*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&Menu_OpenMenuArray, v7, &v15); /*0x585372*/
  tile = this->members.tile; /*0x585377*/
  if ( tile ) /*0x58537c*/
  {
    *((_DWORD *)tile + 0x11) = 0; /*0x58537e*/
    v9 = this->members.tile; /*0x585381*/
    if ( v9 ) /*0x585386*/
      (**(void (__thiscall ***)(TileMenu *, int))v9)(v9, 1); /*0x58538e*/
  }
  v10 = LOBYTE(this->members.ownsTemplates) == 0; /*0x585390*/
  this->members.tile = 0; /*0x585393*/
  if ( !v10 ) /*0x585396*/
  {
    p_unk08 = &this->members.templateHead; /*0x585398*/
    if ( this != (Menu *)0xFFFFFFF8 ) /*0x58539d*/
    {
      do /*0x5853bb*/
      {
        v12 = (OblivionTileTemplate *)*p_unk08; /*0x5853a0*/
        if ( *p_unk08 ) /*0x5853a0*/
        {
          Tile::TileTemplate::Destroy((OblivionTileTemplate *)*p_unk08); /*0x5853a8*/
          FormHeapFree((unsigned int)v12); /*0x5853ae*/
        }
        p_unk08 = (UInt32 *)p_unk08[1]; /*0x5853b6*/
      }
      while ( p_unk08 ); /*0x5853bb*/
    }
  }
  if ( this->members.templateNext ) /*0x5853be*/
  {
    do /*0x5853d7*/
    {
      v13 = *(_DWORD *)(this->members.templateNext + 4); /*0x5853c6*/
      FormHeapFree(this->members.templateNext); /*0x5853ca*/
      this->members.templateNext = v13; /*0x5853d4*/
    }
    while ( v13 ); /*0x5853d7*/
  }
  this->members.templateHead = 0; /*0x5853da*/
}
