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
  int v9; // eax
  BSExtraDataVtbl *v10; // edi
  BSExtraDataVtbl *v11; // ebp
  int v12; // eax
  int v13; // eax
  char v14; // [esp+Ch] [ebp-4h]
  char v15; // [esp+14h] [ebp+4h]

  vtbl = a1[1].vtbl;
  v8 = 0;
  if ( vtbl )
  {
    if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) )
      v8 = a1[1].vtbl;
  }
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    if ( v8 )
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v8->super.super.InitializeComponent + 0xC7))(v8, 1);
    else
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl->Set3D)(a1, 0);
  }
  sub_4DDB00(a1, a6);
  v9 = (int)a1->vtbl->GetBaseForm(a1);
  v10 = 0;
  v11 = 0;
  if ( *(_BYTE *)(v9 + 4) == 0x23 )
  {
    v10 = (BSExtraDataVtbl *)v9;
  }
  else if ( *(_BYTE *)(v9 + 4) == 0x24 )
  {
    v11 = (BSExtraDataVtbl *)v9;
  }
  v14 = 1;
  v15 = 1;
  if ( a1[1].vtbl )
  {
    v12 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 0x1C);
      v14 = (v13 & 0x100000) == 0;
      v15 = (v13 & 0x200000) == 0;
    }
  }
  if ( v10 )
  {
    sub_5227A0(v10, a3, a4, a5, a1, v14, v15, 0, 1);
  }
  else if ( v11 )
  {
    sub_51E240(v11, a2, a3, a4, a5, a1, v14, v15, 1);
  }
}
