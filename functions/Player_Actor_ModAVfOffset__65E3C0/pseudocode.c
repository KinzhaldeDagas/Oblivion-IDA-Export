// Player float script-offset modifier. Store a current-value modifier, refresh UI, and notify with rebuild=false; this does not perform skill advancement.
void __userpurge Player_Actor_ModAVfOffset(PlayerCharacter *a1@<ecx>, double st7_0@<st0>, int a2, int a4, Actor *a5)
{
  float v6; // [esp+20h] [ebp+8h]

  if ( g_godModeEnabled && *(float *)&a4 < 0.0 && a2 >= 8 && a2 <= 0xA ) /*0x65e3e8*/
  {
    Player_Actor_ModAVfOffset_::nullsub_31(a2, a4, (int)a5); /*0x65e482*/
  }
  else
  {
    sub_5E02D0(a2, *(float *)&a4, (int)a5); /*0x65e3f9*/
    v6 = st7_0; /*0x65e3fe*/
    if ( a2 != 0xFFFFFFFF ) /*0x65e405*/
      a1->scriptAVModifiers[a2] = Player_ModAVNode(a1->scriptAVModifiers[a2], v6, 1); /*0x65e423*/
    UI_UpdateActorValueDisplays(a2); /*0x65e42e*/
    if ( a2 == 8 && v6 < 0.0 ) /*0x65e44a*/
    {
      ((void (__thiscall *)(PlayerCharacter *, Actor *, _DWORD))a1->vtbl->super.OnHealthDamage)(a1, a5, LODWORD(v6)); /*0x65e45b*/
      Player_OnActorValueBaseChanged(a1, 8u, 0); /*0x65e462*/
    }
    else
    {
      Player_OnActorValueBaseChanged(a1, a2, 0); /*0x65e474*/
    }
  }
}
