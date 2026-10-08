NiTriBasedGeomData *__thiscall NiTriBasedGeomData::`scalar deleting destructor'(NiTriBasedGeomData *this, char a2)
{
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriBasedGeomData::`vftable'; /*0x732e43*/
  NiGeometryData::~NiGeometryData((NiGeometryData *)this); /*0x732e49*/
  if ( (a2 & 1) != 0 ) /*0x732e53*/
    FormHeapFree((unsigned int)this); /*0x732e56*/
  return this; /*0x732e60*/
}
