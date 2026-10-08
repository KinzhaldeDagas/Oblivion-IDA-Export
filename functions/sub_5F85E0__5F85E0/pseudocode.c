void __userpurge sub_5F85E0(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6)
{
  int v6; // eax
  int v8; // eax
  ActorAnimData *AnimDataByPerspective; // eax
  NiControllerManager *manager; // eax
  int v11; // eax
  int v12; // eax
  ActorAnimData *v13; // eax
  NiControllerManager *v14; // eax
  int v15; // eax
  int v16; // eax
  TESForm::FormFlags flags; // esi
  unsigned int *m_presenceBitfield; // esi
  unsigned int *v19; // eax
  int v20; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v22; // eax
  TESObjectREFRVtbl *v23; // ecx
  int v24; // eax

  v6 = *(_DWORD *)&g_TESSaveLoadGame->unknown1C[0x28]; /*0x5f85e5*/
  if ( v6 == 0x1FFFF000 || v6 == 0x7FFFF000 ) /*0x5f85f9*/
    sub_5F0410(a1, a2); /*0x5f85fb*/
  v8 = *(_DWORD *)&g_TESSaveLoadGame->unknown1C[0x28]; /*0x5f8606*/
  if ( v8 == 0x1FFFF000 || v8 == 0x7FFFF000 ) /*0x5f8617*/
  {
    if ( a1 == (TESObjectREFR *)reference ) /*0x5f8625*/
    {
      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5f8629*/
      if ( AnimDataByPerspective ) /*0x5f8630*/
      {
        manager = AnimDataByPerspective->manager; /*0x5f8632*/
        if ( manager ) /*0x5f863a*/
        {
          v11 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)manager + 0x1F) + 0x4C))( /*0x5f8649*/
                  *((_DWORD *)manager + 0x1F),
                  "magicNode");
          if ( v11 ) /*0x5f864d*/
          {
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x5f8656*/
            if ( v12 ) /*0x5f865a*/
              NiTObjectArray_ClearAndRelease((void *)(v12 + 0xAC)); /*0x5f8662*/
          }
        }
      }
      v13 = PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x5f866e*/
    }
    else
    {
      v13 = a1->vtbl->GetAnimData(a1); /*0x5f867f*/
    }
    if ( v13 ) /*0x5f8683*/
    {
      v14 = v13->manager; /*0x5f8685*/
      if ( v14 ) /*0x5f868d*/
      {
        v15 = (*(int (__thiscall **)(_DWORD, const char *))(**((_DWORD **)v14 + 0x1F) + 0x4C))( /*0x5f869c*/
                *((_DWORD *)v14 + 0x1F),
                "magicNode");
        if ( v15 ) /*0x5f86a0*/
        {
          v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15); /*0x5f86a9*/
          if ( v16 ) /*0x5f86ad*/
            NiTObjectArray_ClearAndRelease((void *)(v16 + 0xAC)); /*0x5f86b5*/
        }
      }
    }
    flags = a1[1].member.super.flags; /*0x5f86ba*/
    if ( flags ) /*0x5f86bf*/
    {
      MagicCaster_CastingVFX_destr((void *)a1[1].member.super.flags); /*0x5f86c3*/
      FormHeapFree(flags); /*0x5f86c9*/
    }
    a1[1].member.super.flags = 0; /*0x5f86d1*/
  }
  MobileObject_PreLoadModifiedForm((int)a1, 0, a6, a3, a4, a5, a6); /*0x5f86dc*/
  if ( (a6 & 0x8000) != 0 ) /*0x5f86e7*/
  {
    m_presenceBitfield = (unsigned int *)a1[1].member.baseExtraList.members.m_presenceBitfield; /*0x5f86e9*/
    if ( a1 != (TESObjectREFR *)0xFFFFFF5C ) /*0x5f86f1*/
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1[1].member.baseExtraList.members.m_presenceBitfield) ) /*0x5f86fc*/
      {
        FormHeapFree(*m_presenceBitfield); /*0x5f8701*/
        v19 = *(unsigned int **)&a1[1].member.baseExtraList.members.m_presenceBitfield[4]; /*0x5f8706*/
        if ( v19 ) /*0x5f870e*/
        {
          *(_DWORD *)&a1[1].member.baseExtraList.members.m_presenceBitfield[4] = v19[1]; /*0x5f8713*/
          *m_presenceBitfield = *v19; /*0x5f8719*/
          FormHeapFree((unsigned int)v19); /*0x5f871b*/
        }
        else
        {
          *m_presenceBitfield = 0; /*0x5f8725*/
        }
      }
    }
  }
  if ( (a6 & 0x200000) != 0 ) /*0x5f8730*/
    AVCollection_Clear((AVCollection *)&a1[1].member.pos[1]); /*0x5f8738*/
  v20 = *(_DWORD *)&g_TESSaveLoadGame->unknown1C[0x28]; /*0x5f8743*/
  if ( v20 == 0x1FFFF000 || v20 == 0x7FFFF000 ) /*0x5f8752*/
  {
    vtbl = a1[1].vtbl; /*0x5f8758*/
    if ( vtbl ) /*0x5f875d*/
    {
      v22 = (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))vtbl->super.super.InitializeComponent + 0x3A))( /*0x5f8768*/
              vtbl,
              a1);
      if ( v22 ) /*0x5f876c*/
        (*(void (__thiscall **)(int, float, _DWORD, int, int, int, _DWORD))(*(_DWORD *)v22 + 0x78))( /*0x5f8787*/
          v22,
          flt_A41328,
          0,
          1,
          1,
          1,
          0);
    }
    v23 = a1[1].vtbl; /*0x5f8789*/
    if ( v23 ) /*0x5f878e*/
    {
      v24 = (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))v23->super.super.InitializeComponent + 0x3A))( /*0x5f8799*/
              v23,
              a1);
      if ( v24 ) /*0x5f879d*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v24 + 0x9C))(v24, 0, 1); /*0x5f87ac*/
    }
    sub_5E7B90(a1); /*0x5f87b0*/
    LOBYTE(a1[1].member.rot.z) = 0; /*0x5f87b5*/
    a1[2].member.baseForm = 0; /*0x5f87bb*/
    a1[2].member.super.modlist.next = 0; /*0x5f87c1*/
    LOBYTE(a1[2].member.pos[1]) = 1; /*0x5f87c7*/
    a1[2].member.baseExtraList.members.m_presenceBitfield[0] = 0; /*0x5f87ce*/
    LOBYTE(a1[2].member.rot.z) = 0; /*0x5f87d4*/
    LOBYTE(a1[2].member.super.modlist.data) = 0; /*0x5f87da*/
  }
}
