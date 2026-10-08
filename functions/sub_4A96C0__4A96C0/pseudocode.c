void __thiscall sub_4A96C0(_DWORD *this)
{
  if ( *(this + 0x25) ) /*0x4a96c3*/
  {
    FormHeapFree(*(this + 0x25)); /*0x4a96ce*/
    *(this + 0x25) = 0; /*0x4a96d6*/
  }
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4a96e3*/
}
