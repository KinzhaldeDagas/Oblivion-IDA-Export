int __thiscall Actor_AddMagicItemForm(void *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  TESForm *v7; // ebx
  int v8; // edi

  v4 = 0;
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v4 = v5;
  }
  v6 = a2;
  LOBYTE(a2) = TESSpellList_AddSpell((void *)(v4 + 0x54), a2);
  if ( (_BYTE)a2 )
  {
    v7 = 0;
    v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
    if ( v8 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
        v7 = (TESForm *)v8;
    }
    TESForm_MarkAsModified(v7, 0x20);
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 0x18) + 0x18))(v6 + 0x18) == 4
    || (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 0x18) + 0x18))(v6 + 0x18) == 1 )
  {
    return Actor_AddMagicItemForm_::ApplySpellToActor(v6, (int)this, a2, a3);
  }
  else
  {
    return Actor_AddMagicItemForm_::Done(a2);
  }
}
