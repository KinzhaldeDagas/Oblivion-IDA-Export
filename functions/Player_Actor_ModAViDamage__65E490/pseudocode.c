// Player integer damage-modifier path. Update the damage/current-value channel, refresh UI, and notify with rebuild=false. Skill progression state is not advanced.
void __thiscall Player_Actor_ModAViDamage(PlayerCharacter *this, int a2, signed int a3, Actor *a4)
{
  int v5; // eax
  int v6; // ebx
  float v7; // [esp+20h] [ebp+8h]

  if ( !g_godModeEnabled || (double)a3 >= *(float *)&SrcStr || a2 < 8 || a2 > 0xA ) /*0x65e4ba*/
  {
    sub_5E2510(a2, a3, (int)a4); /*0x65e4c9*/
    v6 = v5; /*0x65e4ce*/
    v7 = (float)v5; /*0x65e4dd*/
    Player_ModAVModifierf(2, a2, SLODWORD(v7), 0); /*0x65e4eb*/
    UI_UpdateActorValueDisplays(a2); /*0x65e4f1*/
    if ( a2 == 8 && v6 < 0 ) /*0x65e500*/
      ((void (__thiscall *)(PlayerCharacter *, Actor *, _DWORD))this->vtbl->super.OnHealthDamage)(this, a4, LODWORD(v7)); /*0x65e515*/
    Player_OnActorValueBaseChanged(this, a2, 0); /*0x65e51c*/
  }
}
