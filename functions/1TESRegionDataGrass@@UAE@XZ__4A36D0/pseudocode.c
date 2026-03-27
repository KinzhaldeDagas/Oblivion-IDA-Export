void __thiscall TESRegionDataGrass::~TESRegionDataGrass(TESRegionDataGrass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &TESRegionDataGrass::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2);
  if ( v2 )
    (**v2)(v2, 1);
  sub_4A3510(this);
}
