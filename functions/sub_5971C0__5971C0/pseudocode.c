void __thiscall sub_5971C0(TESChildCELL **this, signed int a2, int a3)
{
  if ( a2 >= 0x63 ) /*0x5971c5*/
    ClassMenu_RefreshClassDetails(this, 0);     // Morrowind Leveling hook: refresh extended ClassMenu minor skill traits after vanilla class display update. /*0x5971c9*/
}
