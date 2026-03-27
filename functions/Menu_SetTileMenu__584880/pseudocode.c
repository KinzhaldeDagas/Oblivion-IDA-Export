int __userpurge Menu_SetTileMenu@<eax>(Menu *this@<ecx>, double st6_0@<st1>, double a3@<st0>, TileMenu *a4)
{
  InterfaceManager *Singleton; // edi
  int a2; // eax
  Tile *activeTile; // ecx

  this->members.tile = a4;
  if ( !a4 )
    return Menu_SetTileMenu_::Done(0);
  if ( Tile_GetFloat(a4, 0xFA5) != fXMLI_NoClickPast
    && Tile_GetFloat(a4, 0xFA5) != fXMLI_StackingType6006
    && Tile_GetFloat(a4, 0xFA5) != fXMLI_MixedMenu
    && Tile_GetFloat(a4, 0xFA5) != fXMLI_StackingType6007 )
  {
    return Menu_SetTileMenu_::Done(a4);
  }
  this->members.unk14 = ((int (__usercall *)@<eax>(Menu *@<ecx>, double@<st0>, double@<st1>))this->__vftable->GetID)(
                          this,
                          a3,
                          st6_0);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  a2 = this->__vftable->GetID(this);
  sub_57D640((int)Singleton, a2);
  if ( Singleton->activeMenu == this )
    return Menu_SetTileMenu_::Done(a4);
  activeTile = Singleton->activeTile;
  if ( activeTile )
    Tile_SetFloat(activeTile, (_DWORD *)0xFDD, 0.0);
  Singleton->activeTile = 0;
  Singleton->activeMenu = 0;
  return Menu_SetTileMenu_::Done(a4);
}
