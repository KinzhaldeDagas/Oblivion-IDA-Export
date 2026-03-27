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

  v9 = a6->vtbl->GetBaseForm(a6);
  v10 = (BSExtraDataVtbl *)OblivionDynamicCast(
                             v9,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESNPC `RTTI Type Descriptor',
                             0);
  v11 = a6->vtbl->GetBaseForm(a6);
  v12 = (BSExtraDataVtbl *)OblivionDynamicCast(
                             v11,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESCreature `RTTI Type Descriptor',
                             0);
  v13 = a1[2];
  v15 = 1;
  v16 = 1;
  if ( v13 )
  {
    if ( *(_BYTE *)(v13 + 0x20) == 4 )
    {
      v15 = 0;
    }
    else
    {
      v14 = *(_DWORD *)(v13 + 0x1C);
      v15 = (v14 & 0x100000) == 0;
      if ( (v14 & 0x200000) == 0 )
        goto LABEL_6;
    }
    v16 = 0;
  }
LABEL_6:
  if ( v10 )
  {
    sub_5227A0(v10, a3, a4, a5, a6, v15, v16, 0, 1);
  }
  else if ( v12 )
  {
    sub_51E240(v12, a2, a3, a4, a5, a6, v15, v16, 1);
  }
  if ( a7 )
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a6, 1);
}
