void __userpurge SummonCreatureEffect_Link(ActiveEffect *this@<ecx>, char a2@<bpl>, double a3@<st0>, int a4)
{
  UInt32 v5; // eax
  TESForm *v6; // eax
  void *v7; // eax

  AssociatedItemEffect_Link(a4);
  v5 = *((_DWORD *)this + 0xF);
  if ( v5 )
  {
    v6 = TESForm_LookupByFormID(v5);
    v7 = OblivionDynamicCast(
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    *((_DWORD *)this + 0xF) = v7;
    if ( !v7 )
      ActiveEffect_Base_Remove(this, a2, a3, 1);
  }
}
