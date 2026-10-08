void __cdecl sub_A24610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fActivatePickSphereRadius); /*0xa2461a*/
  if ( fActivatePickSphereRadiusSettingName ) /*0xa24626*/
  {
    if ( *fActivatePickSphereRadiusSettingName == 0x53 ) /*0xa2462b*/
      FormHeapFree((unsigned int)fActivatePickSphereRadiusSettingName); /*0xa2462e*/
  }
}
