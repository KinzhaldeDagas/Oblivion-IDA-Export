void __thiscall Tile3D::~Tile3D(Tile3D *this)
{
  *(_DWORD *)this = &Tile3D::`vftable';
  QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, *((_DWORD *)this + 0x14), 1, 1);
  if ( !*((_BYTE *)this + 4) )
    sub_58DA70((int)this);
  FormHeapFree(*((_DWORD *)this + 0x14));
  *((_DWORD *)this + 0x14) = 0;
  *((_WORD *)this + 0x2B) = 0;
  *((_WORD *)this + 0x2A) = 0;
  FormHeapFree(*((_DWORD *)this + 0x12));
  *((_DWORD *)this + 0x12) = 0;
  *((_WORD *)this + 0x27) = 0;
  *((_WORD *)this + 0x26) = 0;
  Tile::~Tile(this);
}
