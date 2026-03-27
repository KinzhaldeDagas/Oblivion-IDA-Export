NiNode *__thiscall sub_53D8F0(_DWORD *this)
{
  NiNode *result; // eax
  bool v2; // zf

  result = dword_B333DC;
  v2 = dword_B333DC == 0;
  *(this + 3) = dword_B333DC;
  if ( v2 )
    return (NiNode *)PrintError("Can't find Weather Root Node.  Precipitation has no parent on scene graph.");
  return result;
}
