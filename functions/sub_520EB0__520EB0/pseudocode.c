void __cdecl sub_520EB0(TESObjectREFR **a1)
{
  unsigned int v1; // ebx
  UInt32 i; // esi
  TESObjectREFR **v3; // eax

  if ( a1 ) /*0x520eb7*/
  {
    ((void (__thiscall *)(TESObjectREFR **))(*a1)[1].member.super.modlist.next)(a1); /*0x520ec2*/
    v1 = sub_5204C0(a1); /*0x520ecb*/
    for ( i = 0; i < v1; ++i ) /*0x520ed1*/
    {
      v3 = (TESObjectREFR **)sub_520260(a1, i); /*0x520ed6*/
      sub_520EB0(v3); /*0x520edc*/
    }
  }
}
