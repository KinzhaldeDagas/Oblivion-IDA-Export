void __thiscall sub_52A520(BSSimpleList_VoidPtr *this)
{
  unsigned int v2; // edi

  sub_56A750(this + 0xA); /*0x52a527*/
  sub_529760(this); /*0x52a52e*/
  sub_5297C0((char *)this); /*0x52a535*/
  v2 = *((_DWORD *)this + 0x16); /*0x52a53a*/
  if ( v2 ) /*0x52a53f*/
  {
    ScriptEventList_destr__(*((ScriptEventList **)this + 0x16)); /*0x52a543*/
    FormHeapFree(v2); /*0x52a549*/
    *((_DWORD *)this + 0x16) = 0; /*0x52a551*/
  }
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x52a55c*/
}
