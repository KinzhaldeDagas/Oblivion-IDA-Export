void __userpurge Menu_SetTileMenu(Menu *this@<ecx>, double st6_0@<st1>, double a3@<st0>, TileMenu *a4)
{
  InterfaceManager *Singleton; // edi
  int v6; // eax
  Tile *activeTile; // ecx

  this->members.tile = a4; /*0x58488a*/
  if ( a4 ) /*0x58488d*/
  {
    if ( (Tile_GetFloat(a4, 0xFA5) == fXMLI_NoClickPast /*0x584928*/
       || Tile_GetFloat(a4, 0xFA5) == fXMLI_StackingType6006
       || Tile_GetFloat(a4, 0xFA5) == fXMLI_MixedMenu
       || Tile_GetFloat(a4, 0xFA5) == fXMLI_StackingType6007)
      && (this->members.unk14 = ((int (__usercall *)@<eax>(Menu *@<ecx>, double@<st0>, double@<st1>))this->__vftable->GetID)(
                                  this,
                                  a3,
                                  st6_0),
          Singleton = InterfaceManager_GetSingleton(0, 1),
          v6 = this->__vftable->GetID(this),
          sub_57D640((int)Singleton, v6),
          Singleton->activeMenu != this) )
    {
      activeTile = Singleton->activeTile; /*0x58492a*/
      if ( activeTile ) /*0x584932*/
        Tile_SetFloat(activeTile, (_DWORD *)0xFDD, 0.0); /*0x58493f*/
      Singleton->activeTile = 0; /*0x584944*/
      Singleton->activeMenu = 0; /*0x58494e*/
      Menu_SetTileMenu_::Done((int)a4); /*0x58494f*/
    }
    else
    {
      Menu_SetTileMenu_::Done((int)a4); /*0x584928*/
    }
  }
  else
  {
    Menu_SetTileMenu_::Done(0); /*0x58488d*/
  }
}
