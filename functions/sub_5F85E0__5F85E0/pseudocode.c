void __userpurge sub_5F85E0(TESObjectREFR *a1@<ecx>, int a2@<ebp>, int a3)
{
  UInt32 v6; // eax
  UInt32 v8; // eax
  _DWORD *AnimData; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  ActorAnimData *v13; // eax
  NiControllerManager *manager; // eax
  int v15; // eax
  int v16; // eax
  TESForm::FormFlags flags; // esi
  unsigned int *m_presenceBitfield; // esi
  unsigned int *v19; // eax
  UInt32 v20; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v22; // eax
  TESObjectREFRVtbl *v23; // ecx
  int v24; // eax

  v6 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v6 == 0x1FFFF000 || v6 == 0x7FFFF000 )
    sub_5F0410(a1, a2);
  v8 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v8 == 0x1FFFF000 || v8 == 0x7FFFF000 )
  {
    if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
      if ( AnimData )
      {
        v10 = AnimData[0x26];
        if ( v10 )
        {
          v11 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(v10 + 0x7C) + 0x4C))(
                  *(_DWORD *)(v10 + 0x7C),
                  "magicNode");
          if ( v11 )
          {
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
            if ( v12 )
              sub_477EF0((_WORD *)(v12 + 0xAC));
          }
        }
      }
      v13 = (ActorAnimData *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
    }
    else
    {
      v13 = a1->vtbl->GetAnimData(a1);
    }
    if ( v13 )
    {
      manager = v13->manager;
      if ( manager )
      {
        v15 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)manager + 0x1F) + 0x4C))(
                *((_DWORD *)manager + 0x1F),
                "magicNode");
        if ( v15 )
        {
          v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
          if ( v16 )
            sub_477EF0((_WORD *)(v16 + 0xAC));
        }
      }
    }
    flags = a1[1].member.super.flags;
    if ( flags )
    {
      MagicCaster_CastingVFX_destr((void *)a1[1].member.super.flags);
      FormHeapFree(flags);
    }
    a1[1].member.super.flags = 0;
  }
  MobileObject_PreLoadModifiedForm(a3);
  if ( (a3 & 0x8000) != 0 )
  {
    m_presenceBitfield = (unsigned int *)a1[1].member.baseExtraList.members.m_presenceBitfield;
    if ( a1 != (TESObjectREFR *)0xFFFFFF5C )
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1[1].member.baseExtraList.members.m_presenceBitfield) )
      {
        FormHeapFree(*m_presenceBitfield);
        v19 = *(unsigned int **)&a1[1].member.baseExtraList.members.m_presenceBitfield[4];
        if ( v19 )
        {
          *(_DWORD *)&a1[1].member.baseExtraList.members.m_presenceBitfield[4] = v19[1];
          *m_presenceBitfield = *v19;
          FormHeapFree((unsigned int)v19);
        }
        else
        {
          *m_presenceBitfield = 0;
        }
      }
    }
  }
  if ( (a3 & 0x200000) != 0 )
    AVCollection_Clear(&a1[1].member.pos[1]);
  v20 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v20 == 0x1FFFF000 || v20 == 0x7FFFF000 )
  {
    vtbl = a1[1].vtbl;
    if ( vtbl )
    {
      v22 = (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))vtbl->super.super.InitializeComponent + 0x3A))(
              vtbl,
              a1);
      if ( v22 )
        (*(void (__thiscall **)(int, float, _DWORD, int, int, int, _DWORD))(*(_DWORD *)v22 + 0x78))(
          v22,
          flt_A41328,
          0,
          1,
          1,
          1,
          0);
    }
    v23 = a1[1].vtbl;
    if ( v23 )
    {
      v24 = (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))v23->super.super.InitializeComponent + 0x3A))(
              v23,
              a1);
      if ( v24 )
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v24 + 0x9C))(v24, 0, 1);
    }
    sub_5E7B90(a1);
    LOBYTE(a1[1].member.rot.z) = 0;
    a1[2].member.baseForm = 0;
    a1[2].member.super.modlist.next = 0;
    LOBYTE(a1[2].member.pos[1]) = 1;
    a1[2].member.baseExtraList.members.m_presenceBitfield[0] = 0;
    LOBYTE(a1[2].member.rot.z) = 0;
    LOBYTE(a1[2].member.super.modlist.data) = 0;
  }
}
