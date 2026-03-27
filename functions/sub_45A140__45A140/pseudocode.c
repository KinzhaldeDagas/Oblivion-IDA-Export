int __thiscall sub_45A140(_BYTE *this, int a2)
{
  if ( (unsigned __int8)a2 < 0x13u )
    PrintError(
      "Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is %i.  Errors may occur.",
      (unsigned __int8)a2,
      0x13);
  *(this + 0x7C) = a2;
  return sub_45A163(a2);
}
