char __thiscall sub_6134C0(void **this, int a2)
{
  int *EffectiveCombatStyle; // eax
  int *v4; // eax
  int *v5; // eax
  int *v7; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  char v11; // al
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x6134ca*/
  if ( (double)(*(char (__thiscall **)(int *))(*EffectiveCombatStyle + 0x11C))(EffectiveCombatStyle) > dbl_A2FC68 ) /*0x6134f1*/
  {
    v4 = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x6134fc*/
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v4 + 0x16C))(v4, 2) ) /*0x61350d*/
    {
      switch ( (unsigned int)retaddr ) /*0x613527*/
      {
        case 0x16u: /*0x613527*/
          v5 = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x613531*/
          return (*(char (__thiscall **)(int *))(*v5 + 0x128))(v5) > 0; /*0x61354c*/
        case 0x17u: /*0x613527*/
          v7 = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x613552*/
          return (*(char (__thiscall **)(int *))(*v7 + 0x12C))(v7) > 0; /*0x61356d*/
        case 0x18u: /*0x613527*/
          v8 = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x613573*/
          return (*(char (__thiscall **)(int *))(*v8 + 0x130))(v8) > 0; /*0x61358e*/
        case 0x19u: /*0x613527*/
          v9 = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x613594*/
          return (*(char (__thiscall **)(int *))(*v9 + 0x134))(v9) > 0; /*0x6135af*/
        case 0x1Au: /*0x613527*/
          v10 = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x6135b5*/
          v11 = (*(int (__thiscall **)(int *))(*v10 + 0x138))(v10); /*0x6135c4*/
          return def_613527(v11 > 0, a2);
        default:
          break;
      }
    }
  }
  JUMPOUT(0x6135CB); /*0x6135cb*/
}
