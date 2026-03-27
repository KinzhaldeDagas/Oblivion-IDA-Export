void __thiscall Tile::~Tile(Tile *this)
{
  InterfaceManager *Singleton; // eax
  unsigned int v7; // eax
  unsigned int v8; // edi

  *(_DWORD *)this = &Tile::`vftable';
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Singleton->activeTile == this )
  {
    Singleton->activeTile = 0;
    Singleton->activeMenu = 0;
  }
  if ( Singleton->altActiveTile == this )
    Singleton->altActiveTile = 0;
  if ( !*((_BYTE *)this + 4) )
  {
    sub_40FEC0("WARNING: Base tile should have been released before deleted.");
    sub_58DA70((int)this);
  }
  v7 = *((_DWORD *)this + 0xA);
  if ( v7 )
  {
    do
    {
      v8 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 0x14);
      if ( v7 )
        FormHeapFree(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  NiTList<Tile *>::~NiTList<Tile *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x30));
  NiTList<Tile::Value *>::~NiTList<Tile::Value *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x14));
  FormHeapFree(*((_DWORD *)this + 2));
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 6) = 0;
}
