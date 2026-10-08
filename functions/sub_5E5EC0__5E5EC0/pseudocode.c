void __userpurge sub_5E5EC0(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v8; // edi
  TESForm *v9; // eax
  BSExtraDataVtbl *v10; // edi
  BSExtraDataVtbl *v11; // ebp
  int v12; // eax
  int v13; // eax
  char v14; // [esp+Ch] [ebp-4h]
  char v15; // [esp+14h] [ebp+4h]

  vtbl = a1[1].vtbl; /*0x5e5ec5*/
  v8 = 0; /*0x5e5ec9*/
  if ( vtbl ) /*0x5e5ecd*/
  {
    if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) ) /*0x5e5ed4*/
      v8 = a1[1].vtbl; /*0x5e5eda*/
  }
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5e5ee3*/
  {
    if ( v8 ) /*0x5e5eee*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v8->super.super.InitializeComponent + 0xC7))(v8, 1); /*0x5e5efc*/
    else
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl->Set3D)(a1, 0); /*0x5e5f0a*/
  }
  sub_4DDB00(a1, a6); /*0x5e5f13*/
  v9 = a1->vtbl->GetBaseForm(a1); /*0x5e5f22*/
  v10 = 0; /*0x5e5f28*/
  v11 = 0; /*0x5e5f2a*/
  if ( v9->member.type == kFormType_NPC ) /*0x5e5f2f*/
  {
    v10 = (BSExtraDataVtbl *)v9; /*0x5e5f3a*/
  }
  else if ( v9->member.type == kFormType_Creature ) /*0x5e5f34*/
  {
    v11 = (BSExtraDataVtbl *)v9; /*0x5e5f36*/
  }
  v14 = 1; /*0x5e5f40*/
  v15 = 1; /*0x5e5f45*/
  if ( a1[1].vtbl ) /*0x5e5f3c*/
  {
    v12 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl); /*0x5e5f57*/
    if ( v12 ) /*0x5e5f5b*/
    {
      v13 = *(_DWORD *)(v12 + 0x1C); /*0x5e5f5d*/
      v14 = (v13 & 0x100000) == 0; /*0x5e5f6a*/
      v15 = (v13 & 0x200000) == 0; /*0x5e5f76*/
    }
  }
  if ( v10 ) /*0x5e5f7d*/
  {
    sub_5227A0(v10, a3, a4, a5, a1, v14, v15, 0, 1); /*0x5e5f90*/
  }
  else if ( v11 ) /*0x5e5f9e*/
  {
    sub_51E240(v11, a2, a3, a4, a5, a1, v14, v15, 1); /*0x5e5faf*/
  }
}
