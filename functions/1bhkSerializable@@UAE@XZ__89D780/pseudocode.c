void __thiscall bhkSerializable::~bhkSerializable(bhkSerializable *this)
{
  void *hkData; // [esp-4h] [ebp-8h]

  hkData = this->hkData;
  this->__vftable = (NiObjectVtbl *)&bhkSerializable::`vftable';
  FormHeapFree((unsigned int)hkData);
  this->hkData = 0;
  bhkRefObject::~bhkRefObject(this);
}
