int __thiscall sub_721A20(NiNode *this, NiProperty *a2)
{
  *((float *)this + 0x38) = *(float *)&a2;
  sub_70A280(this, a2);
  return ((int (__thiscall *)(NiNode *))this->vtbl->super.UpdateWorldBound)(this);
}
