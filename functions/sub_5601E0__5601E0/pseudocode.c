unsigned __int16 __thiscall BSTreeModel_GetNumBranchLODLevels(BSTreeModel_OblivionLayout_058 *this)
{
  OB_CSpeedTreeRT_010201A0 *speedTree; // ecx

  speedTree = this->speedTree; /*0x5601e0*/
  if ( speedTree ) /*0x5601e5*/
    return CSpeedTreeRT__GetNumBranchLodLevels(speedTree); /*0x5601e7*/
  else
    return 0; /*0x5601f0*/
}
