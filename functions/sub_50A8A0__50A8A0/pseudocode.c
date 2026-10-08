// Oblivion ToggleCellNode console command handler. Parses category 0..5, reports the native category label, and routes to TES__ShowCellNode.
bool __cdecl Script__ToggleCellNode(
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

  *(_DWORD *)v12 = 0xFFFFFFFF; /*0x50a8ca*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12); /*0x50a8d2*/
  if ( result ) /*0x50a8dc*/
  {
    if ( *(_DWORD *)v12 == 0xFFFFFFFF ) /*0x50a8e8*/
      JUMPOUT(0x50A97E); /*0x50a97e*/
    switch ( *(_DWORD *)v12 ) /*0x50a8f4*/
    {
      case 0: /*0x50a8f4*/
        v9 = "Actor"; /*0x50a8fb*/
        break; /*0x50a900*/
      case 1: /*0x50a8f4*/
        v9 = "Marker"; /*0x50a902*/
        break; /*0x50a907*/
      case 2: /*0x50a8f4*/
        v9 = "Land Quad"; /*0x50a909*/
        break; /*0x50a90e*/
      case 3: /*0x50a8f4*/
        v9 = "Water Quad"; /*0x50a910*/
        break; /*0x50a915*/
      case 4: /*0x50a8f4*/
        v9 = "Static Quad"; /*0x50a917*/
        break; /*0x50a91c*/
      case 5: /*0x50a8f4*/
        v9 = "Active Quad"; /*0x50a91e*/
        break; /*0x50a91e*/
      default:
        JUMPOUT(0x50A970); /*0x50a970*/
    }
    LOBYTE(v13) = ((1 << SLOBYTE(v12[0])) & unk_B35C00) != 0; /*0x50a936*/
    v10 = v13; /*0x50a933*/
    TES__ShowCellNode((TESObjectCELL **)MEMORY[0xB333A0], *(unsigned int *)v12, v13, 0); /*0x50a946*/
    v11 = "DISPLAYED"; /*0x50a94e*/
    if ( !v10 ) /*0x50a953*/
      v11 = "CULLED"; /*0x50a955*/
    Interface_ConsolePrint("Cell %s nodes now %s.", v9, v11); /*0x50a961*/
    return 1; /*0x50a96a*/
  }
  return result; /*0x50a8de*/
}
