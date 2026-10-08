void __thiscall sub_566190(void **this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi

  v2 = (unsigned int)*(this + 9); /*0x566194*/
  if ( v2 ) /*0x566199*/
  {
    TESPackage_LocationData_destr(*(this + 9)); /*0x56619d*/
    FormHeapFree(v2); /*0x5661a3*/
  }
  v3 = (unsigned int)*(this + 0xA); /*0x5661ab*/
  if ( v3 ) /*0x5661b0*/
  {
    Shared_NoOpVirtual_60D0A0(*(this + 0xA)); /*0x5661b4*/
    FormHeapFree(v3); /*0x5661ba*/
  }
  sub_56A750((BSSimpleList_VoidPtr *)(this + 0xD)); /*0x5661c5*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x5661ce*/
}
