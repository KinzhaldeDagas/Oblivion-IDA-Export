void __thiscall bhkRefObject::~bhkRefObject(bhkRefObject *this)
{
  hkRefObject *hkObject; // ecx

  this->__vftable = (NiObjectVtbl *)&bhkRefObject::`vftable'; /*0x89d498*/
  hkObject = this->hkObject; /*0x89d49e*/
  if ( hkObject ) /*0x89d4ab*/
  {
    if ( hkObject->sizeAndFlags ) /*0x89d4ad*/
    {
      if ( !--hkObject->refCount ) /*0x89d4b9*/
        hkObject->Destructor(hkObject, 1); /*0x89d4c8*/
    }
  }
  NiRefObject_destr(this); /*0x89d4d4*/
}
