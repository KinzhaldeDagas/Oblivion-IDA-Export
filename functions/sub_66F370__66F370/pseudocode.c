void __userpurge sub_66F370(
        double a1@<st7>,
        double a2@<st4>,
        double a3@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st6>,
        double a7@<st0>,
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

  if ( a14 )
  {
    if ( dword_B35B90 )
      sub_4BE5A0((_DWORD *)dword_B35B90);
    if ( dword_B35B8C )
      sub_4BD980((_DWORD *)dword_B35B8C);
    CellAtCellCoord = (TESForm *)TESWorldSpace::GetCellAtCellCoord(
                                   a14,
                                   (int)*(float *)&a8 >> 0xC,
                                   (int)*(float *)&a9 >> 0xC);
    if ( CellAtCellCoord
      || (CellAtCellCoord = sub_4F1630(a14, a4, a5, a7, (int)*(float *)&a8 >> 0xC, (int)*(float *)&a9 >> 0xC)) != 0 )
    {
      sub_66EAF0(
        (TESObjectREFR *)TESDataHandler_g_PlayerRef,
        a7,
        a3,
        a4,
        a5,
        a1,
        a2,
        a6,
        *(float *)&a9,
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
