int __thiscall sub_721A20(NiNode *this, NiProperty *a2)
{
  *((float *)this + 0x38) = *(float *)&a2; /*0x721a28*/
  sub_70A280(this, a2); /*0x721a31*/
  return ((int (__thiscall *)(NiNode *))this->vtbl->super.UpdateWorldBound)(this); /*0x721a40*/
}
