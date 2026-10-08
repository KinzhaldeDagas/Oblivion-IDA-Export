void __thiscall sub_627D60(int *this, int a2)
{
  int *v3; // edi
  TargetData *v4; // ecx
  ObjectType v5; // eax

  v3 = this + 0x15; /*0x627d69*/
  BSSimpleList_Remove(this + 0x15, a2); /*0x627d6f*/
  v4 = (TargetData *)*(this + 0xA); /*0x627d74*/
  if ( v4 ) /*0x627d79*/
  {
    v5.form = sub_569E60(v4).form; /*0x627d7b*/
    if ( v5.objectCode ) /*0x627d82*/
    {
      if ( v5.objectCode == a2 ) /*0x627d86*/
      {
        if ( v3[1] || *v3 ) /*0x627d8e*/
        {
          TeSPackage_TargetData_SetTargetREFR((_DWORD *)*(this + 0xA), *v3); /*0x627d99*/
          TESPackage_LocationData_SetReference((_DWORD *)*(this + 9), *v3); /*0x627da1*/
        }
        else
        {
          TeSPackage_TargetData_SetTargetREFR((_DWORD *)*(this + 0xA), 0); /*0x627da8*/
          TESPackage_LocationData_SetReference((_DWORD *)*(this + 9), 0); /*0x627db2*/
        }
      }
    }
  }
  if ( a2 == *(this + 0x18) ) /*0x627dba*/
    *(this + 0x18) = 0; /*0x627dbc*/
}
