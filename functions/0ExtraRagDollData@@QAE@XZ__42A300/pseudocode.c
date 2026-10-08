// MEF v35 cleanup proof: ExtraRagDollData constructor only sets type/vtable and zeroes fields +8/+C. Before payload attachment, direct FormHeapFree is complete cleanup.
ExtraRagDollData *__thiscall ExtraRagDollData::ExtraRagDollData(ExtraRagDollData *this)
{
  *((_BYTE *)this + 4) = 0x19; /*0x42a304*/
  *((_DWORD *)this + 2) = 0; /*0x42a308*/
  *(_DWORD *)this = &ExtraRagDollData::`vftable'; /*0x42a30b*/
  *((_DWORD *)this + 3) = 0; /*0x42a311*/
  return this; /*0x42a314*/
}
