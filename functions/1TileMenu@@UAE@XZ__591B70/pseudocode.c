void __usercall TileMenu::~TileMenu(
        TileMenu *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  int v6; // ecx
  int (__thiscall *v7)(int); // edx
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // ecx
  _DWORD v10[2]; // [esp+8h] [ebp-14h] BYREF
  unsigned int v11; // [esp+18h] [ebp-4h]

  v10[1] = this;
  *(_DWORD *)this = &TileMenu::`vftable';
  v6 = *((_DWORD *)this + 0x11);
  v11 = 0;
  if ( v6 )
  {
    v7 = *(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x34);
    v10[0] = 0;
    v8 = v7(v6);
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&Menu_OpenMenuArray, v8 - 0x3E9, v10);
    Menu_SetTileMenu(*((Menu **)this + 0x11), a4, a5, 0);
    v9 = *((void (__thiscall ****)(_DWORD, int))this + 0x11);
    if ( v9 )
      (**v9)(v9, 1);
  }
  if ( !*((_BYTE *)this + 4) )
    sub_58DA70((int)this);
  v11 = 0xFFFFFFFF;
  TileRect::~TileRect(this, a2, a3, a4, a5);
}
