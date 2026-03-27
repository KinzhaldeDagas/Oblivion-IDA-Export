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

  v4 = 0;
  v16 = fHostileActorExteriorDistance;
  if ( a3 )
    v16 = flt_B37B60;
  for ( i = sub_7616D0((ActorList *)(a1 + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
      break;
    if ( v4 )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
    {
      vtbl = (int)i->vtbl;
      if ( i->vtbl )
      {
        if ( (PlayerCharacter *)vtbl != TESDataHandler_g_PlayerRef
          && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)vtbl + 0x198))(vtbl, 0)
          && (*(_DWORD *)(vtbl + 8) & 0x800) == 0 )
        {
          v7 = *(_DWORD *)(vtbl + 0x58);
          if ( v7 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x3D0))(v7) )
              vtbl = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(vtbl + 0x58) + 0x3D0))(*(_DWORD *)(vtbl + 0x58));
          }
          Distance = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, (TESObjectREFR *)vtbl, 0);
          if ( v16 >= (double)Distance )
          {
            v8 = (*(int (__thiscall **)(int, PlayerCharacter *, signed int))(*(_DWORD *)vtbl + 0x224))(
                   vtbl,
                   TESDataHandler_g_PlayerRef,
                   a2);
            a2 = 0x64;
            v9 = v8;
            IsCreature = Actor_IsCreature((Actor *)vtbl);
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x284))(vtbl);
            shouldActorFight(v9, 0, v10, COERCE_FLOAT(0x21), a4, 0, IsCreature, 0);
            if ( v11 > 0 )
              v4 = 1;
          }
        }
      }
    }
  }
  return v4;
}
