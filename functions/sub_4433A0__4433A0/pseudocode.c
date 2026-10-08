void __userpurge sub_4433A0(
        char *a1@<ebp>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        TESObjectCELL *a10,
        unsigned int a11,
        int a12)
{
  bool v13; // zf
  char *m_data; // eax
  UInt32 refID; // esi
  int XCoordinate; // eax
  DWORD (__stdcall *v17)(); // esi
  DWORD v18; // ebp
  DWORD v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // ecx
  float v22; // edi
  int v23; // ebp
  double v24; // st7
  double v25; // st7
  int v26; // eax
  double v27; // st7
  double v28; // st7
  int v29; // [esp-4h] [ebp-2Ch]
  double ArgList; // [esp+0h] [ebp-28h]
  int YCoordinate; // [esp+Ch] [ebp-1Ch]
  const char *v32; // [esp+10h] [ebp-18h]
  DWORD TickCount; // [esp+24h] [ebp-4h]
  unsigned int v34; // [esp+2Ch] [ebp+4h]

  if ( a10 )
  {
    v13 = TESObjectCELL_IsInterior(a10) == 0; /*0x4433b8*/
    m_data = a10->members.fullName.name.m_data; /*0x4433ba*/
    if ( v13 ) /*0x4433bd*/
    {
      if ( !m_data ) /*0x4433de*/
        m_data = EmptyString; /*0x4433e0*/
      refID = a10->members.super.refID; /*0x4433e5*/
      v32 = m_data; /*0x4433e8*/
      YCoordinate = TESObjectCELL_GetYCoordinate(a10); /*0x4433f0*/
      XCoordinate = TESObjectCELL_GetXCoordinate(a10); /*0x4433f3*/
      sub_40FEC0("Moving to exterior cell %08X (%i,%i) %s", refID, XCoordinate, YCoordinate, v32); /*0x4433ff*/
    }
    else
    {
      if ( !m_data ) /*0x4433c1*/
        m_data = EmptyString; /*0x4433c3*/
      sub_40FEC0("Moving to interior cell %08X %s", a10->members.super.refID, m_data); /*0x4433d2*/
    }
    v17 = GetTickCount; /*0x443407*/
    TickCount = GetTickCount(); /*0x443418*/
    sub_66FD90((TESObjectREFR *)reference, a1, a2, a5, a6, a7, a8, a9, a3, a4, 0, *(float *)&a10); /*0x44341c*/
    sub_434020(MEMORY[0xB33A10], a7, a8, a9, 5); /*0x443429*/
    v18 = v17(); /*0x443430*/
    v19 = v17(); /*0x443432*/
    v20 = (v19 - a12) / 0x36EE80; /*0x443443*/
    v21 = (v19 - a12) % 0x36EE80; /*0x44344e*/
    LODWORD(v22) = v21 / 0xEA60; /*0x443459*/
    v34 = v21 % 0xEA60 / 0x3E8; /*0x443472*/
    v23 = v18 - TickCount; /*0x44347b*/
    if ( TESObjectCELL_IsInterior(a10) )
    {
      v24 = (double)v23; /*0x44348f*/
      if ( v23 < 0 ) /*0x443494*/
        v24 = v24 + flt_A2FC78; /*0x443496*/
      sub_40FEC0(
        "Interior cell finished loading in %.02f seconds.  Total test time: %02i:%02i:%02i",
        v24 / dbl_A2FC70,
        v20,
        v22,
        v34);
    }
    else
    {
      v25 = (double)v23; /*0x4434c3*/
      if ( v23 < 0 ) /*0x4434c8*/
        v25 = v25 + flt_A2FC78; /*0x4434ca*/
      ArgList = v25 / dbl_A2FC70; /*0x4434db*/
      v29 = TESObjectCELL_GetYCoordinate(a10); /*0x4434e3*/
      v26 = TESObjectCELL_GetXCoordinate(a10); /*0x4434e6*/
      sub_40FEC0(
        "Exterior cell (%i,%i) finished loading in %.02f seconds.  Total test time: %02i:%02i:%02i",
        v26,
        v29,
        ArgList,
        v20,
        v22,
        v34);
    }
    v27 = flt_A374BC; /*0x4434f9*/
    TimeGlobals_AdvanceGameTime(&MEMORY[0xB332E0], flt_A374BC); /*0x443508*/
    sub_674A20((int)&qword_B3BB2C[0x75], a7, a8, v27, a6, a5, a4); /*0x443512*/
    v28 = sub_678510((int)&qword_B3BB2C[0x75], v22); /*0x44351c*/
    sub_674A20((int)&qword_B3BB2C[0x75], a7, a8, v28, a6, a5, a4); /*0x443526*/
    if ( a11 >= 4 && a11 <= 5 ) /*0x44353a*/
      sub_466BE0( /*0x443543*/
        (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)g_TESSaveLoadGame,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        v28,
        a11);
  }
}
