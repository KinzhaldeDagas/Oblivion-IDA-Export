//
//
// [2026-10-03 frond scene tracking] Verified NiTriShape vtable 0xA7ED5C slot0 uses this folded scalar deleting destructor (existing TallGrass symbol is not exclusive identity). ECX=this, DWORD flags, EAX=this, RET4; calls 0x7226E0 then FormHeapFree if flags bit0. Plugin-created frond shapes use a private vtable copying all 39 entries and preserving COL at -4, with only slot0 replaced to retire borrowed scene metadata before forwarding here once. Global NiTriShape vtable is untouched. Fallout NiTriShape deleting destructor 0x82BFB4B8 corroborates lifetime role, not platform size/ABI.
TallGrassTriShape *__thiscall TallGrassTriShape::`scalar deleting destructor'(TallGrassTriShape *this, char a2)
{
  TallGrassTriShape::~TallGrassTriShape(this); /*0x719ad3*/
  if ( (a2 & 1) != 0 ) /*0x719add*/
    FormHeapFree((unsigned int)this); /*0x719ae0*/
  return this; /*0x719aea*/
}
