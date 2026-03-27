void __thiscall bhkRefObject::~bhkRefObject(bhkRefObject *this)
{
  hkRefObject *hkObject; // ecx

  this->__vftable = (NiObjectVtbl *)&bhkRefObject::`vftable';
  hkObject = this->hkObject;
  if ( hkObject )
  {
    if ( hkObject->sizeAndFlags )
    {
      if ( !--hkObject->refCount )
        hkObject->Destructor(hkObject, 1);
    }
  }
  NiRefObject_destr(this);
}
