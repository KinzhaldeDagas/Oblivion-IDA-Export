// SpeedTree leaves-enabled query: byte_B125E8 && singleton +0x20 && singleton +0x21.
BOOL sub_506FD0()
{
  return bEnableTrees_SpeedTree.value /*0x506ffe*/
      && BSTreeManager_GetInstance(1)->treesVisible
      && BSTreeManager_GetInstance(1)->unknown_021;
}
