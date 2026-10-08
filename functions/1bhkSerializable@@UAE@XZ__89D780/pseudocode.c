void __thiscall bhkSerializable::~bhkSerializable(bhkSerializable *this)
{
  void *hkData; // [esp-4h] [ebp-8h]

  hkData = this->hkData; /*0x89d786*/
  this->__vftable = (NiObjectVtbl *)&bhkSerializable::`vftable'; /*0x89d787*/
  FormHeapFree((unsigned int)hkData); /*0x89d78d*/
  this->hkData = 0; /*0x89d795*/
  bhkRefObject::~bhkRefObject(this); /*0x89d79f*/
}
