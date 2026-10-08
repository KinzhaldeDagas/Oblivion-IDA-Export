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
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  char *v12; // eax
  char v14; // dl
  UInt32 *a3; // [esp+10h] [ebp-208h] BYREF
  char Str[4]; // [esp+14h] [ebp-204h] BYREF
  int v18; // [esp+18h] [ebp-200h]
  int v19; // [esp+1Ch] [ebp-1FCh]
  int v20; // [esp+20h] [ebp-1F8h]
  int v21; // [esp+24h] [ebp-1F4h]
  __int16 v22; // [esp+28h] [ebp-1F0h]

  HIBYTE(a3) = HIBYTE(a8); /*0x5008b4*/
  *(_DWORD *)Str = dword_A4B818; /*0x5008c5*/
  v18 = dword_A4B81C; /*0x5008dd*/
  v19 = dword_A4B820; /*0x5008e7*/
  v20 = dword_A4B824; /*0x5008f9*/
  v21 = dword_A4B828; /*0x50090b*/
  v22 = word_A4B82C; /*0x500916*/
  if ( !Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, Str) ) /*0x50092b*/
  {
    v8 = dword_A4B81C; /*0x500940*/
    v9 = dword_A4B820; /*0x500946*/
    *(_DWORD *)Str = dword_A4B818; /*0x50094c*/
    v10 = dword_A4B824; /*0x500950*/
    v18 = v8; /*0x500955*/
    v11 = dword_A4B828; /*0x500959*/
    v19 = v9; /*0x50095f*/
    LOWORD(v9) = word_A4B82C; /*0x500963*/
    v20 = v10; /*0x50096a*/
    v21 = v11; /*0x50096e*/
    v22 = v9; /*0x500972*/
  }
  if ( !strstr(Str, ".xls") ) /*0x500981*/
  {
    v12 = (char *)&a3 + 3; /*0x500991*/
    while ( *++v12 ) /*0x50099c*/
      ; /*0x500994*/
    v14 = a_xls[4]; /*0x5009a4*/
    *(_DWORD *)v12 = *(_DWORD *)".xls"; /*0x5009aa*/
    v12[4] = v14; /*0x5009ac*/
  }
  Interface_ConsolePrint("This function only works in MEM_DEBUG"); /*0x5009b4*/
  return 1; /*0x5009c3*/
}
