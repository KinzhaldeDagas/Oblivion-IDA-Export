NiAVObject *__thiscall NiNode_GetChildAtIndex(NiNode *this, unsigned int index)
{
  if ( this->members.children.end > index ) /*0x40579d*/
    return *((NiAVObject **)&this->members.children.data->vtbl + index); /*0x4057aa*/
  else
    return 0; /*0x40579f*/
}
