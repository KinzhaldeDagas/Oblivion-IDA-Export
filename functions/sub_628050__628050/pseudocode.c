void *__thiscall sub_628050(TESPackage *this)
{
  UInt32 *v2; // esi
  int *v3; // ebx
  int v4; // edi
  TESForm *v5; // eax
  void *v6; // eax
  UInt32 *v7; // eax
  UInt32 v8; // eax
  TESForm *v9; // eax
  void *result; // eax
  TESForm *v11; // eax

  TESPackage_InitLoadGame(this); /*0x628055*/
  v2 = (UInt32 *)((char *)this + 0x54); /*0x62805a*/
  v3 = 0; /*0x62805d*/
  if ( this != (TESPackage *)0xFFFFFFAC ) /*0x628061*/
  {
    do /*0x6280d9*/
    {
      if ( !v2[1] && !*v2 ) /*0x62806a*/
        break; /*0x62806d*/
      v4 = *v2; /*0x628073*/
      if ( *v2 /*0x628099*/
        && (v5 = TESForm_LookupByFormID(*v2),
            (v6 = OblivionDynamicCast(
                    v5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0)) != 0) )
      {
        *v2 = (UInt32)v6; /*0x6280d0*/
        v3 = (int *)v2; /*0x6280d2*/
        v2 = (UInt32 *)v2[1]; /*0x6280d4*/
      }
      else if ( v3 ) /*0x62809d*/
      {
        BSSimpleList_Remove(v3, v4); /*0x6280c6*/
        v2 = (UInt32 *)v3[1]; /*0x6280cb*/
      }
      else
      {
        v7 = (UInt32 *)v2[1]; /*0x62809f*/
        if ( v7 ) /*0x6280a4*/
        {
          v2[1] = v7[1]; /*0x6280a9*/
          *v2 = *v7; /*0x6280af*/
          FormHeapFree((unsigned int)v7); /*0x6280b1*/
        }
        else
        {
          *v2 = 0; /*0x6280bb*/
        }
      }
    }
    while ( v2 ); /*0x6280d9*/
  }
  v8 = *((_DWORD *)this + 0x18); /*0x6280dc*/
  if ( v8 ) /*0x6280e1*/
  {
    v9 = TESForm_LookupByFormID(v8); /*0x6280f2*/
    *((_DWORD *)this + 0x18) = OblivionDynamicCast( /*0x628103*/
                                 v9,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
  }
  result = *((void **)this + 0x17); /*0x628106*/
  if ( result ) /*0x62810b*/
  {
    v11 = TESForm_LookupByFormID((UInt32)result); /*0x62811c*/
    result = OblivionDynamicCast( /*0x628125*/
               v11,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *((_DWORD *)this + 0x17) = result; /*0x62812d*/
  }
  return result; /*0x628130*/
}
