void sub_6136E0()
{
  int v0; // eax
  OSGlobals *v1; // edx
  void *sound; // esi

  if ( (SaveLoad_CurrentSavegame->flags & 0x800) == 0 && dword_B3B90C > 0 )
  {
    v0 = dword_B3B90C - 1;
    dword_B3B90C = v0;
    if ( v0 <= 0 )
    {
      v1 = OSGlobals;
      dword_B3B90C = 0;
      if ( !v1->quitGame )
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_E5)(
          TESDataHandler_g_PlayerRef,
          0);
      sound = OSGlobals->sound;
      if ( sound )
      {
        if ( !TESDataHandler_g_PlayerRef->vtbl->super.super.IsDead((MobileObject *)TESDataHandler_g_PlayerRef)
          && !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
        {
          sub_6ACD10(sound, 0xFFFFu, 0, COERCE_INT(1.0));
        }
      }
    }
  }
}
