NiAVObjectVtbl *__thiscall SceneGraph_GetChildNiAvNodeVtbl(SceneGraph *this)
{
  if ( this->super.children.end )
    return this->super.children.data->vtbl;
  else
    return 0;
}
