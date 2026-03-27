// attributes: thunk
char __userpurge PlayerCharacter_MagicTarget_ApplyEffect@<al>(
        int *this@<ecx>,
        double a2@<st0>,
        int a3,
        float a4,
        int a5,
        int a6)
{
  return MagicTarget_AttemptAddEffect(this, a2, a3, a4, a5, a6);
}
