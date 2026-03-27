void __userpurge TESWorldspace_Boh_(
        TESWorldSpace *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        TESChildCELL *a4)
{
  TESObjectCELL *v5; // eax

  if ( a4 )
  {
    if ( ((int)a4[2].vtbl & 0x4000) == 0 )
    {
      v5 = sub_4EF1F0(this);
      sub_4D35D0(v5, a2, a3, st7_0, (TESObjectREFR *)a4);
    }
  }
}
