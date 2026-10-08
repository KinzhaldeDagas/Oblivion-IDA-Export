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

  v3 = OblivionDynamicCast( /*0x48486e*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x484875*/
    return kTerrainLODQuadRayDirectionZ; /*0x48495c*/
  v4 = (ExtraDataList **)*this; /*0x48487b*/
  if ( *this ) /*0x48487b*/
  {
    v5 = *v4; /*0x484885*/
    if ( *v4 ) /*0x484885*/
    {
      if ( ExtraDataList_GetHealthData(*v4) != kTerrainLODQuadRayDirectionZ ) /*0x4848a1*/
      {
        result = ExtraDataList_GetHealthData(v5); /*0x4848a5*/
        if ( a2 ) /*0x4848af*/
        {
          v8 = result; /*0x4848b7*/
          v9 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3); /*0x4848c4*/
          v7 = (double)v9; /*0x4848c8*/
          if ( v9 < 0 ) /*0x4848cc*/
            v7 = v7 + flt_A2FC78; /*0x4848ce*/
          v10 = v8 / v7 * fCostant_100; /*0x4848df*/
          return sub_4842F0(v10); /*0x4848ea*/
        }
        return result; /*0x4848f7*/
      }
      if ( !a2 ) /*0x4848ff*/
      {
        v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3); /*0x48490c*/
        result = (double)v11; /*0x484910*/
        if ( v11 < 0 ) /*0x484914*/
          return result + flt_A2FC78; /*0x484916*/
        return result; /*0x484921*/
      }
      return flt_A2FE7C; /*0x48492f*/
    }
  }
  if ( a2 ) /*0x484937*/
    return flt_A2FE7C; /*0x484937*/
  v12 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3); /*0x484944*/
  result = (double)v12; /*0x484948*/
  if ( v12 < 0 ) /*0x48494c*/
    return result + flt_A2FC78; /*0x48494e*/
  return result; /*0x4848f2*/
}
