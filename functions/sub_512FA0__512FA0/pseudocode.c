bool __cdecl sub_512FA0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // edi
  bool result; // al
  unsigned int v10; // eax
  LONG v11; // eax
  char *Name; // eax
  UInt16 v13[2]; // [esp+4h] [ebp-8h] BYREF
  float v14; // [esp+8h] [ebp-4h] BYREF

  v14 = kTerrainLODQuadRayDirectionZ; /*0x512fae*/
  v8 = arg8; /*0x512fb2*/
  *(_DWORD *)v13 = 0; /*0x512fdb*/
  result = Script_ExtractArgs(a1, a2, a3, arg8, a4, a5, l, v13, &v14); /*0x512fe3*/
  if ( result ) /*0x512fed*/
  {
    if ( !arg8 ) /*0x512ff6*/
      v8 = (TESObjectREFR *)reference; /*0x512ff8*/
    if ( *(_DWORD *)v13 ) /*0x513004*/
    {
      LOWORD(v10) = *(_WORD *)(*(_DWORD *)v13 + 0x20); /*0x513006*/
      if ( (_WORD)v10 == 0xFFFF ) /*0x51300e*/
        v10 = strlen(*(const char **)(*(_DWORD *)v13 + 0x1C)); /*0x513014*/
      else
        v10 = (unsigned __int16)v10; /*0x513025*/
      if ( v10 ) /*0x51302a*/
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v13 + 0x18) + 0x14))(*(_DWORD *)v13 + 0x18); /*0x513034*/
        sub_678F50((int *)&qword_B3BB2C[0x75], (int)v8, v11); /*0x51303d*/
      }
    }
    if ( MEMORY[0xB361AC] ) /*0x513042*/
    {
      if ( TESObjectREFR_GetName(v8) ) /*0x51304d*/
      {
        Name = TESObjectREFR_GetName(v8); /*0x513058*/
        Interface_ConsolePrint("Visual effect has been removed from %s", Name); /*0x513063*/
        return 1; /*0x513071*/
      }
      Interface_ConsolePrint("Visual effect has been removed from reference"); /*0x513077*/
    }
    return 1; /*0x51307f*/
  }
  return result; /*0x512fef*/
}
