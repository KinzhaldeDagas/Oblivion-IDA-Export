// Player integer script-offset modifier. Store a current-value modifier, refresh UI, and notify with rebuild=false. Skill base values and requiredSkillExp remain unchanged.
void __thiscall Player_Actor_ModAViOffset(PlayerCharacter *this, int a2, signed int a3, Actor *a4)
{
  int v5; // eax
  int v6; // ebx
  float v7; // [esp+24h] [ebp+8h]

  if ( !g_godModeEnabled || (double)a3 >= *(float *)&SrcStr || a2 < 8 || a2 > 0xA ) /*0x65e32a*/
  {
    sub_5E2510(a2, a3, (int)a4); /*0x65e33d*/
    v6 = v5; /*0x65e345*/
    v7 = (float)v5; /*0x65e34f*/
    if ( a2 != 0xFFFFFFFF ) /*0x65e35b*/
      this->scriptAVModifiers[a2] = Player_ModAVNode(this->scriptAVModifiers[a2], v7, 1); /*0x65e379*/
    UI_UpdateActorValueDisplays(a2); /*0x65e384*/
    if ( a2 == 8 && v6 < 0 ) /*0x65e393*/
      ((void (__thiscall *)(PlayerCharacter *, Actor *, _DWORD))this->vtbl->super.OnHealthDamage)(this, a4, LODWORD(v7)); /*0x65e3a8*/
    Player_OnActorValueBaseChanged(this, a2, 0); /*0x65e3af*/
  }
}
