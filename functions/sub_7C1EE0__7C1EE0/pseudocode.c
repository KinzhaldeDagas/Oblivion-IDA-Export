// General BSTextureManager rendered-texture return path, not canopy-specific: locates the texture's pool record, performs manager return bookkeeping, and removes the record from the borrowed/owned list. Used by water, HDR, menus, canopy shadows and shadow rendering.
void __thiscall BSTextureManager__ReturnRenderedTexture(BSTextureManager *this, BSRenderedTexture *texture)
{
  BSRenderedTexture *v2; // esi
  NiTPointerList_Node_void *start; // eax
  BSRenderedTexture *data; // edx
  void *node; // [esp+8h] [ebp-4h] BYREF

  v2 = texture; /*0x7c1ee2*/
  if ( texture ) /*0x7c1eeb*/
  {
    start = this->unk10.start; /*0x7c1eed*/
    data = 0; /*0x7c1ef0*/
    texture = 0; /*0x7c1ef4*/
    node = start; /*0x7c1ef8*/
    if ( start ) /*0x7c1efc*/
    {
      do /*0x7c1f13*/
      {
        if ( data ) /*0x7c1f02*/
        {
          node = start; /*0x7c1f23*/
          texture = data; /*0x7c1f27*/
          goto LABEL_11; /*0x7c1f27*/
        }
        if ( *(BSRenderedTexture **)start->data == v2 ) /*0x7c1f09*/
          data = (BSRenderedTexture *)start->data; /*0x7c1f0b*/
        else
          start = start->next; /*0x7c1f0f*/
      }
      while ( start ); /*0x7c1f13*/
      node = 0; /*0x7c1f17*/
      texture = data; /*0x7c1f1b*/
      if ( !data ) /*0x7c1f1f*/
        return; /*0x7c1f1f*/
LABEL_11:
      NiTPointerList__AddTail(this, (void **)&texture); /*0x7c1f2b*/
      NiTPointerList_RemoveNode(&this->unk10, &node); /*0x7c1f3f*/
    }
  }
}
