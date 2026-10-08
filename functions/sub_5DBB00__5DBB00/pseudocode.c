void __thiscall sub_5DBB00(_DWORD **this)
{
  char *Name; // eax
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  float a3; // [esp+0h] [ebp-Ch]

  Name = TESObjectREFR_GetName((TESObjectREFR *)reference); /*0x5dbb0a*/
  Tile_SetString(*(this + 0xA), (_DWORD *)0xFAF, Name); /*0x5dbb18*/
  v3 = sub_5EA720((Actor *)reference); /*0x5dbb23*/
  Tile_SetString(*(this + 0xA), (_DWORD *)0xFB0, v3); /*0x5dbb31*/
  if ( ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_9A)(reference) ) /*0x5dbb44*/
  {
    v4 = *(char **)(((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_9A)(reference) + 0x1C); /*0x5dbb5d*/
    if ( !v4 ) /*0x5dbb62*/
      v4 = EmptyString; /*0x5dbb64*/
    Tile_SetString(*(this + 0xA), (_DWORD *)0xFB1, v4); /*0x5dbb6a*/
  }
  else
  {
    Tile_SetString(*(this + 0xA), (_DWORD *)0xFB1, "-"); /*0x5dbb79*/
  }
  v5 = sub_5EA6B0((Actor *)reference); /*0x5dbb84*/
  Tile_SetString(*(this + 0xA), (_DWORD *)0xFB2, v5); /*0x5dbb92*/
  a3 = (float)(unsigned __int16)Actor_GetLevel((Actor *)reference); /*0x5dbbb1*/
  Tile_SetFloat((Tile *)*(this + 0xA), 0xFB3u, a3); /*0x5dbbb9*/
}
