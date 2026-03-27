NiNode *__thiscall sub_725410(NiCamera *this)
{
  NiNode *result; // eax

  result = sub_70C120(this);
  ++LODWORD(this->members.WorldToCam[0][3]);
  return result;
}
