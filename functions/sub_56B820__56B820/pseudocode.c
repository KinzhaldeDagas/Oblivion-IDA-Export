// [Verified] BSTECreateTask destructor decrements/releases its NiTimeController slot at +0x0C, then chains to NiRefObject destruction. Field +0x08 remains Unknown.
void __thiscall BSTECreateTask_Dtor(BSTECreateTask_Layout_t *this)
{
  BSTempEffectGeometryDecal *geometryDecalEffect_0C; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  BSTempEffectGeometryDecal *v4; // esi

  this->vftable = &BSTECreateTask::`vftable'; /*0x56b84a*/
  geometryDecalEffect_0C = this->taskController_0C; /*0x56b850*/
  v3 = InterlockedDecrement; /*0x56b855*/
  if ( geometryDecalEffect_0C ) /*0x56b863*/
  {
    if ( !v3(&geometryDecalEffect_0C->base.refCount) ) /*0x56b869*/
      geometryDecalEffect_0C->base.vtable->super.super.Destructor((NiRefObject *)geometryDecalEffect_0C, 1); /*0x56b87b*/
    this->taskController_0C = 0; /*0x56b87d*/
  }
  v4 = this->taskController_0C; /*0x56b884*/
  if ( v4 ) /*0x56b88e*/
  {
    if ( !v3(&v4->base.refCount) ) /*0x56b894*/
      v4->base.vtable->super.super.Destructor((NiRefObject *)v4, 1); /*0x56b8a6*/
  }
  this->vftable = &NiTask::`vftable'; /*0x56b8b2*/
  NiRefObject_destr(this); /*0x56b8b8*/
}
