TileWindow *__thiscall TileWindow::`scalar deleting destructor'(TileWindow *this, char a2)
{
  TileWindow::~TileWindow(this); /*0x590283*/
  if ( (a2 & 1) != 0 ) /*0x59028d*/
    FormHeapFree((unsigned int)this); /*0x590290*/
  return this; /*0x59029a*/
}
