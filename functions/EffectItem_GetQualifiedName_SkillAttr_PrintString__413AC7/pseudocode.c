// positive sp value has been detected, the output may be wrong!
int __userpurge EffectItem_GetQualifiedName_SkillAttr_::PrintString@<eax>(
        unsigned int a1@<ecx>,
        const char *a2@<esi>,
        char *a3)
{
  const char *Name; // eax

  Name = (const char *)ActorValue_GetName(a1); /*0x413ac8*/
  return _sprintf(a3, "%s %s", a2, Name); /*0x413ae5*/
}
