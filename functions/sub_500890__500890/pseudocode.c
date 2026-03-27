char __cdecl sub_500890(
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
  int v13; // eax
  int v14; // ecx
  char *v15; // eax
  char v17; // dl
  UInt32 *a3; // [esp+10h] [ebp-208h] BYREF
  char Str[4]; // [esp+14h] [ebp-204h] BYREF
  int v21; // [esp+18h] [ebp-200h]
  int v22; // [esp+1Ch] [ebp-1FCh]
  int v23; // [esp+20h] [ebp-1F8h]
  int v24; // [esp+24h] [ebp-1F4h]
  __int16 v25; // [esp+28h] [ebp-1F0h]

  HIBYTE(a3) = HIBYTE(a8);
  *(_DWORD *)Str = dword_A4B818;
  v21 = dword_A4B81C;
  v22 = dword_A4B820;
  v23 = dword_A4B824;
  v24 = dword_A4B828;
  v25 = word_A4B82C;
  if ( !Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, Str) )
  {
    v11 = dword_A4B81C;
    v12 = dword_A4B820;
    *(_DWORD *)Str = dword_A4B818;
    v13 = dword_A4B824;
    v21 = v11;
    v14 = dword_A4B828;
    v22 = v12;
    LOWORD(v12) = word_A4B82C;
    v23 = v13;
    v24 = v14;
    v25 = v12;
  }
  if ( !strstr(Str, ".xls") )
  {
    v15 = (char *)&a3 + 3;
    while ( *++v15 )
      ;
    v17 = a_xls[4];
    *(_DWORD *)v15 = *(_DWORD *)".xls";
    v15[4] = v17;
  }
  Interface_ConsolePrint("This function only works in MEM_DEBUG");
  return 1;
}
