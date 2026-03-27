void __usercall Menu::~Menu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  UInt32 unk14; // eax
  InterfaceManager *Singleton; // eax
  unsigned int v7; // ecx
  TileMenu *tile; // eax
  TileMenu *v9; // ecx
  bool v10; // zf
  UInt32 *p_unk08; // edi
  unsigned int *v12; // ebp
  UInt32 v13; // edi
  signed int v14; // [esp-8h] [ebp-18h]
  int v15; // [esp+Ch] [ebp-4h] BYREF

  unk14 = this->members.unk14;
  this->__vftable = (MenuVtbl *)&Menu::`vftable';
  if ( unk14 )
  {
    v14 = unk14;
    Singleton = InterfaceManager_GetSingleton(0, 1);
    sub_57CFE0((int)Singleton, a2, a3, a4, v14, 1);
  }
  v7 = this->members.id - 0x3E9;
  v15 = 0;
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&Menu_OpenMenuArray, v7, &v15);
  tile = this->members.tile;
  if ( tile )
  {
    *((_DWORD *)tile + 0x11) = 0;
    v9 = this->members.tile;
    if ( v9 )
      (**(void (__thiscall ***)(TileMenu *, int))v9)(v9, 1);
  }
  v10 = LOBYTE(this->members.unk1C) == 0;
  this->members.tile = 0;
  if ( !v10 )
  {
    p_unk08 = &this->members.unk08;
    if ( this != (Menu *)0xFFFFFFF8 )
    {
      do
      {
        v12 = (unsigned int *)*p_unk08;
        if ( *p_unk08 )
        {
          sub_5852C0((unsigned int *)*p_unk08);
          FormHeapFree((unsigned int)v12);
        }
        p_unk08 = (UInt32 *)p_unk08[1];
      }
      while ( p_unk08 );
    }
  }
  if ( this->members.unk0C )
  {
    do
    {
      v13 = *(_DWORD *)(this->members.unk0C + 4);
      FormHeapFree(this->members.unk0C);
      this->members.unk0C = v13;
    }
    while ( v13 );
  }
  this->members.unk08 = 0;
}
