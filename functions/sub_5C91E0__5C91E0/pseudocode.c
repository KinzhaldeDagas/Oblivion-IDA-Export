void __usercall sub_5C91E0(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  int v3; // ebx
  TESForm *v4; // edi
  _DWORD *v5; // eax
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  _DWORD *v7; // esi
  void (__thiscall ***v8)(_DWORD, int); // esi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // esi
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp+20h] [ebp-D8h] BYREF
  int v16; // [esp+24h] [ebp-D4h] BYREF
  unsigned int v17; // [esp+28h] [ebp-D0h] BYREF
  _DWORD v18[50]; // [esp+30h] [ebp-C8h] BYREF

  v3 = 0;
  v4 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  if ( Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) )
  {
    if ( *((_DWORD *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) + 0x26) )
      v3 = *(_DWORD *)(*((_DWORD *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) + 0x26) + 0x7C);
  }
  v5 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
                   TESDataHandler_g_PlayerRef,
                   0);
  v6 = InterlockedDecrement;
  v7 = v5;
  if ( v5 )
  {
    if ( v5[7] )
    {
      sub_716620(v5, v3);
      (*(void (__thiscall **)(_DWORD, int *, _DWORD *))(*(_DWORD *)v7[7] + 0x88))(v7[7], &v16, v7);
      if ( v16 )
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v16;
        if ( !v6((volatile LONG *)(v16 + 4)) )
          (**v8)(v8, 1);
      }
    }
  }
  v9 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
                   TESDataHandler_g_PlayerRef,
                   0);
  v10 = v9;
  if ( v9 )
  {
    if ( v9[7] )
    {
      sub_716620(v9, v3);
      (*(void (__thiscall **)(_DWORD, int *, _DWORD *))(*(_DWORD *)v10[7] + 0x88))(v10[7], &v15, v10);
      if ( v15 )
      {
        v11 = (void (__thiscall ***)(_DWORD, int))v15;
        if ( !v6((volatile LONG *)(v15 + 4)) )
          (**v11)(v11, 1);
      }
    }
  }
  TESDataHandler_g_PlayerRef->super.super.super.process->Unk_17(TESDataHandler_g_PlayerRef->super.super.super.process);
  sub_405CE0(v4);
  v12 = (int *)((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_5A)(TESDataHandler_g_PlayerRef);
  sub_525A70((int)v4, a3, (TESChildCELL *)TESDataHandler_g_PlayerRef, v12);
  FaceGenHeadParameters_Ctor(v18);
  TESRace_GetFaceGenHeadParameters((int *)v4[9].member.modlist.data, (int)v4, (int)v18);
  v13 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(TESDataHandler_g_PlayerRef);
  BSFaceGen_DoSomethingWithFaceGenNode(v13, 0);
  v14 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(TESDataHandler_g_PlayerRef);
  BSFaceGen_DoSomethingWithFaceGenNode(v14, 0);
  UpdatePlayerHead(a1, a2, a3);
  v18[0x31] = 0xFFFFFFFF;
  FaceGenHeadParameters_Dtor(&v17);
}
