char __thiscall TESSpellList_AddFormToSpellList(char *this, void *a2)
{
  void *v4; // esi
  void *v5; // eax

  if ( *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
  {
    TESSpellList_AddSpell(this, (int)a2);
    return 1;
  }
  else
  {
    v4 = OblivionDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &SpellItem `RTTI Type Descriptor',
           0);
    v5 = OblivionDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESLevSpell `RTTI Type Descriptor',
           0);
    if ( v4 )
    {
      return TESSpellList_AddSpell(this, (int)v4);
    }
    else if ( v5 )
    {
      return TESSpellList_AddLevSpell(this, (int)v5);
    }
    else
    {
      return 0;
    }
  }
}
