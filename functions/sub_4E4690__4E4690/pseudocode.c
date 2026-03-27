void __usercall sub_4E4690(
        int a1@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>)
{
  int ProcessLevel; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // ecx
  int v12; // esi
  _BYTE *v13; // eax
  void (__thiscall ***v14)(_DWORD, int); // ecx
  double v15; // st7
  int v16; // edx
  double v17; // st7
  BSExtraData *i; // esi
  int vtbl; // ebx
  BSExtraData *v20; // ebx
  BSExtraDataVtbl *v21; // esi
  BSExtraDataVtbl **v22; // eax
  unsigned int v23; // [esp-Ch] [ebp-10h]

  if ( (*(_DWORD *)(a1 + 8) & 0x800) == 0 )
  {
    TESOjectREFR_stuffsWithPArentCell((TESChildCELL *)a1);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x90))(a1, 1, a4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x40))(a1, 0x40000000);
    TESForm_SetEnabled_((TESForm *)a1, 1);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x188))(a1) )
    {
      if ( *(_DWORD *)(a1 + 0x58) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
        {
          if ( (Creature *)a1 == TESDataHandler_g_PlayerRef->lastRiddenHorse )
            TESDataHandler_g_PlayerRef->lastRiddenHorse = 0;
          sub_5E4B00((void *)a1);
          MagicTarget_RemoveAllEffects((void *)(a1 + 0x68));
          if ( dword_B3B7D0 > 0 )
            sub_607B90((_DWORD *)a1, 1);
        }
        ProcessLevel = Actor::GetProcessLevel((Actor *)a1);
        sub_674550(a3, a5, a6, a7, a1, ProcessLevel);
        v9 = *(_DWORD *)(a1 + 0x58);
        if ( v9 )
        {
          v10 = *(char **)(v9 + 8);
          if ( v10 )
          {
            if ( sub_567770(v10) )
            {
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
                sub_5EAE70((_DWORD **)a1, 0, a1, a2);
            }
          }
        }
        v11 = *(_DWORD *)(a1 + 0x58);
        if ( v11 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x378))(v11) )
          {
            v12 = *(_DWORD *)(a1 + 0x58);
            v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x37C))(v12);
            v13 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x378))(v12);
            sub_4D7300(v13, v23, 0);
          }
          v14 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58);
          if ( v14 )
            (**v14)(v14, 1);
          *(_DWORD *)(a1 + 0x58) = 0;
        }
      }
    }
    v15 = ((double (__thiscall *)(int, _DWORD, char))*(_DWORD *)(*(_DWORD *)a1 + 0x150))(a1, 0, a3);
    v17 = sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v15, v16, (PlayerCharacter *)a1);
    for ( i = sub_4203A0((ExtraDataList *)(a1 + 0x44)); i; i = *(BSExtraData **)&i->members.type )
    {
      if ( !*(_DWORD *)&i->members.type && !i->vtbl )
        break;
      vtbl = (int)i->vtbl;
      if ( sub_420340((ExtraDataList *)&i->vtbl[8].CompareTo) )
        sub_4DD850(vtbl, vtbl, a1 + 0x44, a5, a6, v17);
      else
        v17 = sub_4E4690(vtbl);
    }
    v20 = sub_420480((ExtraDataList *)(a1 + 0x44));
    if ( v20 )
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v20) )
      {
        v21 = v20->vtbl;
        sub_4203E0((ExtraDataList *)&v20->vtbl[8].CompareTo, 0);
        (*((void (__thiscall **)(BSExtraDataVtbl *, int))v21->Destructor + 0x23))(v21, 1);
        (*((void (__thiscall **)(BSExtraDataVtbl *, int))v21->Destructor + 0x24))(v21, 1);
        (*((void (__thiscall **)(BSExtraDataVtbl *, _DWORD))v21->Destructor + 0x54))(v21, 0);
        v22 = *(BSExtraDataVtbl ***)&v20->members.type;
        if ( v22 )
        {
          *(_DWORD *)&v20->members.type = v22[1];
          v20->vtbl = *v22;
          FormHeapFree((unsigned int)v22);
        }
        else
        {
          v20->vtbl = 0;
        }
      }
    }
    sub_4D9310((char *)a1, 0);
  }
}
