double __thiscall sub_485260(void **this, int a2, int a3, int a4)
{
  float *v5; // eax
  float v7; // [esp+4h] [ebp-4h]

  v7 = kTerrainLODQuadRayDirectionZ; /*0x48526a*/
  v5 = (float *)OblivionDynamicCast( /*0x485280*/
                  *(this + 2),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESWeightForm `RTTI Type Descriptor',
                  0);
  if ( v5 ) /*0x48528a*/
  {
    v7 = v5[1]; /*0x485294*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0x78))(*(this + 2)) ) /*0x48529b*/
      return (float)0.0; /*0x4852a3*/
  }
  return v7; /*0x4852ab*/
}
