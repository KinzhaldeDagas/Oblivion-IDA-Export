// Adds marker extra ExtraBoundArmor type 0x50 when it is not already present.
void __thiscall ExtraDataList_AddBoundArmor(ExtraDataList *this)
{
  _BYTE *v2; // eax
  BSExtraData *v3; // eax

  if ( (this->members.m_presenceBitfield[0xA] & 1) == 0 ) /*0x41f31a*/
  {
    v2 = (_BYTE *)FormHeapAlloc(0xCu); /*0x41f31e*/
    if ( v2 ) /*0x41f334*/
      v3 = (BSExtraData *)ExtraBoundArmor_ctor(v2); /*0x41f338*/
    else
      v3 = 0; /*0x41f33f*/
    BaseExtraList_AddExtra(this, v3); /*0x41f34c*/
  }
}
