NiMaterialProperty *__thiscall NiMaterialProperty::`scalar deleting destructor'(NiMaterialProperty *this, char a2)
{
  NiMaterialProperty::~NiMaterialProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
