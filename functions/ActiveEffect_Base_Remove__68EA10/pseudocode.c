double __userpurge ActiveEffect_Base_Remove@<st0>(
        ActiveEffect *this@<ecx>,
        char bp0@<bpl>,
        double result@<st0>,
        char a4)
{
  this->members.bTerminated = 1;
  if ( a4 )
    ActiveEffect_Base_ProcessEffect(this, bp0, 0.0, result, 0.0);
  return result;
}
