void __thiscall Player_Actor_ModAViMax(PlayerCharacter *this, int a2, signed int a3, Actor *a4)
{
  int v5; // eax
  int v6; // ebx
  float v7; // [esp+24h] [ebp+8h]

  sub_5E2510(a2, a3, (int)a4); /*0x65e1d5*/
  v6 = v5; /*0x65e1dd*/
  v7 = (float)v5; /*0x65e1e7*/
  if ( a2 != 0xFFFFFFFF ) /*0x65e1f3*/
    this->maxAVModifiers[a2] = Player_ModAVNode(this->maxAVModifiers[a2], v7, 1); /*0x65e211*/
  UI_UpdateActorValueDisplays(a2); /*0x65e21c*/
  if ( a2 == 8 && v6 < 0 ) /*0x65e22b*/
    ((void (__thiscall *)(PlayerCharacter *, Actor *, _DWORD))this->vtbl->super.OnHealthDamage)(this, a4, LODWORD(v7)); /*0x65e240*/
  Player_OnActorValueBaseChanged(this, a2, 0); /*0x65e247*/
}
