// [Controller decode 2026-07-09] Controls menu row visibility filter. Shows control IDs 0..16, 26, 27, and 28; hides Quick Menu and Quick1..Quick8 rows.
BOOL __cdecl ControlsMenu::ShouldShowControlRow(unsigned int a1)
{
  return a1 <= 0x10 || a1 == 0x1A || a1 == 0x1B || a1 == 0x1C; /*0x59b6d9*/
}
