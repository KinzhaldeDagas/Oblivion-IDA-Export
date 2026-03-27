// positive sp value has been detected, the output may be wrong!
int __usercall EffectSettingCollection_LookupByCodeString_::CharacterLoop@<eax>(const char *a1@<eax>, int a2@<esi>)
{
  if ( (unsigned int)&a1[strlen(a1) + 1 - a2] >= 4 )
    return EffectSettingCollection_LookupByCodeString_::ReverseStringBytes();
  else
    return 0;
}
