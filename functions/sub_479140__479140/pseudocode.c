char __cdecl sub_479140(_DWORD *a1, _DWORD *a2, NiObjectNET *a3, int a4, int a5)
{
  NiObject *ExtraData; // eax
  NiObject *v6; // eax
  NiObject *v7; // edi
  int v8; // eax
  int v9; // esi
  PlayerCharacter *v10; // eax
  PlayerCharacter *v11; // esi
  NiAVObject *v13; // edi

  if ( a3 && (ExtraData = (NiObject *)NiObjectNET_GetExtraData(a3, (const char *)&off_A3CEAC)) != 0
    || (ExtraData = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)a2, (const char *)&off_A3CEAC)) != 0 )
  {
    v6 = NiRTTI_Cast((BSStringT *)dword_B3FCC0, ExtraData);
    v7 = v6;
    if ( v6 )
    {
      if ( a5 == 7 )
        *(_BYTE *)(v6[1].members.m_uiRefCount + 6) = 0x4C;
      v8 = NiObjectNET_LookupObjectByName(a1, (char *)v6[1].members.m_uiRefCount);
      v9 = v8;
      if ( a5 == 7 )
        *(_BYTE *)(v7[1].members.m_uiRefCount + 6) = 0x52;
      if ( v8 )
      {
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v8 + 0x84))(v8, a2, 1);
        v13 = (NiAVObject *)NiObjectNET_LookupObjectByName(a2, off_A3CE0C);
        if ( v13 )
        {
          (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v9 + 0x84))(v9, v13, 1);
          sub_897A90(v9, 1);
          NiAVObject_InitializePropertyState(v13);
          NiNode_UpdateDynamicEffectState((NiNode *)v13);
          sub_4784A0((_WORD *)a2 + 0x56);
          sub_477F90((int)(a2 + 0x2B));
        }
        return sub_88D000(a2, 1, 1);
      }
      else
      {
        v10 = sub_4DC270((int)a1);
        v11 = v10;
        if ( v10
          && v10->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v10)
          && v11->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v11)->member.type == kFormType_Creature )
        {
          sub_480770((int)a2);
          return sub_88D000(a2, 1, 1);
        }
        else
        {
          PrintError(
            "Could not find parent node '%s' for object '%s'.",
            (const char *)v7[1].members.m_uiRefCount,
            (const char *)a2[2]);
          return sub_88D000(a2, 1, 1);
        }
      }
    }
    else
    {
      PrintError("Extra data 'Prn' on '%s' is not an NiStringExtraData.", (const char *)a2[2]);
      return sub_88D000(a2, 1, 1);
    }
  }
  else
  {
    PrintError("Could not find parent node extra data for '%s'.", (const char *)a2[2]);
    return sub_88D000(a2, 1, 1);
  }
}
