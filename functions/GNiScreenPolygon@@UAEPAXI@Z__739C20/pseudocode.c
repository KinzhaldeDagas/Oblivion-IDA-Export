NiScreenPolygon *__thiscall NiScreenPolygon::`scalar deleting destructor'(NiScreenPolygon *this, char a2)
{
  NiScreenPolygon::~NiScreenPolygon(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
