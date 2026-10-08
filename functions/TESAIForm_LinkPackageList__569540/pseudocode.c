void __thiscall TESAIForm_LinkPackageList(int *this, TESForm *arg0)
{
  int *v3; // ebx
  TESForm *v4; // eax
  void *v5; // eax
  int *v6; // eax
  char ArgList[4]; // [esp+14h] [ebp-20h] BYREF
  int a2; // [esp+18h] [ebp-1Ch]
  BSStringT v9; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v10; // [esp+30h] [ebp-4h]

  v3 = 0; /*0x569573*/
  if ( arg0 ) /*0x569577*/
    a2 = (int)TESForm_GetOverrideFile(arg0, 0xFFFFFFFF); /*0x569580*/
  else
    a2 = 0; /*0x569586*/
  while ( this ) /*0x56958c*/
  {
    if ( !*(this + 1) && !*this ) /*0x569597*/
      break; /*0x569599*/
    *(_DWORD *)ArgList = *this; /*0x5695a4*/
    if ( arg0 ) /*0x5695a8*/
      TESForm_ResolveFormID((UInt32 *)ArgList, (Data *)a2); /*0x5695b4*/
    v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x5695cd*/
    v5 = OblivionDynamicCast( /*0x5695d6*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESPackage `RTTI Type Descriptor',
           0);
    if ( v5 ) /*0x5695e0*/
    {
      *this = (int)v5; /*0x56968b*/
      v3 = this; /*0x56968d*/
      this = (int *)*(this + 1); /*0x56968f*/
    }
    else
    {
      v9.m_data = 0; /*0x5695e6*/
      v9.m_dataLen = 0; /*0x5695ea*/
      v9.m_bufLen = 0; /*0x5695ef*/
      v10 = 0; /*0x5695f9*/
      if ( arg0 ) /*0x5695fd*/
        arg0->vtbl->GetDescription(arg0, &v9); /*0x569609*/
      else
        BSStringT_Set(&v9, "UNKNOWN form", 0); /*0x569617*/
      PrintError("Could not find Package (%08X) for %s.", *(_DWORD *)ArgList, v9.m_data); /*0x56962b*/
      if ( v3 ) /*0x569635*/
      {
        BSSimpleList_Remove(v3, *(int *)ArgList); /*0x56963e*/
        this = (int *)v3[1]; /*0x569643*/
      }
      else
      {
        v6 = (int *)*(this + 1); /*0x569648*/
        if ( v6 ) /*0x56964d*/
        {
          *(this + 1) = v6[1]; /*0x569652*/
          *this = *v6; /*0x569658*/
          FormHeapFree((unsigned int)v6); /*0x56965a*/
        }
        else
        {
          *this = 0; /*0x569664*/
        }
      }
      v10 = 0xFFFFFFFF; /*0x56966b*/
      FormHeapFree((unsigned int)v9.m_data); /*0x569673*/
      v9.m_data = 0; /*0x56967b*/
      v9.m_bufLen = 0; /*0x56967f*/
      v9.m_dataLen = 0; /*0x569684*/
    }
  }
}
