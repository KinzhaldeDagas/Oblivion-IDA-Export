Tile3D *__thiscall Tile3D::Tile3D(Tile3D *this, char a2)
{
  TileText::~TileText(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
