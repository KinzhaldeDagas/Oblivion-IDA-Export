void __thiscall bhkCharacterProxy::~bhkCharacterProxy(bhkSerializable *this)
{
  hkRefObject *hkObject; // ecx

  this->__vftable = (NiObjectVtbl *)&bhkCharacterProxy::`vftable'; /*0x8b9df8*/
  hkObject = this->hkObject; /*0x8b9dfe*/
  if ( hkObject ) /*0x8b9e0b*/
    bhkCollisionWrapper_GetHavokObject(hkObject); /*0x8b9e0d*/
  sub_89D700(this); /*0x8b9e14*/
  --unk_BA8020; /*0x8b9e19*/
  bhkCharacterPointCollector::~bhkCharacterPointCollector((bhkCharacterPointCollector *)(this + 1)); /*0x8b9e28*/
  bhkSerializable::~bhkSerializable(this); /*0x8b9e37*/
}
