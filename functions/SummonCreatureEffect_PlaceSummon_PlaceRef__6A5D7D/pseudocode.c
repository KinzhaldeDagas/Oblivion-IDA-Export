int __userpurge SummonCreatureEffect_PlaceSummon_::PlaceRef@<eax>(
        int a1@<ebx>,
        TESObjectREFR *a2@<ebp>,
        float *a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        int a6)
{
  TESObjectCELL *ParentCell; // eax
  TESObjectREFR *v7; // eax
  TESObjectREFR *v8; // ebx
  float v10; // [esp-Ch] [ebp-Ch]
  TESWorldSpace *WorldSpace; // [esp-8h] [ebp-8h]
  float v12; // [esp-8h] [ebp-8h]
  float v13; // [esp-4h] [ebp-4h]

  WorldSpace = TESObjectREFR_GetWorldSpace(a2);
  ParentCell = TESObjectREFR_GetParentCell(a2);
  TESDataHandler_PlaceObjectRef(a4, a5, a1, (int)(a3 + 0x12), (int)(a3 + 0x15), ParentCell, (int)WorldSpace, 0);
  v8 = v7;
  if ( !v7 )
    return SummonCreatureEffect_PlaceSummon_::Done(a6);
  if ( v7->vtbl->IsActor(v7) )
  {
    v10 = a3[0x12];
    v12 = a3[0x13];
    v13 = a3[0x14];
    *((_DWORD *)a3 + 0xF) = v8;
    TESObjectREFR_SetPosition(v8, v10, v12, v13);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)a3 + 0xF) + 0x178))(*((_DWORD *)a3 + 0xF), 0);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)a3 + 0xF) + 0x1C4))(*((_DWORD *)a3 + 0xF));
    CommandEffect_MakeActorLoyal__(*((Actor **)a3 + 0xF), (PlayerCharacter *)a2);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)a3 + 0xF) + 0x58) + 0x4E8))(
      *(_DWORD *)(*((_DWORD *)a3 + 0xF) + 0x58),
      1);
    return SummonCreatureEffect_PlaceSummon_::Done(a6);
  }
  return SummonCreatureEffect_PlaceSummon_::Error_BadPlacedRef((TESForm *)v8, a2, a6);
}
