// [Verified] BSTECreateTask constructor initializes a 0x10-byte NiTask-derived object, sets +0x08 to zero and installs the BSTECreateTask vtable. It initializes the NiTimeController slot at +0x0C to null; BSTempEffectGeometryDecal_StartOrQueueCreateTask stores its effect pointer there.
BSTECreateTask_Layout_t *__thiscall BSTECreateTask_Ctor(BSTECreateTask_Layout_t *this)
{
  NiObject_constr((NiObject *)this); /*0x56b7f3*/
  this->unk_08 = 0; /*0x56b7fa*/
  this->vftable = &BSTECreateTask::`vftable'; /*0x56b7fd*/
  this->taskController_0C = 0; /*0x56b803*/
  return this; /*0x56b808*/
}
