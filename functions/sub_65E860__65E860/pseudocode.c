void __thiscall sub_65E860(TESObjectREFR *this)
{
  TESWorldSpace *WorldSpace; // esi
  TESWorldSpaceCellReferenceList *v3; // ebx
  TESObjectREFR *firstReference; // edi
  BSExtraDataVtbl **v5; // esi
  BSExtraDataVtbl *v6; // eax
  TESWorldSpaceCellReferenceList *v7; // [esp+8h] [ebp-8h]
  TESWorldSpace *v8; // [esp+Ch] [ebp-4h]

  WorldSpace = TESObjectREFR_GetWorldSpace(this); /*0x65e86c*/
  v8 = WorldSpace; /*0x65e874*/
  if ( *((TESWorldSpace **)this + 0x1D1) != WorldSpace ) /*0x65e878*/
  {
    sub_65E800(this); /*0x65e87c*/
    if ( WorldSpace ) /*0x65e883*/
    {
      v3 = TESWorldSpace_CollectPersistentCellReferences(WorldSpace); /*0x65e88d*/
      v7 = v3; /*0x65e891*/
      if ( v3 ) /*0x65e895*/
      {
        do /*0x65e8d5*/
        {
          firstReference = v3->firstReference; /*0x65e898*/
          if ( v3->firstReference ) /*0x65e898*/
          {
            v5 = (BSExtraDataVtbl **)FormHeapAlloc(8u); /*0x65e8aa*/
            v6 = sub_4D7730(firstReference); /*0x65e8ac*/
            *v5 = v6; /*0x65e8b3*/
            v5[1] = (BSExtraDataVtbl *)firstReference; /*0x65e8b5*/
            if ( v6 ) /*0x65e8b9*/
              BSSimpleList_PushFront((_DWORD *)this + 0x1CF, (int)v5); /*0x65e8c1*/
            else
              FormHeapFree((unsigned int)v5); /*0x65e8c8*/
          }
          v3 = (TESWorldSpaceCellReferenceList *)v3->overflowNodes; /*0x65e8d0*/
        }
        while ( v3 ); /*0x65e8d5*/
        v3 = v7; /*0x65e8d7*/
        WorldSpace = v8; /*0x65e8db*/
      }
      BSSimpleList_Clear(v3); /*0x65e8e2*/
      FormHeapFree((unsigned int)v3); /*0x65e8e8*/
    }
    *((_DWORD *)this + 0x1D1) = WorldSpace; /*0x65e8f1*/
  }
}
