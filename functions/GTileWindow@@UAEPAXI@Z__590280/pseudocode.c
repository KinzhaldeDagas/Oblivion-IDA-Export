TileWindow *__thiscall TileWindow::`scalar deleting destructor'(TileWindow *this, char a2)
{
  TileWindow::~TileWindow(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
