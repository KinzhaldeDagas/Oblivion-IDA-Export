TESObjectREFR *__thiscall sub_4CBA50(TESObjectCELL *this)
{
  TESObjectREFR *refr; // edi

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cba5a*/
  refr = this->members.objectList.refr; /*0x4cba5f*/
  sub_496F50(&unk_B35C80, this); /*0x4cba68*/
  return refr; /*0x4cba6f*/
}
