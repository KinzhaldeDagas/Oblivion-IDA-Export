void __thiscall sub_443C70(_DWORD *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // edi
  int v4; // esi
  int v5; // esi
  int i; // esi
  TESForm *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax

  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x11E]) ) /*0x443c79*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x11E]), 1, 1); /*0x443c8c*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x120]) ) /*0x443c96*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x120]), 1, 1); /*0x443ca5*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x122]) ) /*0x443caf*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x122]), 1, 1); /*0x443cbe*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x124]) ) /*0x443cc8*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x124]), 1, 1); /*0x443cd7*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x126]) ) /*0x443ce1*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x126]), 1, 1); /*0x443cf0*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x128]) ) /*0x443cfa*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x128]), 1, 1); /*0x443d09*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12A]) ) /*0x443d13*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x12A]), 1, 1); /*0x443d22*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12C]) ) /*0x443d2c*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x12C]), 1, 1); /*0x443d3b*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12E]) ) /*0x443d45*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x12E]), 1, 1); /*0x443d54*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x130]) ) /*0x443d5e*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x130]), 1, 1); /*0x443d6d*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x132]) ) /*0x443d77*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x132]), 1, 1); /*0x443d86*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x134]) ) /*0x443d90*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(g_GameSettingStringPointers_B36CD8[0x134]), 1, 1); /*0x443d9f*/
  if ( *MEMORY[0xB371B0].value ) /*0x443da9*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)MEMORY[0xB371B0].value, 1, 1); /*0x443db8*/
  if ( *stru_B371B8.value ) /*0x443dc2*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)stru_B371B8.value, 1, 1); /*0x443dd1*/
  if ( *stru_B371C0.value ) /*0x443ddb*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)stru_B371C0.value, 1, 1); /*0x443dea*/
  if ( *(_BYTE *)LODWORD(MEMORY[0xB37A58][0x38]) ) /*0x443df4*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], LODWORD(MEMORY[0xB37A58][0x38]), 1, 1); /*0x443e03*/
  v2 = *(this + 0x25); /*0x443e08*/
  v3 = InterlockedDecrement; /*0x443e10*/
  if ( v2 ) /*0x443e16*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x443e1c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x443e2e*/
    *(this + 0x25) = 0; /*0x443e30*/
  }
  v4 = *(this + 0x26); /*0x443e36*/
  if ( v4 ) /*0x443e3e*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x443e44*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x443e56*/
    *(this + 0x26) = 0; /*0x443e58*/
  }
  v5 = *(this + 0x27); /*0x443e5e*/
  if ( v5 ) /*0x443e66*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x443e6c*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x443e7e*/
    *(this + 0x27) = 0; /*0x443e80*/
  }
  for ( i = 0; i < 0x15; ++i ) /*0x443e86*/
  {
    v7 = TESForm_LookupByFormID(dword_B067C0[i]); /*0x443e97*/
    if ( v7 ) /*0x443ea1*/
    {
      LOWORD(v8) = v7[1].member.modlist.next; /*0x443ea3*/
      if ( (_WORD)v8 == 0xFFFF ) /*0x443eac*/
        v8 = strlen((const char *)v7[1].member.modlist.data); /*0x443eb1*/
      else
        v8 = (unsigned __int16)v8; /*0x443ec1*/
      if ( v8 ) /*0x443ec6*/
      {
        v9 = (*(int (__thiscall **)(UInt32 *))(v7[1].member.refID + 0x14))(&v7[1].member.refID); /*0x443ed1*/
        QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v9, 1, 1); /*0x443ede*/
      }
    }
    unk_B35E50[i] = 0; /*0x443ee3*/
  }
}
