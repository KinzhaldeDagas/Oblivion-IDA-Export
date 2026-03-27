bool __cdecl sub_507800(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  CHAR **WorldSpace; // eax
  _BYTE *v10; // esi
  float v11; // ecx
  float v12; // eax
  TESObjectREFR *v13; // ecx
  TESObjectCELL *ParentCell; // eax
  _DWORD *v15; // edi
  _DWORD *i; // esi
  BSExtraDataVtbl *v17; // eax
  BSExtraDataVtbl *v18; // eax
  const char *v19; // eax
  char v20; // [esp-8h] [ebp-1Ch]
  char v21; // [esp-8h] [ebp-1Ch]
  UInt16 v22[2]; // [esp+4h] [ebp-10h] BYREF
  float v23[3]; // [esp+8h] [ebp-Ch] BYREF

  *(_DWORD *)v22 = 1;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v22);
  if ( result )
  {
    WorldSpace = (CHAR **)TESObjectREFR_GetWorldSpace((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    v10 = WorldSpace;
    if ( !WorldSpace || !*sub_4F1A60(WorldSpace) )
    {
      v11 = dword_B3F9B0;
      v12 = *(&Vector3_InitValue_ + 1);
      v23[0] = Vector3_InitValue_;
      v23[2] = v11;
      v13 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      v23[1] = v12;
      ParentCell = TESObjectREFR_GetParentCell(v13);
      v10 = sub_44EE00(ParentCell, v23, 0);
    }
    if ( v10 )
    {
      v15 = sub_4F0620((int)v10);
      for ( i = v15; i; i = (_DWORD *)i[1] )
      {
        if ( !*i )
          break;
        v20 = *(_DWORD *)v22 > 0;
        v17 = sub_4D7730((_BYTE *)*i);
        AddMapMarker(v17, v20);
        v21 = *(_DWORD *)v22 > 0;
        v18 = sub_4D7730((_BYTE *)*i);
        sub_42B350(v18, v21);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*i + 0x40))(*i, 0x400);
      }
      BSSimpleList_Clear(v15);
      FormHeapFree((unsigned int)v15);
    }
    v19 = "shown.";
    if ( *(int *)v22 <= 0 )
      v19 = "hidden.";
    Interface_ConsolePrint("All map markers %s", v19);
    return 1;
  }
  return result;
}
