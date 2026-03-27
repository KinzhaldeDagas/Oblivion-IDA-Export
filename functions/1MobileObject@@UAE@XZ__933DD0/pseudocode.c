void __thiscall MobileObject::~MobileObject(MobileObject *this)
{
  _DWORD *v2; // edi

  v2 = *(_DWORD **)&this->super.baseExtraList.members.m_presenceBitfield[4];
  this->vtbl = (MobileObjectVtbl *)&off_A9B2F4;
  if ( v2 )
  {
    sub_8B44C0(v2);
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v2, 0x18, 0x24);
    *(_DWORD *)&this->super.baseExtraList.members.m_presenceBitfield[4] = 0;
  }
  this->vtbl = (MobileObjectVtbl *)&hkBaseObject::`vftable';
}
