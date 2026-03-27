void __userpurge sub_4433A0(
        char a1@<bpl>,
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
  const char *m_data; // eax
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
    v13 = TESObjectCELL_IsInterior(a10) == 0;
    m_data = a10->members.fullName.name.m_data;
    if ( v13 )
    {
      if ( !m_data )
        m_data = EmptyString;
      refID = a10->members.super.refID;
      v32 = m_data;
      YCoordinate = TESObjectCELL_GetYCoordinate(a10);
      XCoordinate = TESObjectCELL_GetXCoordinate(a10);
      sub_40FEC0("Moving to exterior cell %08X (%i,%i) %s", refID, XCoordinate, YCoordinate, v32);
    }
    else
    {
      if ( !m_data )
        m_data = EmptyString;
      sub_40FEC0("Moving to interior cell %08X %s", a10->members.super.refID, m_data);
    }
    v17 = GetTickCount;
    TickCount = GetTickCount();
    sub_66FD90((int)TESDataHandler_g_PlayerRef, a1, a2, a5, a6, a7, a8, a9, 0, (int)a10);
    sub_434020(ioManager, a7, a8, a9, 5);
    v18 = v17();
    v19 = v17();
    v20 = (v19 - a12) / 0x36EE80;
    v21 = (v19 - a12) % 0x36EE80;
    LODWORD(v22) = v21 / 0xEA60;
    v34 = v21 % 0xEA60 / 0x3E8;
    v23 = v18 - TickCount;
    if ( TESObjectCELL_IsInterior(a10) )
    {
      v24 = (double)v23;
      if ( v23 < 0 )
        v24 = v24 + flt_A2FC78;
      sub_40FEC0(
        "Interior cell finished loading in %.02f seconds.  Total test time: %02i:%02i:%02i",
        v24 / dbl_A2FC70,
        v20,
        v22,
        v34);
    }
    else
    {
      v25 = (double)v23;
      if ( v23 < 0 )
        v25 = v25 + flt_A2FC78;
      ArgList = v25 / dbl_A2FC70;
      v29 = TESObjectCELL_GetYCoordinate(a10);
      v26 = TESObjectCELL_GetXCoordinate(a10);
      sub_40FEC0(
        "Exterior cell (%i,%i) finished loading in %.02f seconds.  Total test time: %02i:%02i:%02i",
        v26,
        v29,
        ArgList,
        v20,
        v22,
        v34);
    }
    v27 = flt_A374BC;
    sub_4029E0(&TimeGlobals, flt_A374BC);
    sub_674A20((int)&ActorProcessManager_ptr, a7, a8, v27, a6);
    v28 = sub_678510((int)&ActorProcessManager_ptr, v22);
    sub_674A20((int)&ActorProcessManager_ptr, a7, a8, v28, a6);
    if ( a11 >= 4 && a11 <= 5 )
      sub_466BE0((int)SaveLoad_CurrentSavegame, a2, a3, a4, a5, a6, a7, a8, v28, a11);
  }
}
