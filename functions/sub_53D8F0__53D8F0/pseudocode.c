NiNode *__thiscall sub_53D8F0(_DWORD *this)
{
  NiNode *result; // eax
  bool v2; // zf

  result = unk_B333DC; /*0x53d8f0*/
  v2 = unk_B333DC == 0; /*0x53d8f5*/
  *(this + 3) = unk_B333DC; /*0x53d8f7*/
  if ( v2 ) /*0x53d8fa*/
    return (NiNode *)PrintError("Can't find Weather Root Node.  Precipitation has no parent on scene graph."); /*0x53d901*/
  return result; /*0x53d907*/
}
