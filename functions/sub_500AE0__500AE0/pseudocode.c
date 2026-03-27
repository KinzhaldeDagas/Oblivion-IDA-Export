char __cdecl sub_500AE0(
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
  char *v14; // eax
  CHAR v16; // dl
  UInt32 *a3; // [esp+10h] [ebp-208h] BYREF
  char Str[4]; // [esp+14h] [ebp-204h] BYREF
  int v20; // [esp+18h] [ebp-200h]
  int v21; // [esp+1Ch] [ebp-1FCh]
  int v22; // [esp+20h] [ebp-1F8h]
  __int16 v23; // [esp+24h] [ebp-1F4h]
  char v24; // [esp+26h] [ebp-1F2h]

  HIBYTE(a3) = HIBYTE(a8);
  *(_DWORD *)Str = dword_A4B88C;
  v20 = dword_A4B890;
  v21 = dword_A4B894;
  v22 = dword_A4B898;
  v23 = word_A4B89C;
  v24 = byte_A4B89E;
  if ( !Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, Str) )
  {
    v11 = dword_A4B890;
    v12 = dword_A4B894;
    *(_DWORD *)Str = dword_A4B88C;
    v13 = dword_A4B898;
    v20 = v11;
    LOWORD(v11) = word_A4B89C;
    v21 = v12;
    LOBYTE(v12) = byte_A4B89E;
    v22 = v13;
    v23 = v11;
    v24 = v12;
  }
  if ( !strstr(Str, ".txt") )
  {
    v14 = (char *)&a3 + 3;
    while ( *++v14 )
      ;
    v16 = a_txt[4];
    *(_DWORD *)v14 = *(_DWORD *)".txt";
    v14[4] = v16;
  }
  if ( nullsub_returnFalse_0arg() )
    Interface_ConsolePrint("Outputting Archive profile to file %s", Str);
  else
    Interface_ConsolePrint("Archive profiling is not enabled");
  return 1;
}
