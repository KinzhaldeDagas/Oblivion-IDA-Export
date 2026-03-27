void __userpurge EquipWeapon(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        int a5,
        int a6)
{
  TESObjectREFR *v6; // ebp
  char *v7; // edi
  TESObjectREFR *v8; // esi
  int v9; // eax
  const char *v10; // eax
  NiObjectNET *v11; // eax
  NiObjectNET *v12; // edi
  TESObjectREFRVtbl *vtbl; // ebp
  void (__thiscall **v14)(TESObjectREFRVtbl *, int, _DWORD, int); // edi
  int v15; // eax
  TESObjectREFRVtbl *v16; // edi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  void *AnimData; // eax
  void (__thiscall *v19)(BaseFormComponent *); // ebx
  BSExtraDataVtbl *v20; // eax
  int v21; // [esp-8h] [ebp-38h]
  BSStringT Src; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v24; // [esp+2Ch] [ebp-4h]

  v6 = a1;
  if ( a1->member.niNode )
  {
    v7 = (char *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl->Unk_5A)(a1);
    v8 = 0;
    if ( v6->vtbl->IsActor(v6) )
      v8 = v6;
    if ( v6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( v7 )
        sub_479780(v7, st5_0, st6_0, a2, a5);
      v7 = (char *)sub_6600D0(TESDataHandler_g_PlayerRef, TESDataHandler_g_PlayerRef->isThirdPerson);
    }
    if ( v7 )
    {
      sub_479780(v7, st5_0, st6_0, a2, a5);
    }
    else if ( a5 )
    {
      if ( a5 != 0xFFFFFFD0 )
      {
        v9 = 9;
        if ( *(_BYTE *)(a5 + 0x90) == 5 )
          v9 = 0xE;
        v21 = v9;
        v10 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(a5 + 0x30) + 0x14))(a5 + 0x30);
        v11 = (NiObjectNET *)sub_479450(v10, v21, v6, 0);
        v12 = v11;
        if ( *(_BYTE *)(a5 + 0x90) == 5 )
        {
          NiObjectNET_SetName(v11, aBow);
        }
        else
        {
          Src.m_data = 0;
          Src.m_dataLen = 0;
          Src.m_bufLen = 0;
          v24 = 0;
          BSStringT_Static_Format(&Src, "%s (%08X)", *(const char **)off_B065AC, *(_DWORD *)(a5 + 0xC));
          NiObjectNET_SetName(v12, Src.m_data);
          v24 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)Src.m_data);
        }
        if ( !sub_45A500(SaveLoad_CurrentSavegame) )
        {
          if ( !Actor_IsWeaponOut(v8)
            && !(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v8[1].vtbl->super.super.InitializeComponent + 0x49))(
                  v8[1].vtbl,
                  0) )
          {
            (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v8[1].vtbl->super.super.InitializeComponent + 0xC2))(
              v8[1].vtbl,
              1);
          }
          vtbl = v8[1].vtbl;
          v14 = (void (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD, int))((char *)vtbl->super.super.InitializeComponent
                                                                            + 0x150);
          v15 = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))v8->vtbl->GetAnimData)(v8, v8);
          (*v14)(vtbl, a6, 0, v15);
          v6 = a1;
        }
      }
    }
    if ( v8 )
    {
      if ( *(_BYTE *)(a5 + 0x90) == 5 )
        sub_5E13D0(v8, 1);
      v16 = v8[1].vtbl;
      if ( v16 )
      {
        if ( *(_BYTE *)(a5 + 0x90) == 5 )
        {
          if ( v6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          {
            InitializeComponent = v16->super.super.InitializeComponent;
            AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
            (*((void (__thiscall **)(TESObjectREFRVtbl *, void *))InitializeComponent + 0x45))(v16, AnimData);
          }
          v19 = v16->super.super.InitializeComponent;
          v20 = TESObjectREFR_GetAnimData((Actor *)v6);
          (*((void (__thiscall **)(TESObjectREFRVtbl *, BSExtraDataVtbl *))v19 + 0x45))(v16, v20);
        }
      }
      sub_5EA1A0((int)v8, (int)v6, (_DWORD *)v6->member.niNode);
      sub_5EE1B0((Actor *)v8, a2);
    }
  }
}
