NiGeomMorpherController *__thiscall NiGeomMorpherController::`scalar deleting destructor'(
        NiGeomMorpherController *this,
        char a2)
{
  NiGeomMorpherController::~NiGeomMorpherController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
