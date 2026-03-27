void __usercall sub_502500(
        double st0_0@<st7>,
        double a2@<st6>,
        double st2_0@<st5>,
        double st3_0@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        ParamInfo *a1,
        UInt8 *a10,
        TESObjectREFR *a4,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a16)
{
  char *v16; // esi
  void (__stdcall *v17)(LPSTR, LPCSTR); // edi
  char v18; // al
  int v19; // [esp+0h] [ebp-320h]
  int v20; // [esp+4h] [ebp-31Ch]
  TESObjectREFR *v21; // [esp+8h] [ebp-318h]
  char v22; // [esp+Ch] [ebp-314h]
  __int16 a3; // [esp+10h] [ebp-310h]
  int v24; // [esp+14h] [ebp-30Ch] BYREF
  int String1[12]; // [esp+18h] [ebp-308h] BYREF
  char v26; // [esp+48h] [ebp-2D8h]
  int v27; // [esp+4Ch] [ebp-2D4h]
  int v28; // [esp+50h] [ebp-2D0h]
  int v29; // [esp+54h] [ebp-2CCh]
  int v30; // [esp+58h] [ebp-2C8h]
  int v31; // [esp+5Ch] [ebp-2C4h]
  __int16 v32; // [esp+60h] [ebp-2C0h]
  int v33; // [esp+64h] [ebp-2BCh]
  unsigned int v34; // [esp+68h] [ebp-2B8h]
  unsigned int v35; // [esp+6Ch] [ebp-2B4h]
  float v36; // [esp+70h] [ebp-2B0h]
  float v37; // [esp+74h] [ebp-2ACh]
  int v38; // [esp+78h] [ebp-2A8h]
  int v39; // [esp+7Ch] [ebp-2A4h]
  int v40; // [esp+80h] [ebp-2A0h]
  int v41; // [esp+84h] [ebp-29Ch]
  char v42; // [esp+88h] [ebp-298h]
  int v43; // [esp+8Ch] [ebp-294h]
  int v44; // [esp+90h] [ebp-290h]
  int v45; // [esp+94h] [ebp-28Ch]
  int v46; // [esp+98h] [ebp-288h]
  int v47; // [esp+9Ch] [ebp-284h]
  int v48; // [esp+A0h] [ebp-280h]
  unsigned int v49; // [esp+A4h] [ebp-27Ch]
  int v50; // [esp+A8h] [ebp-278h]
  int v51; // [esp+ACh] [ebp-274h]
  int v52; // [esp+B0h] [ebp-270h]
  int v53; // [esp+B4h] [ebp-26Ch]
  float v54; // [esp+B8h] [ebp-268h]
  float v55; // [esp+BCh] [ebp-264h]
  int v56; // [esp+C0h] [ebp-260h]
  int v57; // [esp+C4h] [ebp-25Ch]
  int v58; // [esp+C8h] [ebp-258h]
  char Str[512]; // [esp+11Ch] [ebp-204h] BYREF

  HIBYTE(a3) = BYTE1(a16);
  v24 = 0;
  if ( Script_ExtractArgs(a1, a10, a16, a4, a12, a13, l, Str, &v24) )
  {
    lstrcpyA((LPSTR)String1, EmptyString);
    v16 = strchr(Str, 0x2E);
    if ( v16 )
    {
      v17 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA;
      *v16 = 0;
      v17((LPSTR)String1, Str);
      v17((LPSTR)String1, ".ess");
      *v16 = 0x2E;
    }
    else
    {
      lstrcatA((LPSTR)String1, Str);
    }
    LOBYTE(a3) = v24 != 0;
    TESSaveLoadGame_LoadGame(
      SaveLoad_CurrentSavegame,
      st0_0,
      a2,
      st2_0,
      st3_0,
      a5,
      a6,
      a7,
      a8,
      0,
      (char *)String1,
      v24 != 0,
      v19,
      v20,
      v21,
      v22,
      a3,
      v24,
      String1[0],
      (float *)String1[1],
      String1[2],
      String1[3],
      String1[4],
      String1[5],
      String1[6],
      String1[7],
      String1[8],
      String1[9],
      String1[0xA],
      String1[0xB],
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    if ( v18 )
      Interface_ConsolePrint("Game Loaded");
    else
      Interface_ConsolePrint("File not found.");
  }
}
