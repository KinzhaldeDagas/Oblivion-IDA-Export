double __thiscall ContainerEntryExtraData_GetHealth(void **this, char a2)
{
  void *v3; // edi
  ExtraDataList **v4; // eax
  ExtraDataList *v5; // esi
  double result; // st7
  double v7; // st7
  double v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+18h] [ebp+4h]
  float v10; // [esp+18h] [ebp+4h]
  int v11; // [esp+18h] [ebp+4h]
  int v12; // [esp+18h] [ebp+4h]

  v3 = OblivionDynamicCast(
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return flt_A30634;
  v4 = (ExtraDataList **)*this;
  if ( *this )
  {
    v5 = *v4;
    if ( *v4 )
    {
      if ( ExtraDataList_GetHealthData(*v4) != flt_A30634 )
      {
        result = ExtraDataList_GetHealthData(v5);
        if ( a2 )
        {
          v8 = result;
          v9 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3);
          v7 = (double)v9;
          if ( v9 < 0 )
            v7 = v7 + flt_A2FC78;
          v10 = v8 / v7 * fCostant_100;
          return sub_4842F0(v10);
        }
        return result;
      }
      if ( !a2 )
      {
        v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3);
        result = (double)v11;
        if ( v11 < 0 )
          return result + flt_A2FC78;
        return result;
      }
      return flt_A2FE7C;
    }
  }
  if ( a2 )
    return flt_A2FE7C;
  v12 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3);
  result = (double)v12;
  if ( v12 < 0 )
    return result + flt_A2FC78;
  return result;
}
