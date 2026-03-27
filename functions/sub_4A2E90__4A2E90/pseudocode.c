void __thiscall sub_4A2E90(int **this)
{
  int *v2; // ecx
  void *v3; // eax
  _DWORD *v4; // eax

  v2 = *(this + 6);
  *(this + 9) = 0;
  if ( v2 )
  {
    v3 = (void *)sub_4A4460(v2, 3);
    v4 = OblivionDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESRegionData `RTTI Type Descriptor',
           &TESRegionDataWeather `RTTI Type Descriptor',
           0);
    if ( v4 )
      *(this + 9) = (int *)sub_4EECE0(v4 + 2);
  }
}
