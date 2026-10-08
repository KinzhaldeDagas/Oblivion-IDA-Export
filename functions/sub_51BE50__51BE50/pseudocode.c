// Oblivion-native checked attribute-name lookup. Validates an attribute actor value before returning its localized display name.
const char *__cdecl ActorValue_GetAttributeNameChecked(UInt32 actorValue)
{
  if ( actorValue > 7 ) /*0x51be57*/
    return 0; /*0x51be62*/
  else
    return (const char *)ActorValue_GetName(actorValue); /*0x51be5d*/
}
