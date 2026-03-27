void *__thiscall sub_628050(UInt32 *this)
{
  UInt32 *v2; // esi
  UInt32 *v3; // ebx
  int v4; // edi
  TESForm *v5; // eax
  void *v6; // eax
  UInt32 *v7; // eax
  UInt32 v8; // eax
  TESForm *v9; // eax
  void *result; // eax
  TESForm *v11; // eax

  sub_5660F0(this);
  v2 = this + 0x15;
  v3 = 0;
  if ( this != (UInt32 *)0xFFFFFFAC )
  {
    do
    {
      if ( !v2[1] && !*v2 )
        break;
      v4 = *v2;
      if ( *v2
        && (v5 = TESForm_LookupByFormID(*v2),
            (v6 = OblivionDynamicCast(
                    v5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0)) != 0) )
      {
        *v2 = (UInt32)v6;
        v3 = v2;
        v2 = (UInt32 *)v2[1];
      }
      else if ( v3 )
      {
        BSSimpleList_Remove(v3, v4);
        v2 = (UInt32 *)v3[1];
      }
      else
      {
        v7 = (UInt32 *)v2[1];
        if ( v7 )
        {
          v2[1] = v7[1];
          *v2 = *v7;
          FormHeapFree((unsigned int)v7);
        }
        else
        {
          *v2 = 0;
        }
      }
    }
    while ( v2 );
  }
  v8 = *(this + 0x18);
  if ( v8 )
  {
    v9 = TESForm_LookupByFormID(v8);
    *(this + 0x18) = (UInt32)OblivionDynamicCast(
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &Actor `RTTI Type Descriptor',
                               0);
  }
  result = (void *)*(this + 0x17);
  if ( result )
  {
    v11 = TESForm_LookupByFormID((UInt32)result);
    result = OblivionDynamicCast(
               v11,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *(this + 0x17) = (UInt32)result;
  }
  return result;
}
