void __thiscall Tile::~Tile(Tile *this)
{
  InterfaceManager *Singleton; // eax
  unsigned int v3; // eax
  unsigned int v4; // edi

  *(_DWORD *)this = &Tile::`vftable'; /*0x58fada*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x58faed*/
  if ( Singleton->activeTile == this ) /*0x58fafb*/
  {
    Singleton->activeTile = 0; /*0x58fafd*/
    Singleton->activeMenu = 0; /*0x58fb03*/
  }
  if ( Singleton->altActiveTile == this ) /*0x58fb0f*/
    Singleton->altActiveTile = 0; /*0x58fb11*/
  if ( !*((_BYTE *)this + 4) )
  {
    sub_40FEC0("WARNING: Base tile should have been released before deleted.");
    Tile::Release(this); /*0x58fb2b*/
  }
  v3 = *((_DWORD *)this + 0xA); /*0x58fb30*/
  if ( v3 ) /*0x58fb35*/
  {
    do /*0x58fb4e*/
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 0x14); /*0x58fb3c*/
      if ( v3 ) /*0x58fb3f*/
        FormHeapFree(v3); /*0x58fb42*/
      v3 = v4; /*0x58fb4c*/
    }
    while ( v4 ); /*0x58fb4e*/
  }
  NiTList<Tile *>::~NiTList<Tile *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x30)); /*0x58fb58*/
  NiTList<Tile::Value *>::~NiTList<Tile::Value *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x14)); /*0x58fb64*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x58fb6d*/
  *((_DWORD *)this + 2) = 0; /*0x58fb75*/
  *((_WORD *)this + 7) = 0; /*0x58fb78*/
  *((_WORD *)this + 6) = 0; /*0x58fb7c*/
}
