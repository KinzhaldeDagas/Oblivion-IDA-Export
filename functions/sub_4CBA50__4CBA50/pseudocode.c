TESObjectREFR *__thiscall sub_4CBA50(TESObjectCELL *this)
{
  TESObjectREFR *refr; // edi

  sub_496EA0((char *)&stru_B35C80, this);
  refr = this->members.objectList.refr;
  sub_496F50(&stru_B35C80, this);
  return refr;
}
