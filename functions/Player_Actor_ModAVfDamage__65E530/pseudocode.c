// Player float damage-modifier path. Update the damage/current-value channel, refresh UI, and notify with rebuild=false; no major/minor progression counters are touched.
double __userpurge Player_Actor_ModAVfDamage@<st0>(
        PlayerCharacter *a1@<ecx>,
        double st7_0@<st0>,
        int a2,
        float a4,
        int a5)
{
  int v6; // [esp+1Ch] [ebp+8h]

  if ( !g_godModeEnabled || a4 >= 0.0 || a2 < 8 || a2 > 0xA ) /*0x65e558*/
  {
    sub_5E02D0(a2, a4, a5); /*0x65e565*/
    *(float *)&v6 = st7_0; /*0x65e56a*/
    st7_0 = *(float *)&v6; /*0x65e56e*/
    Player_ModAVModifierf(2, a2, v6, 0); /*0x65e57d*/
    UI_UpdateActorValueDisplays(a2); /*0x65e583*/
    if ( a2 == 8 && *(float *)&v6 < 0.0 ) /*0x65e59f*/
    {
      ((void (__thiscall *)(PlayerCharacter *, int, int))a1->vtbl->super.OnHealthDamage)(a1, a5, v6); /*0x65e5b0*/
      Player_OnActorValueBaseChanged(a1, 8u, 0); /*0x65e5b7*/
    }
    else
    {
      Player_OnActorValueBaseChanged(a1, a2, 0); /*0x65e5c9*/
    }
  }
  return st7_0; /*0x65e5bf*/
}
