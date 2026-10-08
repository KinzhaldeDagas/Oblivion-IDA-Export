// Guarantees transform authored-data coverage for [start,end] in place by delegating to NiTransformData_GuaranteeTimeRange when data +0x2C is non-null.
void __thiscall NiTransformInterpolator_GuaranteeTimeRange(int *this, float a2, float a3)
{
  int v3; // ecx

  v3 = *(this + 0xB); /*0x6d5fb0*/
  if ( v3 ) /*0x6d5fb5*/
    NiTransformData_GuaranteeTimeRange(v3, a2, a3); /*0x6d5fc9*/
}
