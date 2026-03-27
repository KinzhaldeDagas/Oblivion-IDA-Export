bool __cdecl sub_50A8A0(
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
  const char *v9; // esi
  char v10; // bl
  const char *v11; // eax
  UInt16 v12[2]; // [esp+0h] [ebp-8h] BYREF
  int v13; // [esp+4h] [ebp-4h]

  *(_DWORD *)v12 = 0xFFFFFFFF;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12);
  if ( result )
  {
    if ( *(_DWORD *)v12 == 0xFFFFFFFF )
      JUMPOUT(0x50A97E);
    switch ( *(_DWORD *)v12 )
    {
      case 0:
        v9 = "Actor";
        break;
      case 1:
        v9 = "Marker";
        break;
      case 2:
        v9 = "Land Quad";
        break;
      case 3:
        v9 = "Water Quad";
        break;
      case 4:
        v9 = "Static Quad";
        break;
      case 5:
        v9 = "Active Quad";
        break;
      default:
        JUMPOUT(0x50A970);
    }
    LOBYTE(v13) = ((1 << SLOBYTE(v12[0])) & dword_B35C00) != 0;
    v10 = v13;
    sub_442A30((TESObjectCELL **)TES, *(unsigned int *)v12, v13, 0);
    v11 = "DISPLAYED";
    if ( !v10 )
      v11 = "CULLED";
    Interface_ConsolePrint("Cell %s nodes now %s.", v9, v11);
    return 1;
  }
  return result;
}
