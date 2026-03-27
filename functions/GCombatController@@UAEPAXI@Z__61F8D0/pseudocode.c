CombatController *__userpurge CombatController::`scalar deleting destructor'@<eax>(
        CombatController *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  CombatController::~CombatController(this, a2, a3, a4);
  if ( (a5 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
