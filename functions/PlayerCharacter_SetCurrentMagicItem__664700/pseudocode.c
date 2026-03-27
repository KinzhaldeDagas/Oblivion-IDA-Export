void __thiscall PlayerCharacter_SetCurrentMagicItem(_DWORD *this, char *a2)
{
  char *v7; // ecx
  const char *v8; // eax
  char *v9; // ecx
  unsigned int v10; // edi
  char v11[260]; // [esp+8h] [ebp-108h] BYREF

  v7 = (char *)this[0x189];
  if ( v7 != a2 )
  {
    if ( v7 )
      sub_419F10(v7, 1);
    this[0x189] = a2;
    if ( a2 )
    {
      v8 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x1C) + 0x48);
      if ( !v8 )
        v8 = EmptyString;
    }
    else
    {
      if ( !Magic_GetDefaultPlayerSpell() )
      {
        _sprintf(v11, "%s\\icon_hud_default_magic.dds", "Icons");
        goto LABEL_13;
      }
      Magic_GetDefaultPlayerSpell();
      v8 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x1C) + 0x48);
      if ( !v8 )
        v8 = EmptyString;
    }
    _sprintf(v11, "%s\\%s", "Icons", v8);
LABEL_13:
    sub_57B2D0(v11);
    v9 = (char *)this[0x189];
    if ( v9 )
      sub_41A610(v9, 0);
    sub_662DA0(this);
    v10 = this[0x1D9];
    if ( v10 )
    {
      sub_6B73E0((_DWORD *)this[0x1D9]);
      FormHeapFree(v10);
      this[0x1D9] = 0;
      this[0x1D8] = 0;
    }
  }
}
