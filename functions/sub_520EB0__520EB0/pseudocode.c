void __cdecl sub_520EB0(TESObjectREFR **a1)
{
  unsigned int v1; // ebx
  UInt32 i; // esi
  _DWORD *v3; // eax

  if ( a1 )
  {
    ((void (__thiscall *)(TESObjectREFR **))(*a1)[1].member.super.modlist.next)(a1);
    v1 = sub_5204C0(a1);
    for ( i = 0; i < v1; ++i )
    {
      v3 = sub_520260(a1, i);
      sub_520EB0(v3);
    }
  }
}
