void __userpurge sub_447BA0(double st5_0@<st2>, double a2@<st1>, double a3@<st0>, TESObjectCELL *a1)
{
  TESForm *v4; // eax
  TESObjectLAND *v5; // eax
  TESWorldSpace *WorldSpace; // eax

  if ( a1 )
  {
    if ( (a1->members.super.flags & 0x20) == 0 )
    {
      sub_67A8C0((int *)&ActorProcessManager_ptr, a1);
      a1->members.cellProcessLevel = 1;
      sub_4CB4D0(a1);
      if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
        sub_4CB010(a1, st5_0, a2, a3, 1);
      v4 = (TESForm *)sub_4AF170(a1);
      if ( v4 )
        sub_4E7690(v4);
      if ( !TESObjectCELL_IsInterior(a1) )
      {
        v5 = sub_4CE3C0(a1);
        sub_4C6280(v5);
      }
      sub_4CE320(a1);
      if ( TESObjectCELL_IsInterior(a1) )
      {
        sub_4D1570(a1);
      }
      else
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(a1);
        sub_4F1840(WorldSpace, (TESForm *)a1);
      }
    }
  }
}
