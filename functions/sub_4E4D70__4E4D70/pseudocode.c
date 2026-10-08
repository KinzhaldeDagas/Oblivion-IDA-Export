// Runtime folded virtual used by both TESObjectLAND and TESPathGrid. TESCS-authoritative equivalents are TESObjectLAND_MatchesSerializedGroup (0x521FC0) and TESPathGrid_MatchesSerializedGroup (0x54CA20): direct records match CELL temporary-children type 9; ancestor traversal also accepts the owning CELL children type 6; types 8 and 10 are rejected; labels compare against the parent CELL FormID low 24 bits.
char __thiscall TESObjectLAND_TESPathGrid_MatchesSerializedGroup(
        void *this,
        const unsigned int *group_header,
        int include_parent,
        int match_flags)
{
  unsigned int group_type; // eax
  const void *parent_cell; // ecx

  if ( group_header && *group_header == dword_B05E20 ) /*0x4e4d84*/
  {
    group_type = group_header[3]; /*0x4e4d86*/
    parent_cell = *((const void **)this + 8); /*0x4e4d8c*/
    if ( group_type == 6 )                      // Group type 6 is accepted only while include_parent is true: it is the outer owning-CELL children wrapper, not the direct LAND/PGRD record group. /*0x4e4d8f*/
    {
      if ( !(_BYTE)include_parent ) /*0x4e4dc0*/
        return 0; /*0x4e4dc0*/
    }
    else if ( group_type <= 7 || group_type > 0xA ) /*0x4e4d99*/
    {
      if ( (_BYTE)include_parent ) /*0x4e4da1*/
        return (*(int (__thiscall **)(const void *, const unsigned int *, int, int))(*(_DWORD *)parent_cell + 0xBC))( /*0x4e4db8*/
                 parent_cell,
                 group_header,
                 include_parent,
                 match_flags);
      return 0; /*0x4e4da1*/
    }
    if ( TESForm_FormIDMatchesObjectID24(parent_cell, group_header[2]) ) /*0x4e4dcd*/
      return group_header[3] != 8 && group_header[3] != 0xA;// After the parent CELL FormID24 label match, accept temporary children type 9; explicitly reject persistent type 8 and distant type 10. /*0x4e4dc6*/
  }
  return 0; /*0x4e4db6*/
}
