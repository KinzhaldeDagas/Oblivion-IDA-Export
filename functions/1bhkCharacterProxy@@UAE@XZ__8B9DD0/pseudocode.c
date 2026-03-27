void __thiscall bhkCharacterProxy::~bhkCharacterProxy(bhkSerializable *this)
{
  hkRefObject *hkObject; // ecx

  this->__vftable = (NiObjectVtbl *)&bhkCharacterProxy::`vftable';
  hkObject = this->hkObject;
  if ( hkObject )
    sub_8AC0C0(hkObject);
  sub_89D700(this);
  --dword_BA8020;
  bhkCharacterPointCollector::~bhkCharacterPointCollector((bhkCharacterPointCollector *)(this + 1));
  bhkSerializable::~bhkSerializable(this);
}
