char __userpurge sub_68ABA0@<al>(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int *v5; // ebx
  int *SpatialContainerAtPosition; // edi
  const TravelPathNode *v7; // ecx
  int *v8; // ebp
  TESObjectREFR *Reference; // eax
  TravelPathNode *v10; // eax
  void *v11; // eax
  int v12; // eax
  int v13; // ebx
  NiPoint3 *Position; // eax
  const char *v15; // eax
  const char *v16; // eax
  int v18; // [esp-4h] [ebp-138h]
  const char *v19; // [esp-4h] [ebp-138h]
  char v20; // [esp+17h] [ebp-11Dh]
  TESObjectREFR *v21; // [esp+18h] [ebp-11Ch]
  char Format[260]; // [esp+20h] [ebp-114h] BYREF
  unsigned int v23; // [esp+130h] [ebp-4h]

  v5 = 0; /*0x68abe2*/
  SpatialContainerAtPosition = a1; /*0x68abe6*/
  v20 = 0; /*0x68abe8*/
  if ( a5 ) /*0x68abed*/
  {
    v7 = (const TravelPathNode *)a1[1]; /*0x68abf3*/
    v8 = SpatialContainerAtPosition + 1; /*0x68abf8*/
    if ( v7 /*0x68ac14*/
      && (Reference = TravelPathNode_GetReference(v7), (v21 = Reference) != 0)
      && TESObjectREFR_GetTeleportData(Reference) )
    {
      (*(void (__thiscall **)(int *))(*SpatialContainerAtPosition + 0x10))(SpatialContainerAtPosition); /*0x68ac28*/
      if ( ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5) ) /*0x68ac34*/
        sub_5F0410(a5, (int)v8); /*0x68ac3c*/
      v10 = (TravelPathNode *)FormHeapAlloc(8u); /*0x68ac43*/
      v23 = 0; /*0x68ac51*/
      if ( v10 ) /*0x68ac58*/
        v5 = (int *)TravelPathNode_Init(v10); /*0x68ac61*/
      v18 = *v8; /*0x68ac66*/
      v23 = 0xFFFFFFFF; /*0x68ac69*/
      sub_68B240(v5, v18); /*0x68ac74*/
      sub_689C10(SpatialContainerAtPosition); /*0x68ac7b*/
      SpatialContainerAtPosition = (int *)TESObjectREFR_GetSpatialContainerAtPosition(a5); /*0x68ac92*/
      if ( ActivateRef(v21, a2, a3, a4, a5, 0, 0, 1) /*0x68acd5*/
        && TESObjectREFR_GetSpatialContainerAtPosition(a5) != (TESForm *)SpatialContainerAtPosition
        || (v11 = OblivionDynamicCast(
                    a5[1].vtbl,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                    &HighProcess `RTTI Type Descriptor',
                    0)) != 0
        && (*(int (__thiscall **)(void *))(*(_DWORD *)v11 + 0x47C))(v11) == 4 )
      {
        v20 = 1; /*0x68ace1*/
        if ( ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5) ) /*0x68ace6*/
        {
          v12 = ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5); /*0x68acf6*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 0x38C))(v12, 0); /*0x68ad04*/
          ((void (__thiscall *)(TESObjectREFR *, _DWORD))a5->vtbl[2].super.Unk_0D)(a5, 0); /*0x68ad12*/
        }
        if ( v5 ) /*0x68ad16*/
        {
          TravelPathNode_FreeOwnedPosition((TravelPathNode *)v5); /*0x68ad1e*/
          FormHeapFree((unsigned int)v5); /*0x68ad24*/
        }
      }
      else
      {
        BSSimpleList_PushFront(v8, (int)v5); /*0x68ad31*/
        sub_5F7CF0((Actor *)a5, v21, 0); /*0x68ad3f*/
      }
    }
    else
    {
      sub_689C10(SpatialContainerAtPosition); /*0x68ad48*/
      if ( SpatialContainerAtPosition[2] || *v8 ) /*0x68ad52*/
      {
        v13 = (*((unsigned __int16 (__thiscall **)(TESObjectREFRVtbl *))a5[1].vtbl->super.super.InitializeComponent /*0x68ad69*/
               + 0xB0))(a5[1].vtbl);
        if ( *v8 ) /*0x68ad64*/
          Position = TravelPathNode_GetPosition((const TravelPathNode *)*v8); /*0x68ad6e*/
        else
          Position = &g_zeroNiPoint3; /*0x68ad75*/
        (*(void (__thiscall **)(int *, TESObjectREFR *, NiPoint3 *, _DWORD))(*SpatialContainerAtPosition + 0x14))( /*0x68ad85*/
          SpatialContainerAtPosition,
          a5,
          Position,
          0);
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))a5->vtbl->Unk_60)(a5, 0); /*0x68ad93*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))a5[1].vtbl->super.super.InitializeComponent + 0xB2))( /*0x68ada1*/
          a5[1].vtbl,
          v13);
      }
      v20 = 1; /*0x68ada3*/
    }
  }
  if ( MEMORY[0xB333B4] == (TESChildCELL *)a5 )
  {
    v15 = "SUCCESS"; /*0x68adb5*/
    if ( !v20 ) /*0x68adba*/
      v15 = "FAILED"; /*0x68adbc*/
    v16 = (const char *)((int (__thiscall *)(TESObjectREFR *, const char *))a5->vtbl->super.GetEditorName)(a5, v15); /*0x68adcc*/
    _sprintf((int)SpatialContainerAtPosition, (int)a5, Format, "Actor '%s' MoveToNextLowPathStep: %s.", v16, v19);
    Interface_ConsolePrint(Format); /*0x68ade3*/
  }
  return v20; /*0x68adef*/
}
