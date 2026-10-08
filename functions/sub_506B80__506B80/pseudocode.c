bool __cdecl sub_506B80(
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
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  bool v13; // zf
  const char *v14; // ecx
  const char *v15; // eax
  UInt16 v16[2]; // [esp+0h] [ebp-20h] BYREF
  _DWORD v17[7]; // [esp+4h] [ebp-1Ch]

  *(_DWORD *)v16 = 0; /*0x506baa*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v16); /*0x506bb2*/
  if ( result )
  {
    v9 = *(_DWORD *)v16; /*0x506bc2*/
    if ( *(_DWORD *)v16 > 6u )
    {
      if ( MEMORY[0xB361AC] ) /*0x506c59*/
        Interface_ConsolePrint("Shadow object type must be [0,6]"); /*0x506c67*/
    }
    else
    {
      v10 = g_ShadowCasterCategoryMask;         // ToggleCastShadows console command updates one category bit in the native caster-category mask. /*0x506bce*/
      v11 = 1 << SLOBYTE(v16[0]); /*0x506bd9*/
      if ( ((1 << SLOBYTE(v16[0])) & g_ShadowCasterCategoryMask) != 0 ) /*0x506bdd*/
        v12 = ~v11 & v10; /*0x506be4*/
      else
        v12 = v11 | v10; /*0x506be9*/
      v13 = MEMORY[0xB361AC] == 0; /*0x506beb*/
      g_ShadowCasterCategoryMask = v12; /*0x506bf2*/
      if ( !v13 )
      {
        v17[0] = "Undetermined"; /*0x506bfa*/
        v17[1] = "Architecture"; /*0x506c02*/
        v17[2] = "Furniture"; /*0x506c0a*/
        v17[3] = "Actors"; /*0x506c12*/
        v17[4] = "Items"; /*0x506c1a*/
        v17[5] = "Misc"; /*0x506c22*/
        v17[6] = "Other"; /*0x506c2a*/
        v14 = (const char *)v17[v9]; /*0x506c32*/
        v13 = (v11 & v12) == 0; /*0x506c36*/
        v15 = &aOn_0; /*0x506c38*/
        if ( v13 ) /*0x506c3d*/
          v15 = (const char *)&aOff; /*0x506c3f*/
        Interface_ConsolePrint("Shadows %s: %s", v14, v15);
        return 1; /*0x506c58*/
      }
    }
    return 1; /*0x506c6f*/
  }
  return result; /*0x506bbe*/
}
