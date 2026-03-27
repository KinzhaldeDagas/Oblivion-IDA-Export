// positive sp value has been detected, the output may be wrong!
void __thiscall sub_5DBB00(_DWORD **this)
{
  char *Name; // eax
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  int v6; // [esp+0h] [ebp-Ch]
  float Level; // [esp+0h] [ebp-Ch]

  Name = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  Tile_SetString(*(this + 0xA), (_DWORD *)0xFAF, Name);
  v3 = sub_5EA720(TESDataHandler_g_PlayerRef);
  Tile_SetString(*(this + 0xA), (_DWORD *)0xFB0, v3);
  if ( ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(TESDataHandler_g_PlayerRef) )
  {
    v4 = *(char **)(((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(TESDataHandler_g_PlayerRef)
                  + 0x1C);
    if ( !v4 )
      v4 = EmptyString;
    Tile_SetString(*(this + 0xA), (_DWORD *)0xFB1, v4);
  }
  else
  {
    Tile_SetString(*(this + 0xA), (_DWORD *)0xFB1, "-");
  }
  v5 = sub_5EA6B0(TESDataHandler_g_PlayerRef);
  Tile_SetString(*(this + 0xA), (_DWORD *)0xFB2, v5);
  Level = (float)(unsigned __int16)Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, v6);
  Tile_SetFloat((Tile *)*(this + 0xA), (_DWORD *)0xFB3, Level);
}
