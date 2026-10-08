// Applies the CombatController-selected poison item at +0xA4 to the equipped weapon when it has neither poison nor enchantment, removes the consumed poison item, and clears the selection when empty. Private EBP-carried state is preserved in the type.
void __usercall sub_616CA0(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _DWORD *v6; // eax
  int v7; // eax
  ExtraDataList ***v8; // ebx
  int v9; // edi
  _DWORD *v10; // ecx
  int v11; // edi
  CHAR *v12; // eax
  char *Name; // eax
  int v14; // eax
  BSExtraDataVtbl *v15; // eax
  const char *v16; // [esp-Ch] [ebp-10h]

  v6 = *(_DWORD **)(a1 + 0xA4); /*0x616ca3*/
  if ( v6 ) /*0x616cab*/
  {
    if ( *v6 ) /*0x616cb1*/
    {
      v7 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xEC))( /*0x616ccc*/
             *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
             1);
      v8 = (ExtraDataList ***)v7; /*0x616cce*/
      if ( v7 ) /*0x616cd2*/
        v9 = *(_DWORD *)(v7 + 8); /*0x616cd4*/
      else
        v9 = 0; /*0x616cd9*/
      if ( v9 ) /*0x616cdd*/
      {
        if ( !EquippedEntryData_GetPoison((ExtraDataList ***)v7) && !*(_DWORD *)(v9 + 0x64) ) /*0x616cf2*/
        {
          v10 = *(_DWORD **)(a1 + 0xA4); /*0x616cfb*/
          if ( *v10 ) /*0x616d01*/
            v11 = *v10 - 0x24; /*0x616d07*/
          else
            v11 = 0; /*0x616d0c*/
          if ( unk_B3B908 ) /*0x616d0e*/
          {
            v12 = *(CHAR **)(v11 + 0x28); /*0x616d17*/
            if ( !v12 ) /*0x616d1c*/
              v12 = EmptyString; /*0x616d1e*/
            v16 = v12; /*0x616d26*/
            Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x616d27*/
            Interface_ConsolePrint("%.20s poisons current weapon with %s!", Name, v16); /*0x616d32*/
          }
          v14 = **(_DWORD **)(a1 + 0xA4); /*0x616d40*/
          if ( v14 ) /*0x616d44*/
            v15 = (BSExtraDataVtbl *)(v14 - 0x24); /*0x616d46*/
          else
            v15 = 0; /*0x616d4b*/
          sub_484E20(v8, a2, a3, a4, a5, v15); /*0x616d50*/
          BSSimpleList_PopHeadWithoutPayloadFree(*(_DWORD **)(a1 + 0xA4)); /*0x616d5b*/
          (*(void (__thiscall **)(_DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x100))( /*0x616d7e*/
            *(_DWORD *)(a1 + 0x3C),
            v11,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            1,
            0);
          if ( !**(_DWORD **)(a1 + 0xA4) ) /*0x616d86*/
          {
            FormHeapFree(*(_DWORD *)(a1 + 0xA4)); /*0x616d8c*/
            *(_DWORD *)(a1 + 0xA4) = 0; /*0x616d94*/
          }
        }
      }
    }
  }
}
