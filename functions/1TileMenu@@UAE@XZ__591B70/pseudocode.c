void __usercall TileMenu::~TileMenu(TileMenu *this@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v6; // ecx
  int (__thiscall *v7)(int); // edx
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // ecx
  _DWORD v10[2]; // [esp+8h] [ebp-14h] BYREF
  unsigned int v11; // [esp+18h] [ebp-4h]

  v10[1] = this; /*0x591b96*/
  *(_DWORD *)this = &TileMenu::`vftable'; /*0x591b9a*/
  v6 = *((_DWORD *)this + 0x11); /*0x591ba0*/
  v11 = 0; /*0x591ba5*/
  if ( v6 ) /*0x591bad*/
  {
    v7 = *(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x34); /*0x591bb1*/
    v10[0] = 0; /*0x591bb4*/
    v8 = v7(v6); /*0x591bbc*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&Menu_OpenMenuArray, v8 - 0x3E9, v10); /*0x591bce*/
    Menu_SetTileMenu(*((Menu **)this + 0x11), a2, a3, 0); /*0x591bd8*/
    v9 = *((void (__thiscall ****)(_DWORD, int))this + 0x11); /*0x591bdd*/
    if ( v9 ) /*0x591be2*/
      (**v9)(v9, 1); /*0x591bea*/
  }
  if ( !*((_BYTE *)this + 4) ) /*0x591bec*/
    Tile::Release(this); /*0x591bf4*/
  v11 = 0xFFFFFFFF; /*0x591bfb*/
  TileRect::~TileRect(this); /*0x591c03*/
}
