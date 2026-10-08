double __usercall Cmd_ShowMap_Execute@<st0>(
        char bp0@<bpl>,
        double result@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        double *a9,
        UInt32 *a3)
{
  BSExtraDataVtbl *v11; // eax
  bool v12; // bl
  BSExtraDataVtbl *v13; // eax
  BSExtraDataVtbl *v14; // eax
  BSExtraDataVtbl *v15; // eax
  UInt16 v16[2]; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)v16 = 0; /*0x50ad33*/
  v17 = 0; /*0x50ad3b*/
  if ( Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v16, &v17) ) /*0x50ad43*/
  {
    if ( *(_DWORD *)v16 ) /*0x50ad5a*/
    {
      if ( sub_4D7730(*(_BYTE **)v16) ) /*0x50ad60*/
      {
        v11 = sub_4D7730(*(_BYTE **)v16); /*0x50ad71*/
        v12 = sub_42B310(v11) == 0; /*0x50ad81*/
        v13 = sub_4D7730(*(_BYTE **)v16); /*0x50ad89*/
        AddMapMarker(v13, 1); /*0x50ad90*/
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)v16 + 0x40))(*(_DWORD *)v16, 0x400); /*0x50ada3*/
        if ( v17 ) /*0x50adaa*/
        {
          v14 = sub_4D7730(*(_BYTE **)v16); /*0x50adb0*/
          if ( !sub_42B340(v14) ) /*0x50adb7*/
            v12 = 1; /*0x50adc0*/
          v15 = sub_4D7730(*(_BYTE **)v16); /*0x50adc8*/
          sub_42B350(v15, 1); /*0x50adcf*/
        }
        if ( v12 ) /*0x50add6*/
          QueueUIMessage( /*0x50adec*/
            bp0,
            result,
            kTerrainLODQuadRayDirectionZ,
            stru_B394E0.value,
            kTerrainLODQuadRayDirectionZ,
            0,
            0);
      }
    }
    *a9 = 1.0; /*0x50adfa*/
  }
  return result; /*0x50ad4f*/
}
