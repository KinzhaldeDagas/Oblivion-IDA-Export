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
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  TESForm *v11; // ecx
  char *v12; // eax
  CHAR v14; // dl
  UInt32 *a3; // [esp+10h] [ebp-208h] BYREF
  char Str[4]; // [esp+14h] [ebp-204h] BYREF
  int v18; // [esp+18h] [ebp-200h]
  int v19; // [esp+1Ch] [ebp-1FCh]
  int v20; // [esp+20h] [ebp-1F8h]
  __int16 v21; // [esp+24h] [ebp-1F4h]
  char v22; // [esp+26h] [ebp-1F2h]

  HIBYTE(a3) = HIBYTE(a8); /*0x500b03*/
  *(_DWORD *)Str = dword_A4B88C; /*0x500b0d*/
  v18 = dword_A4B890; /*0x500b25*/
  v19 = dword_A4B894; /*0x500b37*/
  v20 = dword_A4B898; /*0x500b49*/
  v21 = word_A4B89C; /*0x500b5c*/
  v22 = byte_A4B89E; /*0x500b67*/
  if ( !Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, Str) ) /*0x500b7b*/
  {
    v8 = dword_A4B890; /*0x500b90*/
    v9 = dword_A4B894; /*0x500b96*/
    *(_DWORD *)Str = dword_A4B88C; /*0x500b9c*/
    v10 = dword_A4B898; /*0x500ba0*/
    v18 = v8; /*0x500ba5*/
    LOWORD(v8) = word_A4B89C; /*0x500ba9*/
    v19 = v9; /*0x500bb0*/
    LOBYTE(v9) = byte_A4B89E; /*0x500bb4*/
    v20 = v10; /*0x500bba*/
    v21 = v8; /*0x500bbe*/
    v22 = v9; /*0x500bc3*/
  }
  if ( !strstr(Str, ".txt") ) /*0x500bd1*/
  {
    v12 = (char *)&a3 + 3; /*0x500be1*/
    while ( *++v12 ) /*0x500bec*/
      ; /*0x500be4*/
    v11 = *(TESForm **)".txt"; /*0x500bee*/
    v14 = a_txt[4]; /*0x500bf4*/
    *(_DWORD *)v12 = *(_DWORD *)".txt"; /*0x500bfa*/
    v12[4] = v14; /*0x500bfc*/
  }
  if ( TESForm::IsActor(v11) ) /*0x500c04*/
    Interface_ConsolePrint("Outputting Archive profile to file %s", Str); /*0x500c1a*/
  else
    Interface_ConsolePrint("Archive profiling is not enabled"); /*0x500c3e*/
  return 1; /*0x500c24*/
}
