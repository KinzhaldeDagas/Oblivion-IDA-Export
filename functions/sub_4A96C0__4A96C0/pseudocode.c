void __thiscall sub_4A96C0(_DWORD *this)
{
  if ( *(this + 0x25) )
  {
    FormHeapFree(*(this + 0x25));
    *(this + 0x25) = 0;
  }
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
