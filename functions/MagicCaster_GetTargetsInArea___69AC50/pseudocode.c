void __thiscall MagicCaster_GetTargetsInArea_(char *this, char *a2, int a3, float a4, __int64 a5, _DWORD *a6)
{
  int Area; // ebx
  char *v7; // esi
  _DWORD *v8; // edi
  int v9; // esi
  _BYTE *v10; // eax
  int v11; // eax
  Actor *v12; // eax
  Actor *v13; // eax
  ActorVtbl *vtbl; // esi
  bool v15; // bl
  TESObjectREFR *v16; // ebp
  NiPoint3 v17; // [esp-10h] [ebp-30h]
  NiPoint3 v18; // [esp-10h] [ebp-30h]
  PlayerCharacter *v19; // [esp+10h] [ebp-10h]
  float v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]
  char v23; // [esp+24h] [ebp+4h]
  Actor *v24; // [esp+28h] [ebp+8h]

  if ( a6 )
  {
    Area = 0;
    if ( a2 )
    {
      v7 = a2 + 0xC;
      if ( a2 != (char *)0xFFFFFFF4 )
      {
        do
        {
          if ( !*((_DWORD *)v7 + 2) && !*((_DWORD *)v7 + 1) )
            break;
          v8 = *((_DWORD **)v7 + 1);
          if ( v8 )
          {
            if ( v8[4] == a3 && EffectItem_GetArea(*((_DWORD **)v7 + 1)) > Area )
              Area = EffectItem_GetArea(v8);
          }
          v9 = *((_DWORD *)v7 + 2);
          if ( !v9 )
            break;
          v7 = (char *)(v9 - 4);
        }
        while ( v7 );
        if ( Area )
        {
          v10 = OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                  &SpellItem `RTTI Type Descriptor',
                  0);
          if ( !v10 || (v23 = 1, (v10[0x40] & 0x10) == 0) )
            v23 = 0;
          v21 = (double)Area * fMagicUnitsPerFoot;
          v11 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this);
          if ( v11 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0x190))(v11) )
            v19 = (PlayerCharacter *)(this + 0xFFFFFFA4);
          else
            v19 = 0;
          v12 = sub_673A50(&ActorProcessManager_ptr, 0);
          v13 = sub_7616D0((ActorList *)v12);
          v24 = v13;
          if ( v13 )
          {
            while ( 1 )
            {
              vtbl = v13->vtbl;
              if ( !v13->vtbl )
                break;
              v22 = (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x49))(vtbl);
              v15 = 0;
              v16 = (TESObjectREFR *)OblivionDynamicCast(
                                       vtbl,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                       &Actor `RTTI Type Descriptor',
                                       0);
              if ( v19 )
                v15 = v16 == (TESObjectREFR *)v19;
              if ( v22 )
              {
                if ( !v15 )
                {
                  if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x55))(vtbl) )
                  {
                    if ( v21 >= sub_4D7E30((float *)vtbl, &a4) && (!v16 || !Actor_IsGhost((Actor *)v16)) )
                    {
                      if ( v23 || (v17.x = a4, *(_QWORD *)&v17.y = a5, sub_69A490(v17, v16)) )
                        BSSimpleList_PushFront(a6, (int)v16);
                    }
                  }
                }
              }
              v24 = *(Actor **)&v24->members.super.super.super.type;
              if ( !v24 )
                break;
              v13 = v24;
            }
          }
          if ( TESDataHandler_g_PlayerRef != v19 )
          {
            if ( TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef) )
            {
              if ( v21 >= sub_4D7E30((float *)TESDataHandler_g_PlayerRef, &a4)
                && !Actor_IsGhost((Actor *)TESDataHandler_g_PlayerRef) )
              {
                if ( v23
                  || (v18.x = a4, *(_QWORD *)&v18.y = a5, sub_69A490(v18, (TESObjectREFR *)TESDataHandler_g_PlayerRef)) )
                {
                  BSSimpleList_PushFront(a6, (int)TESDataHandler_g_PlayerRef);
                }
              }
            }
          }
        }
      }
    }
  }
}
