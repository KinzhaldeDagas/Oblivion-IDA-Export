//
//
// [2026-10-03 property replacement correction] Verified deleting destructor owns the property allocation and its retained resources, not a NiGeometry object. Plugin adapter previously erased every shape registry entry borrowing this property, which could lose live geometry after replacement. It now clears only the borrowed property pointer; draw lookups refresh from live geometry property state. Shape/group destructors and tree retirement remain the metadata lifetime authorities.
SpeedTreeLeafShaderProperty *__thiscall SpeedTreeLeafShaderProperty::`scalar deleting destructor'(
        SpeedTreeLeafShaderProperty *this,
        char a2)
{
  SpeedTreeLeafShaderProperty::~SpeedTreeLeafShaderProperty(this); /*0x7f1d93*/
  if ( (a2 & 1) != 0 ) /*0x7f1d9d*/
    FormHeapFree((unsigned int)this); /*0x7f1da0*/
  return this; /*0x7f1daa*/
}
