bool __usercall Cmd_ShowMap_Execute@<al>(
        char bp0@<bpl>,
        double a2@<st2>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        double *a9,
        UInt32 *a3)
{
  bool result; // al
  BSExtraDataVtbl *v11; // eax
  bool v12; // bl
  BSExtraDataVtbl *v13; // eax
  BSExtraDataVtbl *v14; // eax
  BSExtraDataVtbl *v15; // eax
  UInt16 v16[2]; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)v16 = 0;
  v17 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v16, &v17);
  if ( result )
  {
    if ( *(_DWORD *)v16 )
    {
      if ( sub_4D7730(*(_BYTE **)v16) )
      {
        v11 = sub_4D7730(*(_BYTE **)v16);
        v12 = sub_42B310(v11) == 0;
        v13 = sub_4D7730(*(_BYTE **)v16);
        AddMapMarker(v13, 1);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)v16 + 0x40))(*(_DWORD *)v16, 0x400);
        if ( v17 )
        {
          v14 = sub_4D7730(*(_BYTE **)v16);
          if ( !sub_42B340(v14) )
            v12 = 1;
          v15 = sub_4D7730(*(_BYTE **)v16);
          sub_42B350(v15, 1);
        }
        if ( v12 )
          QueueUIMessage(bp0, a2, flt_A30634, dword_B394E0, flt_A30634, 0, 0);
      }
    }
    *a9 = 1.0;
    return 1;
  }
  return result;
}
