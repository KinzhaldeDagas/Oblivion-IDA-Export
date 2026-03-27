bool __thiscall BSExtraData_CompareTo(BSExtraData *this, BSExtraData *a2)
{
  return !a2 || this->members.type != a2->members.type;
}
