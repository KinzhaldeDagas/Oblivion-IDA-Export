bool __usercall sub_5011F0@<al>(
        int edi0@<edi>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        int a8,
        UInt32 *a3)
{
  bool result; // al
  _BYTE *v10; // eax
  void **v11; // eax
  char *Name; // eax
  int v13; // eax
  bool v14; // zf
  const char *v15; // eax
  const char *v16; // [esp-8h] [ebp-Ch]
  UInt16 v17[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v17 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v17);
  if ( result )
  {
    v10 = *(_BYTE **)v17;
    if ( *(_DWORD *)v17
      || (v10 = OblivionDynamicCast(
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0),
          (*(_DWORD *)v17 = v10) != 0) )
    {
      v10[0x78] = v10[0x78] == 0;
      if ( IsConsoleMode )
      {
        v11 = (void **)&aOn_0;
        if ( !*(_BYTE *)(*(_DWORD *)v17 + 0x78) )
          v11 = &aOff;
        v16 = (const char *)v11;
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)v17);
        Interface_ConsolePrint("%s processing is  %s", Name, v16);
        return 1;
      }
    }
    else
    {
      v13 = byte_B3BD98 == 0;
      v14 = IsConsoleMode == 0;
      byte_B3BD98 = v13;
      if ( !v14 )
      {
        v14 = (_BYTE)v13 == 0;
        v15 = (const char *)&aOn_0;
        if ( v14 )
          v15 = (const char *)&aOff;
        Interface_ConsolePrint("All AI Processing is  %s", v15);
        LOBYTE(v13) = byte_B3BD98;
      }
      if ( !(_BYTE)v13 )
        sub_675880((int)&ActorProcessManager_ptr, edi0);
    }
    return 1;
  }
  return result;
}
