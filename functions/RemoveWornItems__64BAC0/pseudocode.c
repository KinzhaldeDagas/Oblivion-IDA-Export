void __userpurge RemoveWornItems(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6,
        char a7,
        char a8)
{
  TESForm *v10; // eax
  BSExtraDataVtbl *v11; // ebp
  TESForm *v12; // eax
  BSExtraDataVtbl *v13; // eax
  int v14; // edx
  int v15; // edx
  TESObjectREFRVtbl *vtbl; // ecx
  char v17; // [esp+Ch] [ebp-4h]
  char v18; // [esp+14h] [ebp+4h]

  v10 = a6->vtbl->GetBaseForm(a6); /*0x64bae2*/
  v11 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64baf4*/
                             v10,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESNPC `RTTI Type Descriptor',
                             0);
  v12 = a6->vtbl->GetBaseForm(a6); /*0x64bb07*/
  v13 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64bb0a*/
                             v12,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESCreature `RTTI Type Descriptor',
                             0);
  v14 = a1[2]; /*0x64bb0f*/
  v17 = 1; /*0x64bb17*/
  v18 = 1; /*0x64bb1c*/
  if ( v14 ) /*0x64bb21*/
  {
    if ( *(_BYTE *)(v14 + 0x20) == 4 ) /*0x64bb27*/
    {
      a8 = 1; /*0x64bb29*/
      v17 = 0; /*0x64bb2e*/
    }
    else
    {
      v15 = *(_DWORD *)(v14 + 0x1C); /*0x64bb35*/
      v17 = (v15 & 0x100000) == 0; /*0x64bb42*/
      if ( (v15 & 0x200000) == 0 ) /*0x64bb4d*/
        goto LABEL_6; /*0x64bb4d*/
    }
    v18 = 0; /*0x64bb4f*/
  }
LABEL_6:
  if ( v11 ) /*0x64bb56*/
  {
    sub_5227A0(v11, a3, a4, a5, a6, v17, v18, a8, 1); /*0x64bb6c*/
  }
  else if ( v13 ) /*0x64bb75*/
  {
    sub_51E240(v13, a2, a3, a4, a5, a6, v17, v18, 1); /*0x64bb86*/
  }
  vtbl = a6[1].vtbl; /*0x64bb8b*/
  if ( vtbl ) /*0x64bb90*/
    (*((void (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0xC7))(vtbl, 1); /*0x64bb9c*/
  if ( a7 ) /*0x64bba3*/
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a6, 1); /*0x64bbb2*/
}
