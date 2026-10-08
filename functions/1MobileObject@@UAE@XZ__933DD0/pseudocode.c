void __thiscall MobileObject::~MobileObject(MobileObject *this)
{
  _DWORD *v2; // edi

  v2 = *(_DWORD **)&this->super.baseExtraList.members.m_presenceBitfield[4]; /*0x933dd4*/
  this->vtbl = (MobileObjectVtbl *)&off_A9B2F4; /*0x933dd9*/
  if ( v2 ) /*0x933ddf*/
  {
    sub_8B44C0(v2); /*0x933de3*/
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v2, 0x18, 0x24); /*0x933df5*/
    *(_DWORD *)&this->super.baseExtraList.members.m_presenceBitfield[4] = 0; /*0x933df8*/
  }
  this->vtbl = (MobileObjectVtbl *)&hkBaseObject::`vftable'; /*0x933e00*/
}
