NiObjectNET *__userpurge sub_4AFD80@<eax>(
        _BYTE *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  NiNode *v6; // eax
  NiObjectNET *v7; // ebp
  int (__usercall *v8)@<eax>(_BYTE *@<ecx>, double@<st0>, double@<st1>); // edx
  char *v9; // eax
  BSExtraDataVtbl *v11; // ebx
  int v12; // eax
  TESForm *NthForm; // esi
  int FormCount; // ebx
  void *v15; // ebp
  float *v16; // eax
  int *v17; // eax
  int *v18; // esi
  TESObjectCELL *ParentCell; // [esp+8h] [ebp-48h]
  int WorldSpace; // [esp+Ch] [ebp-44h]
  float v22; // [esp+10h] [ebp-40h]
  int v23; // [esp+14h] [ebp-3Ch]
  UInt8 *p_type; // [esp+14h] [ebp-3Ch]
  NiObjectNET *v25; // [esp+28h] [ebp-28h]
  char v26; // [esp+2Ch] [ebp-24h]
  TESContainer v28; // [esp+34h] [ebp-1Ch] BYREF
  int v29; // [esp+4Ch] [ebp-4h]
  TESChildCELL *i; // [esp+54h] [ebp+4h]

  v6 = (NiNode *)FormHeapAlloc(0xDCu);
  v29 = 0;
  if ( v6 )
  {
    v7 = (NiObjectNET *)NiNode::NiNode(v6, 0);
    v25 = v7;
  }
  else
  {
    v25 = 0;
    v7 = 0;
  }
  v8 = *(int (__usercall **)@<eax>(_BYTE *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0xD4);
  v29 = 0xFFFFFFFF;
  v9 = (char *)v8(a1, a4, a3);
  NiObjectNET_SetName(v7, v9);
  if ( !sub_4D7A50(a5) && (a5->member.super.flags & 0x2000) == 0 && !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    v26 = 0;
    TESContainer_constr(&v28);
    v29 = 1;
    v11 = sub_420760(&a5->member.baseExtraList);
    v12 = (int)v11 + (unsigned __int16)Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, v23);
    if ( v12 < 1 )
      v12 = 1;
    p_type = &v28.type;
    TESLeveledList_CalcLeveledForm(a1 + 0x24, v12, 1);
    NthForm = (TESForm *)TESContainer_GetNthForm(&v28, 0);
    FormCount = (unsigned __int16)TESContainer_GetFormCount(&v28, NthForm);
    for ( i = 0; NthForm; FormCount = (unsigned __int16)TESContainer_GetFormCount(&v28, NthForm) )
    {
      if ( !(_WORD)FormCount )
        break;
      v15 = OblivionDynamicCast(
              NthForm,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
              &TESActorBase `RTTI Type Descriptor',
              0);
      if ( v15 )
      {
        do
        {
          WorldSpace = TESObjectREFR_GetWorldSpace(a5);
          ParentCell = TESObjectREFR_GetParentCell(a5);
          v16 = a5->vtbl->GetPos(a5);
          TESDataHandler_PlaceObjectRef(a2, a3, (int)v15, (int)v16, (int)&a5->member.rot, ParentCell, WorldSpace, 0);
          v18 = v17;
          if ( v17 )
          {
            v22 = ((double (__thiscall *)(TESObjectREFR *, UInt8 *))a5->vtbl->GetScale)(a5, p_type);
            sub_4DB520(v22);
            (*(void (__thiscall **)(int *, _DWORD))(*v18 + 0x12C))(v18, *((_DWORD *)a1 + 0x10));
            sub_4D7A90(v18, 1);
            i = (TESChildCELL *)((char *)i + 1);
            v26 = 1;
          }
          FormCount += 0xFFFF;
        }
        while ( (_WORD)FormCount );
      }
      TESContainer_RemoveNthEntry((char *)&v28, 0);
      NthForm = (TESForm *)TESContainer_GetNthForm(&v28, 0);
      v7 = v25;
    }
    v29 = 0xFFFFFFFF;
    TESContainer_destr(&v28);
    sub_4D7A90((int *)a5, v26);
  }
  return v7;
}
