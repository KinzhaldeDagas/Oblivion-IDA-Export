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
  int v8; // ecx
  int v9; // edx
  __int16 v10; // ax
  UInt16 v12[2]; // [esp+14h] [ebp-204h] BYREF
  int v13; // [esp+18h] [ebp-200h]
  int v14; // [esp+1Ch] [ebp-1FCh]
  __int16 v15; // [esp+20h] [ebp-1F8h]
  char v16; // [esp+22h] [ebp-1F6h]

  *(_DWORD *)v12 = dword_A4B830; /*0x500a1b*/
  v13 = dword_A4B834; /*0x500a2d*/
  v14 = dword_A4B838; /*0x500a3f*/
  v15 = word_A4B83C; /*0x500a52*/
  v16 = byte_A4B83E; /*0x500a5d*/
  if ( !Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v12) ) /*0x500a71*/
  {
    v8 = dword_A4B834; /*0x500a86*/
    v9 = dword_A4B838; /*0x500a8c*/
    *(_DWORD *)v12 = dword_A4B830; /*0x500a92*/
    v10 = word_A4B83C; /*0x500a96*/
    v13 = v8; /*0x500a9c*/
    LOBYTE(v8) = byte_A4B83E; /*0x500aa0*/
    v14 = v9; /*0x500aa6*/
    v15 = v10; /*0x500aaa*/
    v16 = v8; /*0x500aaf*/
  }
  Interface_ConsolePrint("This function only works in MEM_DEBUG"); /*0x500ab8*/
  return 1; /*0x500ac7*/
}
