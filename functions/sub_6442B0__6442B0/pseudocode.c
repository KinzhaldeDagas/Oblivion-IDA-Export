void __userpurge sub_6442B0(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6,
        char a7)
{
  TESForm *v9; // eax
  BSExtraDataVtbl *v10; // ebp
  TESForm *v11; // eax
  BSExtraDataVtbl *v12; // eax
  int v13; // edx
  int v14; // edx
  char v15; // [esp+Ch] [ebp-4h]
  char v16; // [esp+14h] [ebp+4h]

  v9 = a6->vtbl->GetBaseForm(a6); /*0x6442d2*/
  v10 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x6442e4*/
                             v9,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESNPC `RTTI Type Descriptor',
                             0);
  v11 = a6->vtbl->GetBaseForm(a6); /*0x6442f7*/
  v12 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x6442fa*/
                             v11,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESCreature `RTTI Type Descriptor',
                             0);
  v13 = a1[2]; /*0x6442ff*/
  v15 = 1; /*0x644307*/
  v16 = 1; /*0x64430c*/
  if ( v13 ) /*0x644311*/
  {
    if ( *(_BYTE *)(v13 + 0x20) == 4 ) /*0x644317*/
    {
      v15 = 0; /*0x644319*/
    }
    else
    {
      v14 = *(_DWORD *)(v13 + 0x1C); /*0x644320*/
      v15 = (v14 & 0x100000) == 0; /*0x64432d*/
      if ( (v14 & 0x200000) == 0 ) /*0x644338*/
        goto LABEL_6; /*0x644338*/
    }
    v16 = 0; /*0x64433a*/
  }
LABEL_6:
  if ( v10 ) /*0x644341*/
  {
    sub_5227A0(v10, a3, a4, a5, a6, v15, v16, 0, 1); /*0x644354*/
  }
  else if ( v12 ) /*0x64435d*/
  {
    sub_51E240(v12, a2, a3, a4, a5, a6, v15, v16, 1); /*0x64436e*/
  }
  if ( a7 ) /*0x644378*/
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a6, 1); /*0x644387*/
}
