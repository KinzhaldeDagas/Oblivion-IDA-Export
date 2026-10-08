void __userpurge SummonCreatureEffect_Link(ActiveEffect *this@<ecx>, char a2@<bpl>, double a3@<st0>, int a4)
{
  UInt32 v5; // eax
  TESForm *v6; // eax
  void *v7; // eax

  AssociatedItemEffect_Link((int)this, a4); /*0x6a5188*/
  v5 = *((_DWORD *)this + 0xF); /*0x6a518d*/
  if ( v5 ) /*0x6a5192*/
  {
    v6 = TESForm_LookupByFormID(v5); /*0x6a51a3*/
    v7 = OblivionDynamicCast( /*0x6a51ac*/
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    *((_DWORD *)this + 0xF) = v7; /*0x6a51b6*/
    if ( !v7 ) /*0x6a51b9*/
      ActiveEffect_Base_Remove(this, a2, a3, 1); /*0x6a51bf*/
  }
}
