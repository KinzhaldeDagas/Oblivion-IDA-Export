NiAVObjectVtbl *__thiscall SceneGraph_GetChildNiAvNodeVtbl(SceneGraph *this)
{
  if ( this->super.children.end ) /*0x5645b0*/
    return this->super.children.data->vtbl; /*0x5645c3*/
  else
    return 0; /*0x5645ba*/
}
