// Console toggle for SpeedTree leaves; flips singleton +0x21 and prints Leaves on/off.
char sub_507DC0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = bEnableTrees_SpeedTree.value /*0x507de9*/
    && BSTreeManager_GetInstance(1)->treesVisible
    && BSTreeManager_GetInstance(1)->unknown_021;
  BSTreeManager_GetInstance(1)->unknown_021 = !v0; /*0x507e02*/
  if ( MEMORY[0xB361AC] ) /*0x507e05*/
  {
    if ( !bEnableTrees_SpeedTree.value /*0x507e3b*/
      || !BSTreeManager_GetInstance(1)->treesVisible
      || (v1 = BSTreeManager_GetInstance(1)->unknown_021 == 0, v2 = "On", v1) )
    {
      v2 = (const char *)&aOff; /*0x507e3d*/
    }
    Interface_ConsolePrint("Leaves -> %s", v2); /*0x507e48*/
  }
  return 1; /*0x507e52*/
}
