void __thiscall sub_5D6250(_DWORD *this, int a2, int a3)
{
  if ( a2 == 0x63 && (int)SkillsMenu_CountSelectedRows(this) > 0 ) /*0x5d6261*/
    SkillsMenu_UpdateDetails(this, (void *)0xFFFFFFFF); /*0x5d6267*/
}
