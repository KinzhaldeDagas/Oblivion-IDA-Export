void __thiscall sub_530430(BSSimpleList_VoidPtr *this, BSSimpleList_VoidPtr::NodeVoid *a2)
{
  BSSimpleList_VoidPtr::NodeVoid v3; // [esp+8h] [ebp-14h] BYREF
  unsigned int v4; // [esp+18h] [ebp-4h]

  if ( a2 ) /*0x53045c*/
  {
    sub_56A850(this + 3, a2); /*0x530462*/
  }
  else
  {
    DNameNode::DNameNode((DNameNode *)&v3); /*0x53047e*/
    v4 = 0; /*0x53048b*/
    sub_56A850(this + 3, &v3); /*0x530493*/
    v4 = 0xFFFFFFFF; /*0x53049c*/
    sub_56A7A0((BSSimpleList_VoidPtr *)&v3); /*0x5304a4*/
  }
}
