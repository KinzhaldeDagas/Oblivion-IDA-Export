void __thiscall sub_597170(TESChildCELL **this, signed int a2, _DWORD *a3)
{
  TESChildCELL *v4; // eax

  if ( a2 < 0x63 ) /*0x59717a*/
  {
    if ( a2 == 4 || a2 == 5 ) /*0x5971a4*/
      sub_57DE50(4); /*0x5971a8*/
  }
  else
  {
    v4 = (TESChildCELL *)sub_596BC0(a3); /*0x597181*/
    ClassMenu_RefreshClassDetails(this, v4);    // Morrowind Leveling hook: refresh extended ClassMenu minor skill traits after vanilla class display update. /*0x597189*/
    sub_57DE50(4); /*0x597190*/
  }
}
