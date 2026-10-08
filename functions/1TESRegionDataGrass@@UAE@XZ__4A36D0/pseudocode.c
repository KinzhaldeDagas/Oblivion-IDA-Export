void __thiscall TESRegionDataGrass::~TESRegionDataGrass(TESRegionDataGrass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &TESRegionDataGrass::`vftable'; /*0x4a36f8*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2); /*0x4a36fe*/
  if ( v2 ) /*0x4a370b*/
    (**v2)(v2, 1); /*0x4a3713*/
  sub_4A3510(this); /*0x4a371f*/
}
