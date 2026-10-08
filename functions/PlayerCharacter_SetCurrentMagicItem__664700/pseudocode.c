void __thiscall PlayerCharacter_SetCurrentMagicItem(_DWORD *this, char *a2)
{
  char *v3; // ecx
  const char *v4; // eax
  int DefaultPlayerSpell; // eax
  char *v6; // ecx
  unsigned int v7; // edi
  int v8; // [esp+0h] [ebp-110h]
  int v9; // [esp+4h] [ebp-10Ch]
  int v10; // [esp+8h] [ebp-108h] BYREF
  int v11; // [esp+Ch] [ebp-104h]
  char v12; // [esp+10h] [ebp-100h]

  v3 = (char *)*(this + 0x189); /*0x664717*/
  if ( v3 != a2 ) /*0x664727*/
  {
    if ( v3 ) /*0x66472f*/
      MagicItem_UnloadVFXModels(v3, 1); /*0x664733*/
    *(this + 0x189) = a2; /*0x66473a*/
    if ( a2 ) /*0x664740*/
    {
      v4 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem((_DWORD *)a2 + 3, 3, 0, v8, v9, v10, v11, v12) /*0x664754*/
                                      + 0x1C)
                          + 0x48);
      if ( !v4 ) /*0x664759*/
        v4 = EmptyString; /*0x66475b*/
    }
    else
    {
      if ( !Magic_GetDefaultPlayerSpell() ) /*0x664781*/
      {
        _sprintf((char *)&v10, "%s\\icon_hud_default_magic.dds", "Icons"); /*0x6647d1*/
        goto LABEL_13; /*0x6647d1*/
      }
      DefaultPlayerSpell = Magic_GetDefaultPlayerSpell(); /*0x664787*/
      v4 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem( /*0x66479c*/
                                          (_DWORD *)(DefaultPlayerSpell + 0x24),
                                          3,
                                          0,
                                          v8,
                                          v9,
                                          v10,
                                          v11,
                                          v12)
                                      + 0x1C)
                          + 0x48);
      if ( !v4 ) /*0x6647a1*/
        v4 = EmptyString; /*0x6647a3*/
    }
    _sprintf((char *)&v10, "%s\\%s", "Icons", v4); /*0x664770*/
LABEL_13:
    sub_57B2D0((char *)&v10); /*0x6647d9*/
    v6 = (char *)*(this + 0x189); /*0x6647e3*/
    if ( v6 ) /*0x6647ee*/
      MagicItem_LoadVFXModels(v6, 0); /*0x6647f2*/
    sub_662DA0(this); /*0x6647f9*/
    v7 = *(this + 0x1D9); /*0x6647fe*/
    if ( v7 ) /*0x664806*/
    {
      sub_6B73E0((_DWORD *)*(this + 0x1D9)); /*0x66480a*/
      FormHeapFree(v7); /*0x664810*/
      *(this + 0x1D9) = 0; /*0x664818*/
      *(this + 0x1D8) = 0; /*0x664822*/
    }
  }
}
