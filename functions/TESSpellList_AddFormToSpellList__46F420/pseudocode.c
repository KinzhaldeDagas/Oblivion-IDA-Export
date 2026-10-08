char __thiscall TESSpellList_AddFormToSpellList(char *this, void *a2)
{
  void *v4; // esi
  void *v5; // eax

  if ( *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184) ) /*0x46f432*/
  {
    TESSpellList_AddSpell(this, (int)a2); /*0x46f442*/
    return 1; /*0x46f447*/
  }
  else
  {
    v4 = OblivionDynamicCast( /*0x46f476*/
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &SpellItem `RTTI Type Descriptor',
           0);
    v5 = OblivionDynamicCast( /*0x46f478*/
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESLevSpell `RTTI Type Descriptor',
           0);
    if ( v4 ) /*0x46f482*/
    {
      return TESSpellList_AddSpell(this, (int)v4); /*0x46f487*/
    }
    else if ( v5 ) /*0x46f494*/
    {
      return TESSpellList_AddLevSpell(this, (int)v5); /*0x46f499*/
    }
    else
    {
      return 0; /*0x46f4a6*/
    }
  }
}
