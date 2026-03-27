double __thiscall sub_485260(void **this, int a2, int a3, int a4)
{
  float *v5; // eax
  float v7; // [esp+4h] [ebp-4h]

  v7 = flt_A30634;
  v5 = (float *)OblivionDynamicCast(
                  *(this + 2),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESWeightForm `RTTI Type Descriptor',
                  0);
  if ( v5 )
  {
    v7 = v5[1];
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0x78))(*(this + 2)) )
      return (float)0.0;
  }
  return v7;
}
