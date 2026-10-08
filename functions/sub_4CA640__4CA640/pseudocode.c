// Compute the CELL group sub-block label. Interior: decimal FormID bucket ((objectID24 % 100) / 10). Exterior: signed cell coordinates divided by 8 and packed X-high/Y-low. Cross-checks TESCS TESObjectCELL_GetCellGroupSubBlockLabel at 0x533F90.
unsigned int __thiscall TESObjectCELL_GetCellGroupSubBlockLabel(const void *this)
{
  int *cell_coordinates; // eax
  int cell_y; // ecx
  int cell_x; // eax

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4ca644*/
    return (*((_DWORD *)this + 3) & 0xFFFFFFu) % 0x64 / 0xA; /*0x4ca689*/
  cell_coordinates = *((int **)this + 0xF); /*0x4ca646*/
  if ( cell_coordinates ) /*0x4ca64b*/
    cell_y = cell_coordinates[1]; /*0x4ca64d*/
  else
    cell_y = 0; /*0x4ca652*/
  if ( cell_coordinates ) /*0x4ca656*/
    cell_x = *cell_coordinates; /*0x4ca658*/
  else
    cell_x = 0; /*0x4ca65c*/
  return TESObjectCELL_PackExteriorGroupLabel(cell_x >> 3, cell_y >> 3); /*0x4ca66e*/
}
