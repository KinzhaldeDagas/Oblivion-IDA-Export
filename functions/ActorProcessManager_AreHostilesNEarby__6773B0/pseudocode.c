char __userpurge ActorProcessManager::AreHostilesNEarby@<al>(int a1@<ecx>, signed int a2@<edi>, char a3, BOOL a4)
{
  char v4; // bl
  Actor *i; // ebp
  int vtbl; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  bool IsCreature; // [esp+14h] [ebp-1Ch]
  float v16; // [esp+2Ch] [ebp-4h]
  float Distance; // [esp+34h] [ebp+4h]

  v4 = 0; /*0x6773b8*/
  v16 = g_GameSettingStringPointers_B36CD8[0x3A4]; /*0x6773ba*/
  if ( a3 ) /*0x6773c3*/
    v16 = g_GameSettingStringPointers_B36CD8[0x3A2]; /*0x6773cb*/
  for ( i = ActorList_ReturnHead((ActorList *)(a1 + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x6773db*/
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x6773e9*/
      break; /*0x6773ed*/
    if ( v4 ) /*0x6773f5*/
      break; /*0x6773f5*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) ) /*0x677406*/
    {
      vtbl = (int)i->vtbl; /*0x677410*/
      if ( i->vtbl ) /*0x677410*/
      {
        if ( (PlayerCharacter *)vtbl != reference /*0x677445*/
          && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)vtbl + 0x198))(vtbl, 0)
          && (*(_DWORD *)(vtbl + 8) & 0x800) == 0 )
        {
          v7 = *(_DWORD *)(vtbl + 0x58); /*0x67744b*/
          if ( v7 ) /*0x677450*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x3D0))(v7) ) /*0x67745a*/
              vtbl = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(vtbl + 0x58) + 0x3D0))(*(_DWORD *)(vtbl + 0x58)); /*0x67746d*/
          }
          Distance = TesObjectREF_GetDistance((TESObjectREFR *)reference, (TESObjectREFR *)vtbl, 0); /*0x67747d*/
          if ( v16 >= (double)Distance ) /*0x677490*/
          {
            v8 = (*(int (__thiscall **)(int, PlayerCharacter *, signed int))(*(_DWORD *)vtbl + 0x224))( /*0x6774a2*/
                   vtbl,
                   reference,
                   a2);
            a2 = 0x64; /*0x6774a4*/
            v9 = v8; /*0x6774aa*/
            IsCreature = Actor_IsCreature((Actor *)vtbl); /*0x6774b5*/
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x284))(vtbl); /*0x6774c8*/
            shouldActorFight(v9, 0, v10, COERCE_FLOAT(0x21), a4, 0, IsCreature, 0); /*0x6774ce*/
            if ( v11 > 0 ) /*0x6774d8*/
              v4 = 1; /*0x6774da*/
          }
        }
      }
    }
  }
  return v4; /*0x6774ec*/
}
