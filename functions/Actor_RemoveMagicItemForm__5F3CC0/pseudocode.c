char __thiscall Actor_RemoveMagicItemForm(int *this, int a2)
{
  char v3; // bl
  int v4; // ebp
  int v5; // edi
  int v6; // edi
  int v7; // ebp
  TESForm *v8; // ebp
  int v9; // edi
  int v10; // edi
  _DWORD *MagicItemCooldown; // eax
  unsigned int v12; // edi
  int v14; // [esp-8h] [ebp-1Ch]
  int v15; // [esp-4h] [ebp-18h]
  int v16; // [esp+0h] [ebp-14h]
  int v17; // [esp+Ch] [ebp-8h]

  v3 = 0; /*0x5f3cce*/
  v4 = 0; /*0x5f3cd0*/
  v5 = (*(int (__thiscall **)(int *))(*this + 0x170))(this); /*0x5f3cd4*/
  if ( v5 ) /*0x5f3cd8*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 0x190))(this) ) /*0x5f3ce4*/
      v4 = v5; /*0x5f3cea*/
  }
  if ( TESSpellList_HasSpell((_DWORD *)(v4 + 0x54), a2) ) /*0x5f3cf4*/
  {
    v6 = 0; /*0x5f3d07*/
    v7 = (*(int (__thiscall **)(int *))(*this + 0x170))(this); /*0x5f3d0b*/
    if ( v7 ) /*0x5f3d0f*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 0x190))(this) ) /*0x5f3d1b*/
        v6 = v7; /*0x5f3d21*/
    }
    TESSpellList_RemoveSpell((int *)(v6 + 0x54), a2); /*0x5f3d2b*/
    v8 = 0; /*0x5f3d3a*/
    v9 = (*(int (__thiscall **)(int *))(*this + 0x170))(this); /*0x5f3d3e*/
    if ( v9 ) /*0x5f3d42*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 0x190))(this) ) /*0x5f3d4e*/
        v8 = (TESForm *)v9; /*0x5f3d54*/
    }
    TESForm_MarkAsModified(v8, 0x20); /*0x5f3d5a*/
    v3 = 1; /*0x5f3d5f*/
  }
  v10 = a2 + 0x18; /*0x5f3d6b*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x18) + 0x18))(a2 + 0x18) == 4 /*0x5f3d83*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x18))(v10) == 1 )
  {
    if ( (unsigned __int8)MagicTarget_HasMagicItem(this + 0x1A, v10) ) /*0x5f3d8b*/
    {
      v16 = 0; /*0x5f3d94*/
      v15 = 0; /*0x5f3d96*/
      v14 = a2 + 0x18; /*0x5f3d98*/
      MagicTarget_RemoveEffects(); /*0x5f3d9b*/
      v3 = 1; /*0x5f3da0*/
    }
  }
  if ( (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v10 + 0x18))(v10, v14, v15, v16) != 2 /*0x5f3db7*/
    || !Actor_GetMagicItemCooldown(this, v17) )
  {
    return Actor_RemoveMagicItemForm_::Done(v3, a2); /*0x5f3dae*/
  }
  MagicItemCooldown = Actor_GetMagicItemCooldown(this, v17); /*0x5f3dc3*/
  v12 = (unsigned int)MagicItemCooldown; /*0x5f3dc8*/
  if ( !MagicItemCooldown ) /*0x5f3dcc*/
    return Actor_RemoveMagicItemForm_::Return_1(a2); /*0x5f3dcc*/
  BSSimpleList_Remove(this + 0x27, (int)MagicItemCooldown); /*0x5f3dd5*/
  FormHeapFree(v12); /*0x5f3ddb*/
  return Actor_RemoveMagicItemForm_::Return_1(a2);
}
