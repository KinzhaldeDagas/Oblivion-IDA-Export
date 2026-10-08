void __userpurge Player_Actor_ModAVfMax(PlayerCharacter *a1@<ecx>, double st7_0@<st0>, int a2, float a4, Actor *a5)
{
  float v6; // [esp+20h] [ebp+8h]

  sub_5E02D0(a2, a4, (int)a5); /*0x65e277*/
  v6 = st7_0; /*0x65e27c*/
  if ( a2 != 0xFFFFFFFF ) /*0x65e283*/
    a1->maxAVModifiers[a2] = Player_ModAVNode(a1->maxAVModifiers[a2], v6, 1); /*0x65e2a1*/
  UI_UpdateActorValueDisplays(a2); /*0x65e2ac*/
  if ( a2 == 8 && v6 < 0.0 ) /*0x65e2c8*/
  {
    ((void (__thiscall *)(PlayerCharacter *, Actor *, _DWORD))a1->vtbl->super.OnHealthDamage)(a1, a5, LODWORD(v6)); /*0x65e2d9*/
    Player_OnActorValueBaseChanged(a1, 8u, 0); /*0x65e2e0*/
  }
  else
  {
    Player_OnActorValueBaseChanged(a1, a2, 0); /*0x65e2f2*/
  }
}
