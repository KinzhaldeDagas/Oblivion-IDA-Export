// Verified shared LAND/PathGrid group constructor: from a matching exterior/interior CELL sub-block group type 3/5, emits CELL children group type 6 labelled with parent CELL FormID; from matching type 6, emits temporary children group type 9 with the same CELL label. This nests PGRD records under CELL temporary children.
void __thiscall TESObjectLAND_TESPathGrid_CreateGroupRecord(
        void *this,
        unsigned int *out_group_header,
        const unsigned int *current_group_header)
{
  _DWORD *parent_cell; // ecx
  unsigned int parent_cell_form_id; // ebx
  unsigned int v6; // edx

  if ( out_group_header ) /*0x4e4e0c*/
  {
    *out_group_header = 0; /*0x4e4e15*/
    if ( current_group_header ) /*0x4e4e17*/
    {
      parent_cell = *((_DWORD **)this + 8); /*0x4e4e1f*/
      parent_cell_form_id = parent_cell[3]; /*0x4e4e23*/
      if ( current_group_header[3] == 3 || current_group_header[3] == 5 ) /*0x4e4e2b*/
      {
        if ( current_group_header[2] == TESObjectCELL_GetCellGroupSubBlockLabel(parent_cell) ) /*0x4e4e63*/
        {
          *out_group_header = dword_B05E20; /*0x4e4e6a*/
          out_group_header[3] = 6;              // From a matching interior/exterior cell sub-block group (type 3 or 5), emit CELL children group type 6 labelled with the owning CELL FormID. /*0x4e4e6c*/
          out_group_header[2] = parent_cell_form_id; /*0x4e4e73*/
          out_group_header[4] = 0; /*0x4e4e76*/
          out_group_header[1] = 0; /*0x4e4e79*/
        }
      }
      else if ( current_group_header[3] == 6 && current_group_header[2] == parent_cell_form_id ) /*0x4e4e35*/
      {
        *out_group_header = dword_B05E20; /*0x4e4e3c*/
        out_group_header[3] = 9;                // From the owning CELL children group type 6, emit temporary children group type 9 labelled with the same CELL FormID; LAND/PGRD records are direct children of this group. /*0x4e4e3e*/
        v6 = *(_DWORD *)(*((_DWORD *)this + 8) + 0xC); /*0x4e4e48*/
        out_group_header[4] = 0; /*0x4e4e4d*/
        out_group_header[1] = 0; /*0x4e4e50*/
        out_group_header[2] = v6; /*0x4e4e53*/
      }
    }
  }
}
