NiObjectNET *__userpurge sub_4AFD80@<eax>(
        _BYTE *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  BaseFormComponentVtbl *v6; // eax
  NiObjectNET *v7; // ebp
  int (__usercall *v8)@<eax>(_BYTE *@<ecx>, double@<st0>, double@<st1>, double@<st2>); // edx
  char *v9; // eax
  BSExtraDataVtbl *LevCreaModifier; // ebx
  int v11; // eax
  TESForm *NthForm; // esi
  int FormCount; // ebx
  TESForm *v14; // ebp
  float *v15; // eax
  MobileObject *v16; // eax
  MobileObject *v17; // esi
  TESObjectCELL *DwordAtOffset40; // [esp+4h] [ebp-4Ch]
  TESWorldSpace *WorldSpace; // [esp+8h] [ebp-48h]
  float v21; // [esp+Ch] [ebp-44h]
  TESContainer_Entry *p_list; // [esp+10h] [ebp-40h]
  NiObjectNET *v23; // [esp+20h] [ebp-30h]
  char v24; // [esp+24h] [ebp-2Ch]
  TESContainer v25; // [esp+2Ch] [ebp-24h] BYREF
  unsigned int v26; // [esp+44h] [ebp-Ch]
  int v27; // [esp+4Ch] [ebp-4h]
  _UNKNOWN *i; // [esp+50h] [ebp+0h]

  *(_DWORD *)&v25.type = a1; /*0x4afda9*/
  v6 = (BaseFormComponentVtbl *)FormHeapAlloc(0xDCu); /*0x4afdb2*/
  v25.vtbl = v6; /*0x4afdba*/
  v27 = 0; /*0x4afdc2*/
  if ( v6 ) /*0x4afdc6*/
    v7 = (NiObjectNET *)NiNode::NiNode((NiNode *)v6, 0); /*0x4afdd0*/
  else
    v7 = 0; /*0x4afddc*/
  v8 = *(int (__usercall **)@<eax>(_BYTE *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0xD4); /*0x4afde0*/
  v27 = 0xFFFFFFFF; /*0x4afde8*/
  v9 = (char *)v8(a1, a4, a3, a2); /*0x4afdf0*/
  NiObjectNET_SetName(v7, v9); /*0x4afdf5*/
  if ( !sub_4D7A50(a5) && (a5->member.super.flags & 0x2000) == 0 && !sub_45A500(g_TESSaveLoadGame) ) /*0x4afe21*/
  {
    LOBYTE(v25.vtbl) = 0; /*0x4afe32*/
    TESContainer_constr((TESContainer *)&v25.list); /*0x4afe36*/
    v27 = 1; /*0x4afe3e*/
    LevCreaModifier = ExtraDataList_GetLevCreaModifier(&a5->member.baseExtraList); /*0x4afe51*/
    v11 = (int)LevCreaModifier + (unsigned __int16)Actor_GetLevel((Actor *)reference); /*0x4afe5b*/
    if ( v11 < 1 ) /*0x4afe60*/
      v11 = 1; /*0x4afe62*/
    p_list = &v25.list; /*0x4afe6b*/
    TESLeveledList_CalcLeveledForm(a1 + 0x24, v11, 1); /*0x4afe72*/
    NthForm = (TESForm *)TESContainer_GetNthForm(&v25.type, 0); /*0x4afe82*/
    FormCount = (unsigned __int16)TESContainer_GetFormCount((TESContainer *)&v25.type, NthForm); /*0x4afe90*/
    for ( i = 0; NthForm; FormCount = (unsigned __int16)TESContainer_GetFormCount(&v25, NthForm) ) /*0x4afe9b*/
    {
      if ( !(_WORD)FormCount ) /*0x4afea4*/
        break; /*0x4afea4*/
      v14 = (TESForm *)OblivionDynamicCast( /*0x4afec9*/
                         NthForm,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                         &TESActorBase `RTTI Type Descriptor',
                         0);
      if ( v14 ) /*0x4afed0*/
      {
        do /*0x4aff57*/
        {
          WorldSpace = TESObjectREFR_GetWorldSpace(a5); /*0x4afee4*/
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x4afeee*/
          v15 = a5->vtbl->GetPos(a5); /*0x4afefb*/
          TESDataHandler_PlaceObjectRef(a2, a3, a4, v14, (int)v15, (int)&a5->member.rot, DwordAtOffset40, WorldSpace, 0); /*0x4aff05*/
          v17 = v16; /*0x4aff0a*/
          if ( v16 ) /*0x4aff0e*/
          {
            a4 = ((double (__thiscall *)(TESObjectREFR *, TESContainer_Entry *))a5->vtbl->GetScale)(a5, p_list); /*0x4aff1a*/
            v21 = a4; /*0x4aff1f*/
            sub_4DB520(v17, v21); /*0x4aff22*/
            v17->vtbl->super.SetTemplateForm((TESObjectREFR *)v17, (TESObjectREFR *)v25.vtbl[4].InitializeComponent); /*0x4aff39*/
            sub_4D7A90((int *)v17, 1); /*0x4aff3f*/
            ++v27; /*0x4aff44*/
            v24 = 1; /*0x4aff49*/
          }
          FormCount += 0xFFFF; /*0x4aff4e*/
        }
        while ( (_WORD)FormCount ); /*0x4aff57*/
      }
      TESContainer_RemoveNthEntry((char *)&v25, 0); /*0x4aff5f*/
      NthForm = (TESForm *)TESContainer_GetNthForm(&v25, 0); /*0x4aff6f*/
      v7 = v23; /*0x4aff7d*/
    }
    v26 = 0xFFFFFFFF; /*0x4aff8e*/
    TESContainer_destr(&v25); /*0x4aff96*/
    sub_4D7A90((int *)a5, v24); /*0x4affa2*/
  }
  return v7; /*0x4affa9*/
}
