// Returns Mesh from metadata object found by 0x8AFCE0; part of ray hit -> NiAVObject resolution.
// Shared folded getter: mov eax,[ecx+8]; ret. NiObjectNET_GetExtraData6FF9C0 uses it to read an extra-data name pointer. Other call sites use the same offset for different object fields; it is not exclusively a mesh or name accessor.
NiAVObject *__thiscall sub_452A60(Atmosphere *this)
{
  return this->Mesh; /*0x452a63*/
}
