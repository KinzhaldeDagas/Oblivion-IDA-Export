bool __usercall sub_50C430@<al>(
        char bp0@<bpl>,
        int a2@<edi>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  bool result; // al
  char v11; // al
  char v12; // bl
  int v13; // eax
  TESObjectREFRVtbl *vtbl; // edx
  char v15; // al
  double v16; // [esp+4h] [ebp-10h]
  UInt16 v17[2]; // [esp+10h] [ebp-4h] BYREF

  *(_DWORD *)v17 = 0; /*0x50c45c*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v17); /*0x50c464*/
  if ( result ) /*0x50c46e*/
  {
    if ( a4 ) /*0x50c477*/
    {
      sub_4D8260((int)a4, 8); /*0x50c481*/
      if ( *(_DWORD *)v17 ) /*0x50c493*/
        TESObjectREFR_SetActionFlagBits(a4, 8); /*0x50c495*/
      else
        TESObjectREFR_ClearActionFlagBits(a4, 8); /*0x50c49c*/
      sub_4D8260((int)a4, 8); /*0x50c4a7*/
      v12 = v11; /*0x50c4ae*/
      ((void (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl->super.ClearModified)(a4, 0x1000000, a2); /*0x50c4ba*/
      ExtraDataList_ResetSavedAttachedAnimationData(&a4->member.baseExtraList, bp0); /*0x50c4c1*/
      ExtraDataList_RemoveLastFinishedSequence(&a4->member.baseExtraList.vtbl); /*0x50c4c8*/
      if ( HIBYTE(v17[1]) != v12 ) /*0x50c4d1*/
      {
        v13 = sub_4533F0(g_TESSaveLoadGame, (int)a4, 0); /*0x50c4dc*/
        vtbl = a4->vtbl; /*0x50c4e6*/
        if ( (v13 & 0x40000) != 0 ) /*0x50c4ef*/
          ((void (__stdcall *)(int))vtbl->super.ClearModified)(0x40000); /*0x50c4f4*/
        else
          ((void (__stdcall *)(int))vtbl->super.MarkAsModified)(0x40000); /*0x50c4f9*/
      }
      a4->vtbl->super.ClearModified((TESForm *)a4, 0x80000); /*0x50c507*/
      sub_4D6E60((char *)a4, 0); /*0x50c50d*/
      if ( v15 ) /*0x50c514*/
      {
        if ( !v12 ) /*0x50c518*/
          goto LABEL_14; /*0x50c518*/
      }
      else if ( v12 ) /*0x50c51e*/
      {
LABEL_14:
        a4->vtbl->super.MarkAsModified((TESForm *)a4, 0x80000); /*0x50c520*/
      }
    }
    if ( MEMORY[0xB361AC] ) /*0x50c530*/
    {
      LODWORD(v16) = *(_DWORD *)v17; /*0x50c53d*/
      Interface_ConsolePrint("SetDoorDefaultOpen >> %0.2f", v16); /*0x50c543*/
    }
    return 1; /*0x50c54b*/
  }
  return result; /*0x50c470*/
}
