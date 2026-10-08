char __thiscall Actor_AddMagicItemForm(void *this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  char v8; // bl
  TESForm *v9; // ebx
  int v10; // edi

  v5 = 0; /*0x5e099e*/
  v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e09a2*/
  if ( v6 ) /*0x5e09a6*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e09b2*/
      v5 = v6; /*0x5e09b8*/
  }
  v7 = a2; /*0x5e09ba*/
  v8 = TESSpellList_AddSpell((void *)(v5 + 0x54), a2); /*0x5e09c7*/
  LOBYTE(a2) = v8; /*0x5e09cb*/
  if ( v8 ) /*0x5e09cf*/
  {
    v9 = 0; /*0x5e09db*/
    v10 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e09df*/
    if ( v10 ) /*0x5e09e3*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e09ef*/
        v9 = (TESForm *)v10; /*0x5e09f5*/
    }
    TESForm_MarkAsModified(v9, 0x20); /*0x5e09fb*/
    v8 = a2; /*0x5e0a00*/
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 0x18) + 0x18))(v7 + 0x18) == 4 /*0x5e0a22*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 0x18) + 0x18))(v7 + 0x18) == 1 )
  {
    return Actor_AddMagicItemForm_::ApplySpellToActor(v7, (int)this, v8, a2, a3, a4); /*0x5e0a23*/
  }
  else
  {
    return Actor_AddMagicItemForm_::Done(v8, a2); /*0x5e0a22*/
  }
}
