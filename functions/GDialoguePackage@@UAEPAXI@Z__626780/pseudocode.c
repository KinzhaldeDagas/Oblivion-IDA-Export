TESPackage *__thiscall DialoguePackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  DialoguePackage::Destructor((DialoguePackageRuntimeView *)this); /*0x626783*/
  if ( (a2 & 1) != 0 ) /*0x62678d*/
    FormHeapFree((unsigned int)this); /*0x626790*/
  return this; /*0x62679a*/
}
