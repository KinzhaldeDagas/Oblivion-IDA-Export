NiTriBasedGeomData *__thiscall NiTriBasedGeomData::`scalar deleting destructor'(NiTriBasedGeomData *this, char a2)
{
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriBasedGeomData::`vftable';
  NiGeometryData::~NiGeometryData((NiGeometryData *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
