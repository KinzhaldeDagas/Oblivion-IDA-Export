int __thiscall Actor_RemoveMagicItemForm(_DWORD *this, int a2)
{
  int v3; // ebp
  int v4; // edi
  int v5; // edi
  int v6; // ebp
  TESForm *v7; // ebp
  int v8; // edi
  char *v9; // edi
  _DWORD *MagicItemCooldown; // eax
  unsigned int v11; // edi
  char *v13; // [esp-10h] [ebp-24h]
  int v14; // [esp-Ch] [ebp-20h]
  int v15; // [esp-8h] [ebp-1Ch]
  int v16; // [esp+4h] [ebp-10h]
  char *retaddr; // [esp+14h] [ebp+0h]

  v3 = 0;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
      v3 = v4;
  }
  if ( TESSpellList_HasSpell((_DWORD *)(v3 + 0x54), a2) )
  {
    v5 = 0;
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this);
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
        v5 = v6;
    }
    TESSpellList_RemoveSpell((_DWORD *)(v5 + 0x54), a2);
    v7 = 0;
    v8 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this);
    if ( v8 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
        v7 = (TESForm *)v8;
    }
    TESForm_MarkAsModified(v7, 0x20);
  }
  v9 = retaddr + 0x18;
  if ( (*(int (__thiscall **)(char *))(*((_DWORD *)retaddr + 6) + 0x18))(retaddr + 0x18) == 4
    || (*(int (__thiscall **)(char *))(*(_DWORD *)v9 + 0x18))(v9) == 1 )
  {
    if ( (unsigned __int8)MagicTarget_HasMagicItem(this + 0x1A, (int)v9) )
    {
      v15 = 0;
      v14 = 0;
      v13 = retaddr + 0x18;
      MagicTarget_RemoveEffects();
    }
  }
  if ( (*(int (__thiscall **)(char *, char *, int, int))(*(_DWORD *)v9 + 0x18))(v9, v13, v14, v15) != 2
    || !Actor_GetMagicItemCooldown(this, v16) )
  {
    return Actor_RemoveMagicItemForm_::Done(a2);
  }
  MagicItemCooldown = Actor_GetMagicItemCooldown(this, v16);
  v11 = (unsigned int)MagicItemCooldown;
  if ( !MagicItemCooldown )
    return Actor_RemoveMagicItemForm_::Return_1(a2);
  BSSimpleList_Remove(this + 0x27, (int)MagicItemCooldown);
  FormHeapFree(v11);
  return Actor_RemoveMagicItemForm_::Return_1(a2);
}
