// positive sp value has been detected, the output may be wrong!
int __usercall EffectSettingCollection_LookupByCodeString_::CharacterLoop@<eax>(
        const char *a1@<eax>,
        int a2@<esi>,
        char *a3@<edx>)
{
  char v3; // cl

  if ( (unsigned int)&a1[strlen(a1) + 1 - a2] >= 4 ) /*0x4168bf*/
    return EffectSettingCollection_LookupByCodeString_::ReverseStringBytes(v3, a3); /*0x4168bf*/
  else
    return 0; /*0x4168c1*/
}
