void __thiscall sub_52A520(BSSimpleList_VoidPtr *this)
{
  unsigned int v2; // edi

  sub_56A750((void **)this + 0x14);
  sub_529760(this);
  sub_5297C0((char *)this);
  v2 = *((_DWORD *)this + 0x16);
  if ( v2 )
  {
    ScriptEventList_destr__(*((ScriptEventList **)this + 0x16));
    FormHeapFree(v2);
    *((_DWORD *)this + 0x16) = 0;
  }
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
