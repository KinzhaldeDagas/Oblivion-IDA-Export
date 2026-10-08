// Runtime corroboration of TESCS 0x545820: TESObjectREFR/ACHR/ACRE group matcher accepts owning CELL group type 6 as an ancestor, or strict direct role type 8 when reference flag 0x400 (Persistent), else type 10 when flag 0x8000 (Visible When Distant), else type 9. Persistent is tested first; labels match the owning CELL FormID in the low 24 bits.
char __thiscall TESObjectREFR_MatchGroupRecord(TESChildCELL *this, void *a2, bool a3, bool a4)
{
  char v4; // bl
  const void *v6; // eax
  unsigned int v7; // edx
  bool v9; // zf

  v4 = 0; /*0x4dff46*/
  if ( a2 && *(_DWORD *)a2 == dword_B05E20 )
  {
    v6 = (const void *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6); /*0x4dff69*/
    v7 = *((_DWORD *)a2 + 3); /*0x4dff6b*/
    if ( v7 == 6 )                              // GRUP type 6 is the owning-CELL ancestor and requires include_parent. /*0x4dff73*/
    {
      if ( !a3 ) /*0x4dffa5*/
        return 0; /*0x4dffae*/
    }
    else if ( v7 <= 7 || v7 > 0xA ) /*0x4dff7d*/
    {
      if ( a3 ) /*0x4dff85*/
        return (*(char (__thiscall **)(const void *, void *, bool, bool))(*(_DWORD *)v6 + 0xBC))(v6, a2, a3, a4); /*0x4dff9d*/
      return v4; /*0x4dff85*/
    }
    if ( TESForm_FormIDMatchesObjectID24(v6, *((_DWORD *)a2 + 2)) )
    {
      if ( !a4 ) /*0x4dffc3*/
        return 1; /*0x4dffc3*/
      if ( *((_DWORD *)a2 + 3) == 6 ) /*0x4dffc9*/
        return 1;                               // In strict mode, owning type 6 remains an accepted ancestor; direct child classification follows. /*0x4dffc9*/
      if ( TESObjectREFR_IsPersistent((TESObjectREFR *)this) )
        v9 = *((_DWORD *)a2 + 3) == 8;          // Persistent reference is tested first and requires direct role GRUP type 8. Dual Persistent+VWD references therefore use type 8. /*0x4dffd6*/
      else
        v9 = (*(_DWORD *)(this + 2) & 0x8000) != 0 ? *((_DWORD *)a2 + 3) == 0xA : *((_DWORD *)a2 + 3) == 9;// Visible When Distant and non-persistent => direct role GRUP type 10; otherwise the following comparison requires type 9.
      if ( v9 ) /*0x4dffef*/
        return 1; /*0x4dfff1*/
    }
  }
  return v4; /*0x4dff98*/
}
