CombatController *__thiscall CombatController::`scalar deleting destructor'(CombatController *this, char a2)
{
  CombatController::~CombatController(this); /*0x61f8d3*/
  if ( (a2 & 1) != 0 ) /*0x61f8dd*/
    FormHeapFree((unsigned int)this); /*0x61f8e0*/
  return this; /*0x61f8ea*/
}
