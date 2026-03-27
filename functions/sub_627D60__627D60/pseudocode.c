int __thiscall sub_627D60(int *this, int a2)
{
  int *v3; // edi
  int result; // eax
  TargetData *v5; // ecx

  v3 = this + 0x15;
  result = BSSimpleList_Remove(this + 0x15, a2);
  v5 = (TargetData *)*(this + 0xA);
  if ( v5 )
  {
    result = (int)sub_569E60(v5).form;
    if ( result )
    {
      if ( result == a2 )
      {
        if ( v3[1] || *v3 )
        {
          TeSPackage_TargetData_SetTargetREFR((_DWORD *)*(this + 0xA), *v3);
          result = TESPackage_LocationData_SetReference((_DWORD *)*(this + 9), *v3);
        }
        else
        {
          TeSPackage_TargetData_SetTargetREFR((_DWORD *)*(this + 0xA), 0);
          result = TESPackage_LocationData_SetReference((_DWORD *)*(this + 9), 0);
        }
      }
    }
  }
  if ( a2 == *(this + 0x18) )
    *(this + 0x18) = 0;
  return result;
}
