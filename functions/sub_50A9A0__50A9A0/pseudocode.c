// Console toggle for all tree culling/render gate; flips SpeedTree singleton +0x20.
char sub_50A9A0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = bEnableTrees_SpeedTree.value && BSTreeManager_GetInstance(1)->treesVisible; /*0x50a9b9*/
  BSTreeManager_GetInstance(1)->treesVisible = !v0; /*0x50a9d2*/
  if ( !bEnableTrees_SpeedTree.value || (v1 = BSTreeManager_GetInstance(1)->treesVisible == 0, v2 = "NOT CULLED", v1) ) /*0x50a9f2*/
    v2 = "CULLED"; /*0x50a9f4*/
  Interface_ConsolePrint("All trees are now %s.", v2); /*0x50a9ff*/
  return 1; /*0x50aa09*/
}
