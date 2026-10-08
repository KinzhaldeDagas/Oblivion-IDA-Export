void __thiscall sub_4415C0(_DWORD *this)
{
  unsigned int i; // esi
  TESObjectCELL *v3; // ecx
  unsigned int j; // esi
  TESObjectCELL *v5; // ecx

  for ( i = 0; i < uExteriorCellBuffer; ++i ) /*0x4415c4*/
  {
    v3 = *(TESObjectCELL **)(*(this + 0xF) + 4 * i); /*0x4415d1*/
    if ( v3 ) /*0x4415d6*/
      sub_4CCDA0(v3); /*0x4415d8*/
  }
  for ( j = 0; j < uInteriorCellBuffer; ++j ) /*0x4415e2*/
  {
    v5 = *(TESObjectCELL **)(*(this + 0xE) + 4 * j); /*0x4415ef*/
    if ( v5 ) /*0x4415f4*/
      sub_4CCDA0(v5); /*0x4415f6*/
  }
}
