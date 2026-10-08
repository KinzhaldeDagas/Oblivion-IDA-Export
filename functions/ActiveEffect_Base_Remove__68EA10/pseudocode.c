// Verified termination API: sets bTerminated=1. When its flush flag is true, immediately invokes ActiveEffect_Base_ProcessEffect to run termination cleanup.
double __userpurge ActiveEffect_Base_Remove@<st0>(
        ActiveEffect *this@<ecx>,
        char bp0@<bpl>,
        double result@<st0>,
        char a4)
{
  this->members.bTerminated = 1;                // Verified: ActiveEffect_Base_Remove sets bTerminated=true; optional immediate processing controls whether termination cleanup is flushed now. /*0x68ea15*/
  if ( a4 ) /*0x68ea19*/
    ActiveEffect_Base_ProcessEffect(this, bp0, 0.0, result, 0.0); /*0x68ea21*/
  return result; /*0x68ea26*/
}
