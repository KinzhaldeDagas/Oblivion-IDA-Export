// TESAnimGroup encoded key accessor: returns 16-bit group key at TESAnimGroup +0x08.
// Shared getter naming correction 2026-10-01: exact body mov ax,[ecx+8];ret is reused by multiple unrelated types (including TESActorBaseData/TESAnimGroup contexts and NiGeometryData vtable+50). Neutral Shared_GetWordAtOffset08 name avoids assigning a universal actor-specific meaning. NiTriShapeData A7F5A4 and NiTriStripsData A7F32C both use it for authored vertex count.
unsigned __int16 __thiscall Shared_GetWordAtOffset08(void *object)
{
  return *((_WORD *)object + 4); /*0x51a9f4*/
}
