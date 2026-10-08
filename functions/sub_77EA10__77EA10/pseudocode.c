NiDynamicGeometryGroup *sub_77EA10()
{
  NiDynamicGeometryGroup *result; // eax
  NiDynamicGeometryGroup *v1; // eax

  result = (NiDynamicGeometryGroup *)unk_B428A4; /*0x77ea10*/
  if ( !unk_B428A4 ) /*0x77ea10*/
  {
    v1 = (NiDynamicGeometryGroup *)FormHeapAlloc(0x50u); /*0x77ea1b*/
    if ( v1 ) /*0x77ea25*/
    {
      result = NiDynamicGeometryGroup::NiDynamicGeometryGroup(v1); /*0x77ea29*/
      unk_B428A4 = (int)result; /*0x77ea2e*/
    }
    else
    {
      unk_B428A4 = 0; /*0x77ea36*/
      return 0; /*0x77ea34*/
    }
  }
  return result; /*0x77ea33*/
}
