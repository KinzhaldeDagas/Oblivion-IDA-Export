void __userpurge PlayerCharacter_RelocateToFastTravelTarget(
        double a1@<st4>,
        double a2@<st3>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st6>,
        double a6@<st0>,
        double a7@<st5>,
        void (__thiscall *a8)(NiAVObject *this, NiMatrix33 *Mat, NiPoint3 *Trn, bool OnLeft),
        NiAVObject *(__thiscall *a9)(NiAVObject *this, const char *Name),
        void *(__thiscall *a10)(NiAVObject *this),
        int a11,
        int a12,
        int a13,
        TESWorldSpace *a14,
        char a15)
{
  TESForm *CellAtCellCoord; // eax

  if ( a14 ) /*0x66f379*/
  {
    if ( unk_B35B90 ) /*0x66f37f*/
      sub_4BE5A0((_DWORD *)unk_B35B90); /*0x66f389*/
    if ( g_DistantLODLoaderTasksByCell ) /*0x66f38e*/
      sub_4BD980((_DWORD *)g_DistantLODLoaderTasksByCell); /*0x66f398*/
    CellAtCellCoord = (TESForm *)TESWorldSpace::GetCellAtCellCoord( /*0x66f3bf*/
                                   a14,
                                   (int)*(float *)&a8 >> 0xC,
                                   (int)*(float *)&a9 >> 0xC);
    if ( CellAtCellCoord /*0x66f3d3*/
      || (CellAtCellCoord = TESWorldSpace_LoadExteriorCellAtCoord(
                              a14,
                              a3,
                              a4,
                              a6,
                              (int)*(float *)&a8 >> 0xC,
                              (int)*(float *)&a9 >> 0xC)) != 0 )// Exterior cell coordinate conversion uses signed arithmetic shift by 12 after float-to-int, so cell size is 4096 world units and negative coordinates round via signed integer conversion then SAR.
    {
      PlayerCharacter_ChangeCellAndPosition( /*0x66f413*/
        (TESObjectREFR *)reference,
        a6,
        a2,
        a3,
        a4,
        *(float *)&a9,
        a1,
        a5,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        (TESObjectCELL *)CellAtCellCoord,
        a15);
    }
  }
}
