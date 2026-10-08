// Returns a strong reference to NiGeometry+0xAC NiPropertyState through the output pointer. The active BSShaderProperty is propertyState+0x18; AccumulateGeometry uses that property as the owner and producer of the RenderPass list.
NiPropertyState **__thiscall NiGeometry_GetPropertyState(NiGeometry *this, NiPropertyState **output)
{
  volatile LONG *unk0AC; // eax

  unk0AC = (volatile LONG *)this->member.unk0AC;// NiGeometry+0xAC is its strong-owned NiPropertyState pointer. /*0x405761*/
  *output = (NiPropertyState *)unk0AC;          // Publish the NiPropertyState pointer through the output NiPointer before incrementing its reference count. /*0x405776*/
  if ( unk0AC ) /*0x405778*/
    InterlockedIncrement(unk0AC + 1); /*0x40577e*/
  return output; /*0x405786*/
}
