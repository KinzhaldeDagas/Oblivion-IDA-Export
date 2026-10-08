void __thiscall ExtraCell3D::~ExtraCell3D(ExtraCell3D *this)
{
  UInt32 unk001; // edi
  UInt32 v3; // edi

  this->vtbl = (BSExtraDataVtbl *)&ExtraCell3D::`vftable'; /*0x41d89a*/
  unk001 = this->unk001; /*0x41d8a0*/
  if ( unk001 ) /*0x41d8b3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk001 + 4)) ) /*0x41d8b9*/
      (**(void (__thiscall ***)(UInt32, int))unk001)(unk001, 1); /*0x41d8cb*/
    this->unk001 = 0; /*0x41d8cd*/
  }
  v3 = this->unk001; /*0x41d8d4*/
  if ( v3 ) /*0x41d8de*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x41d8e4*/
      (**(void (__thiscall ***)(UInt32, int))v3)(v3, 1); /*0x41d8f6*/
  }
  this->vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable'; /*0x41d8f8*/
}
