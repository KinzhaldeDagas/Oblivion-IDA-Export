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

  *(_DWORD *)v17 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v17);
  if ( result )
  {
    if ( a4 )
    {
      sub_4D8260((int)a4, 8);
      if ( *(_DWORD *)v17 )
        sub_4D8270(a4, 8);
      else
        sub_4D82E0(a4, 8);
      sub_4D8260((int)a4, 8);
      v12 = v11;
      ((void (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl->super.ClearModified)(a4, 0x1000000, a2);
      sub_4212F0(&a4->member.baseExtraList, bp0);
      sub_420FF0(&a4->member.baseExtraList.vtbl);
      if ( HIBYTE(v17[1]) != v12 )
      {
        v13 = sub_4533F0(SaveLoad_CurrentSavegame, (int)a4, 0);
        vtbl = a4->vtbl;
        if ( (v13 & 0x40000) != 0 )
          ((void (__stdcall *)(int))vtbl->super.ClearModified)(0x40000);
        else
          ((void (__stdcall *)(int))vtbl->super.MarkAsModified)(0x40000);
      }
      a4->vtbl->super.ClearModified((TESForm *)a4, 0x80000);
      sub_4D6E60((char *)a4, 0);
      if ( v15 )
      {
        if ( !v12 )
          goto LABEL_14;
      }
      else if ( v12 )
      {
LABEL_14:
        a4->vtbl->super.MarkAsModified((TESForm *)a4, 0x80000);
      }
    }
    if ( IsConsoleMode )
    {
      LODWORD(v16) = *(_DWORD *)v17;
      Interface_ConsolePrint("SetDoorDefaultOpen >> %0.2f", v16);
    }
    return 1;
  }
  return result;
}
