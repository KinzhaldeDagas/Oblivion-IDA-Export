void __thiscall sub_566010(void **this, BSSimpleList_VoidPtr::NodeVoid *a2)
{
  BSSimpleList_VoidPtr::NodeVoid v3; // [esp+8h] [ebp-14h] BYREF
  unsigned int v4; // [esp+18h] [ebp-4h]

  if ( a2 ) /*0x56603c*/
  {
    sub_56A850((BSSimpleList_VoidPtr *)(this + 0xD), a2); /*0x566042*/
  }
  else
  {
    DNameNode::DNameNode((DNameNode *)&v3); /*0x56605e*/
    v4 = 0; /*0x56606b*/
    sub_56A850((BSSimpleList_VoidPtr *)(this + 0xD), &v3); /*0x566073*/
    v4 = 0xFFFFFFFF; /*0x56607c*/
    sub_56A7A0((BSSimpleList_VoidPtr *)&v3); /*0x566084*/
  }
}
