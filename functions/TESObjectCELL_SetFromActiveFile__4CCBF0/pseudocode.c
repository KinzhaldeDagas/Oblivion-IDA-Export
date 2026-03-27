unsigned int __thiscall TESObjectCELL_SetFromActiveFile(TESObjectCELL *this, TESForm *a2)
{
  unsigned int result; // eax
  TESWorldSpace *worldSpace; // ecx

  TESForm_SetFromActiveFile((TESForm *)this, a2);
  result = this->members.super.flags;
  if ( (result & 0x4000) == 0 )
  {
    result >>= 1;
    if ( (result & 1) != 0 && (this->members.flags0 & 1) == 0 )
    {
      result = (unsigned int)NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( !*(_BYTE *)(*(_DWORD *)(result + 4 * TlsIndex) + 0x184) )
      {
        worldSpace = this->members.worldSpace;
        if ( worldSpace )
          return ((unsigned int (__thiscall *)(TESWorldSpace *, int))worldSpace->vtbl->SetFromActiveFile)(worldSpace, 1);
      }
    }
  }
  return result;
}
