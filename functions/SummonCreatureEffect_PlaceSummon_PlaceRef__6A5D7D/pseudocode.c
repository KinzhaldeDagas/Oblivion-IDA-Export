void __userpurge SummonCreatureEffect_PlaceSummon_::PlaceRef(
        TESForm *a1@<ebx>,
        TESObjectREFR *a2@<ebp>,
        float *a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7)
{
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectREFR *v8; // eax
  TESObjectREFR *v9; // ebx
  float v10; // [esp-Ch] [ebp-Ch]
  TESWorldSpace *WorldSpace; // [esp-8h] [ebp-8h]
  float v12; // [esp-8h] [ebp-8h]
  float v13; // [esp-4h] [ebp-4h]

  WorldSpace = TESObjectREFR_GetWorldSpace(a2); /*0x6a5d89*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x6a5d8c*/
  TESDataHandler_PlaceObjectRef(a4, a5, a6, a1, (int)(a3 + 0x12), (int)(a3 + 0x15), DwordAtOffset40, WorldSpace, 0); /*0x6a5d9e*/
  v9 = v8; /*0x6a5da3*/
  if ( !v8 ) /*0x6a5da7*/
    goto LABEL_4; /*0x6a5da7*/
  if ( v8->vtbl->IsActor(v8) ) /*0x6a5db7*/
  {
    v10 = a3[0x12]; /*0x6a5dc7*/
    v12 = a3[0x13]; /*0x6a5dcc*/
    v13 = a3[0x14]; /*0x6a5dcf*/
    *((_DWORD *)a3 + 0xF) = v9; /*0x6a5dd4*/
    TESObjectREFR_SetPosition(v9, v10, v12, v13); /*0x6a5dd7*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)a3 + 0xF) + 0x178))(*((_DWORD *)a3 + 0xF), 0); /*0x6a5de9*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)a3 + 0xF) + 0x1C4))(*((_DWORD *)a3 + 0xF)); /*0x6a5df6*/
    CommandEffect_MakeActorLoyal__(*((Actor **)a3 + 0xF), (PlayerCharacter *)a2); /*0x6a5dfd*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)a3 + 0xF) + 0x58) + 0x4E8))( /*0x6a5e15*/
      *(_DWORD *)(*((_DWORD *)a3 + 0xF) + 0x58),
      1);
LABEL_4:
    SummonCreatureEffect_PlaceSummon_::Done(a7); /*0x6a5e17*/
    return; /*0x6a5e17*/
  }
  SummonCreatureEffect_PlaceSummon_::Error_BadPlacedRef((TESForm *)v9, a2, a7); /*0x6a5dbb*/
}
