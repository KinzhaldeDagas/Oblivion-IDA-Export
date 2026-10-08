unsigned __int16 __thiscall BSTreeModel_GetNumLeafLODLevels(BSTreeModel_OblivionLayout_058 *this)
{
  OB_CSpeedTreeRT_010201A0 *speedTree; // ecx

  speedTree = this->speedTree; /*0x560200*/
  if ( speedTree ) /*0x560205*/
    return CSpeedTreeRT__GetNumLeafLodLevels(speedTree); /*0x560207*/
  else
    return 0; /*0x560210*/
}
