void __thiscall sub_6071A0(UInt32 *this)
{
  UInt32 v2; // eax
  TESForm *v3; // eax
  UInt32 v4; // eax
  TESForm *v5; // eax
  UInt32 v6; // eax
  TESForm *v7; // eax
  UInt32 *v8; // esi
  UInt32 *v9; // ebx
  int v10; // edi
  TESForm *v11; // eax
  void *v12; // eax
  UInt32 *v13; // eax

  v2 = *(this + 2);
  if ( v2 )
  {
    v3 = TESForm_LookupByFormID(v2);
    *(this + 2) = (UInt32)OblivionDynamicCast(
                            v3,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
  }
  v4 = *(this + 3);
  if ( v4 )
  {
    v5 = TESForm_LookupByFormID(v4);
    *(this + 3) = (UInt32)OblivionDynamicCast(
                            v5,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  }
  v6 = *(this + 5);
  if ( v6 )
  {
    v7 = TESForm_LookupByFormID(v6);
    *(this + 5) = (UInt32)OblivionDynamicCast(
                            v7,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                            0);
  }
  if ( *(this + 9) )
    *(this + 9) = (UInt32)TESForm_LookupByFormID(*(this + 9));
  v8 = this + 7;
  v9 = 0;
  while ( v8 )
  {
    if ( !v8[1] && !*v8 )
      break;
    v10 = *v8;
    if ( *v8
      && (v11 = TESForm_LookupByFormID(*v8),
          (v12 = OblivionDynamicCast(
                   v11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0)) != 0) )
    {
      *v8 = (UInt32)v12;
      v9 = v8;
      v8 = (UInt32 *)v8[1];
    }
    else if ( v9 )
    {
      BSSimpleList_Remove(v9, v10);
      v8 = (UInt32 *)v9[1];
    }
    else
    {
      v13 = (UInt32 *)v8[1];
      if ( v13 )
      {
        v8[1] = v13[1];
        *v8 = *v13;
        FormHeapFree((unsigned int)v13);
      }
      else
      {
        *v8 = 0;
      }
    }
  }
}
