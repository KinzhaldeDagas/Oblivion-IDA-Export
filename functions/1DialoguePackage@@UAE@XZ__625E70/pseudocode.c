void __thiscall DialoguePackage::~DialoguePackage(TESPackage *this)
{
  unsigned int v2; // edi

  this->__vftable = (TESPackageVtbl *)&DialoguePackage::`vftable';
  if ( this == (TESPackage *)TESDataHandler_g_PlayerRef->dialoguePackage )
    TESDataHandler_g_PlayerRef->dialoguePackage = 0;
  v2 = *((_DWORD *)this + 0x14);
  if ( v2 )
  {
    sub_6B7B90(*((_DWORD *)this + 0x14));
    FormHeapFree(v2);
  }
  TESPackage::~TESPackage(this);
}
