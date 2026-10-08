// Verified correction: vtable slot0 at TileText vtable 0xA6AEC4 calls TileText destructor 0x58FE50 then FormHeapFree(this) when flags&1. Previously mislabeled Tile3D constructor; no construction occurs here.
TileText *__thiscall TileText::ScalarDeletingDestructor(TileText *this, unsigned int flags)
{
  TileText::~TileText(this); /*0x58ff33*/
  if ( (flags & 1) != 0 ) /*0x58ff3d*/
    FormHeapFree((unsigned int)this); /*0x58ff40*/
  return this; /*0x58ff4a*/
}
