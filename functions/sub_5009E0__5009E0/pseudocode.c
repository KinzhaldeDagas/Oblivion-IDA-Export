char __cdecl sub_5009E0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  int v11; // ecx
  int v12; // edx
  __int16 v13; // ax
  UInt16 v15[2]; // [esp+14h] [ebp-204h] BYREF
  int v16; // [esp+18h] [ebp-200h]
  int v17; // [esp+1Ch] [ebp-1FCh]
  __int16 v18; // [esp+20h] [ebp-1F8h]
  char v19; // [esp+22h] [ebp-1F6h]

  *(_DWORD *)v15 = dword_A4B830;
  v16 = dword_A4B834;
  v17 = dword_A4B838;
  v18 = word_A4B83C;
  v19 = byte_A4B83E;
  if ( !Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v15) )
  {
    v11 = dword_A4B834;
    v12 = dword_A4B838;
    *(_DWORD *)v15 = dword_A4B830;
    v13 = word_A4B83C;
    v16 = v11;
    LOBYTE(v11) = byte_A4B83E;
    v17 = v12;
    v18 = v13;
    v19 = v11;
  }
  Interface_ConsolePrint("This function only works in MEM_DEBUG");
  return 1;
}
