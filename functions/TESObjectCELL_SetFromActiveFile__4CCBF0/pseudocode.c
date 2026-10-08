unsigned int __thiscall TESObjectCELL_SetFromActiveFile(TESObjectCELL *this, TESForm *a2)
{
  unsigned int result; // eax
  TESWorldSpace *worldSpace; // ecx

  TESForm_SetFromActiveFile((TESForm *)this, (bool)a2); /*0x4ccbf8*/
  result = this->members.super.flags; /*0x4ccbfd*/
  if ( (result & 0x4000) == 0 ) /*0x4ccc08*/
  {
    result >>= 1; /*0x4ccc0a*/
    if ( (result & 1) != 0 && (this->members.flags0 & 1) == 0 ) /*0x4ccc14*/
    {
      result = (unsigned int)NtCurrentTeb()->ThreadLocalStoragePointer; /*0x4ccc1c*/
      if ( !*(_BYTE *)(*(_DWORD *)(result + 4 * MEMORY[0xBA9DE4]) + 0x184) ) /*0x4ccc25*/
      {
        worldSpace = this->members.worldSpace; /*0x4ccc2e*/
        if ( worldSpace ) /*0x4ccc33*/
          return ((unsigned int (__thiscall *)(TESWorldSpace *, int))worldSpace->vtbl->SetFromActiveFile)(worldSpace, 1); /*0x4ccc46*/
      }
    }
  }
  return result; /*0x4ccc48*/
}
