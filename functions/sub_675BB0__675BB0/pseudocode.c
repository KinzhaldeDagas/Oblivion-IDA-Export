// Verified: finds first category-list record with number at28. Guard admits category6 though six owned lists are established; do not extend array based on this guard. Semantic crimeNumber corroborated by query and Fallout analogous symbol.
Crime *__thiscall ActorProcessManager_FindCrimeByNumber(
        ActorProcessManager *self,
        OblivionCrimeType category,
        unsigned int number)
{
  CrimeListNode *v3; // ecx
  Crime *result; // eax
  Crime *crime; // edx

  if ( (unsigned int)category > (kCrime_Murder|kCrime_Trespass) ) /*0x675bb7*/
    return 0; /*0x675be4*/
  v3 = self->crimeLists[category]; /*0x675bb9*/
  result = 0; /*0x675bbd*/
  while ( v3 ) /*0x675bc1*/
  {
    crime = v3->crime; /*0x675bc8*/
    if ( !v3->crime ) /*0x675bc8*/
      break; /*0x675bcc*/
    if ( result ) /*0x675bd0*/
      break; /*0x675bd0*/
    v3 = v3->next; /*0x675bd5*/
    if ( crime->crimeNumber == number ) /*0x675bd8*/
      result = crime; /*0x675bda*/
  }
  return result; /*0x675be1*/
}
