void sub_6136E0()
{
  int v0; // eax
  OSGlobals *v1; // edx
  char *sound; // esi

  if ( (g_TESSaveLoadGame->flags & 0x800) == 0 && unk_B3B90C > 0 ) /*0x6136fb*/
  {
    v0 = unk_B3B90C - 1; /*0x6136fd*/
    unk_B3B90C = v0; /*0x613702*/
    if ( v0 <= 0 ) /*0x613707*/
    {
      v1 = MEMORY[0xB33398]; /*0x613709*/
      unk_B3B90C = 0; /*0x61370f*/
      if ( !v1->quitGame ) /*0x613719*/
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.Unk_E5)(reference, 0); /*0x61372e*/
      sound = (char *)MEMORY[0xB33398]->sound; /*0x613736*/
      if ( sound ) /*0x61373b*/
      {
        if ( !reference->vtbl->super.super.IsDead((MobileObject *)reference) /*0x613761*/
          && !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) )
        {
          sub_6ACD10(sound, 0xFFFFu, 0, COERCE_INT(1.0)); /*0x613776*/
        }
      }
    }
  }
}
