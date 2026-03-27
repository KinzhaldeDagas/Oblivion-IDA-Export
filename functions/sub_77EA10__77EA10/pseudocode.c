NiDynamicGeometryGroup *sub_77EA10()
{
  NiDynamicGeometryGroup *result; // eax
  NiDynamicGeometryGroup *v1; // eax

  result = (NiDynamicGeometryGroup *)dword_B428A4;
  if ( !dword_B428A4 )
  {
    v1 = (NiDynamicGeometryGroup *)FormHeapAlloc(0x50u);
    if ( v1 )
    {
      result = NiDynamicGeometryGroup::NiDynamicGeometryGroup(v1);
      dword_B428A4 = (int)result;
    }
    else
    {
      dword_B428A4 = 0;
      return 0;
    }
  }
  return result;
}
