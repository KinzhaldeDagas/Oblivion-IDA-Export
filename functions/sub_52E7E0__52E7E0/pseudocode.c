// Oblivion-native specialization display helper: returns the localized name for specialization IDs 0..2 (Combat, Magic, Stealth); invalid IDs return the fallback string.
const char *__cdecl ActorValue_GetSpecializationName(UInt32 specialization)
{
  const char **v1; // eax

  if ( specialization <= 2 && (v1 = *(const char ***)(4 * specialization + 0xB10D90)) != 0 ) /*0x52e7f2*/
    return *v1; /*0x52e7f4*/
  else
    return 0; /*0x52e7f7*/
}
