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

  v3 = 0;
  if ( arg0 )
    a2 = (int)TESForm_GetOverrideFile(arg0, 0xFFFFFFFF);
  else
    a2 = 0;
  while ( this )
  {
    if ( !*(this + 1) && !*this )
      break;
    *(_DWORD *)ArgList = *this;
    if ( arg0 )
      TESForm_ResolveFormID((UInt32 *)ArgList, (Data *)a2);
    v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
    v5 = OblivionDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESPackage `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      *this = (int)v5;
      v3 = this;
      this = (int *)*(this + 1);
    }
    else
    {
      v9.m_data = 0;
      v9.m_dataLen = 0;
      v9.m_bufLen = 0;
      v10 = 0;
      if ( arg0 )
        arg0->vtbl->GetDescription(arg0, &v9);
      else
        BSStringT_Set(&v9, "UNKNOWN form", 0);
      PrintError("Could not find Package (%08X) for %s.", *(_DWORD *)ArgList, v9.m_data);
      if ( v3 )
      {
        BSSimpleList_Remove(v3, *(int *)ArgList);
        this = (int *)v3[1];
      }
      else
      {
        v6 = (int *)*(this + 1);
        if ( v6 )
        {
          *(this + 1) = v6[1];
          *this = *v6;
          FormHeapFree((unsigned int)v6);
        }
        else
        {
          *this = 0;
        }
      }
      v10 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)v9.m_data);
      v9.m_data = 0;
      v9.m_bufLen = 0;
      v9.m_dataLen = 0;
    }
  }
}
