// Verified: finds first record matching criminal pointer0C and target pointer08. Guard admits category6; broader caller guarantees Unknown.
Crime *__thiscall ActorProcessManager_FindCrime(
        ActorProcessManager *self,
        Actor *criminal,
        TESObjectREFR *target,
        OblivionCrimeType category)
{
  CrimeListNode *v4; // ecx
  Crime *result; // eax
  Crime *crime; // edx

  if ( (unsigned int)category > (kCrime_Murder|kCrime_Trespass) ) /*0x675bf7*/
    return 0; /*0x675c32*/
  v4 = self->crimeLists[category]; /*0x675bf9*/
  result = 0; /*0x675bfd*/
  while ( v4 ) /*0x675c01*/
  {
    crime = v4->crime; /*0x675c10*/
    if ( !v4->crime ) /*0x675c10*/
      break; /*0x675c14*/
    if ( result ) /*0x675c18*/
      break; /*0x675c18*/
    v4 = v4->next; /*0x675c1d*/
    if ( crime->criminal == criminal && crime->target == target ) /*0x675c25*/
      result = crime; /*0x675c27*/
  }
  return result; /*0x675c2f*/
}
