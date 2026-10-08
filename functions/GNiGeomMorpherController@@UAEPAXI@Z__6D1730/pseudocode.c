NiGeomMorpherController *__thiscall NiGeomMorpherController::`scalar deleting destructor'(
        NiGeomMorpherController *this,
        char a2)
{
  NiGeomMorpherController::~NiGeomMorpherController(this); /*0x6d1733*/
  if ( (a2 & 1) != 0 ) /*0x6d173d*/
    FormHeapFree((unsigned int)this); /*0x6d1740*/
  return this; /*0x6d174a*/
}
