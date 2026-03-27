void __thiscall sub_7C1EE0(BSTextureManager *this, BSRenderedTexture *a2)
{
  BSRenderedTexture *v2; // esi
  NiTPointerList_Node_void *start; // eax
  BSRenderedTexture *data; // edx
  NiTPointerList_Node_void *v6; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2 )
  {
    start = this->unk10.start;
    data = 0;
    a2 = 0;
    v6 = start;
    if ( start )
    {
      do
      {
        if ( data )
        {
          v6 = start;
          a2 = data;
          goto LABEL_11;
        }
        if ( *(BSRenderedTexture **)start->data == v2 )
          data = (BSRenderedTexture *)start->data;
        else
          start = start->next;
      }
      while ( start );
      v6 = 0;
      a2 = data;
      if ( !data )
        return;
LABEL_11:
      sub_5B1E20(this, (void **)&a2);
      sub_7AA860((BSTextureManager *)&this->unk10, &v6);
    }
  }
}
