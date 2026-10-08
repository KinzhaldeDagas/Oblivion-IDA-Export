// Verified NiSCMExtraData constructor, 2026-09-30: calls NiExtraData initialization, installs vtable AB2914, and assigns the supplied name. Stores two capacities at+C/+10, zeros used counts at+14/+18, and allocates two arrays of 8-byte elements at+1C/+20 (null for zero capacity). Comparative Fallout constructor82C1F748 has an expanded program-type layout; its offsets must not be copied. Capacity0/1 are probably vertex/pixel from the family correspondence, but confirm Oblivion AddEntry indexing before promoting those member names.
// Verified stage layout 2026-09-30: vertex/pixel capacities at+C/+10, cursors at+14/+18, and NiSCMConstantEntry arrays at+1C/+20. Stage names are now proved by vertex handler9A61E0 (program numeric setter+28, cursor+14/array+1C) and pixel handler9A35A0 (setter+30, cursor+18/array+20), not merely inferred from Fallout. RTTI atAB2914 identifies NiSCMExtraData -> NiExtraData -> NiObject -> NiRefObject. Typed size24h is verified.
NiSCMExtraData *__thiscall NiSCMExtraData_Constructor(
        NiSCMExtraData *this,
        char *name,
        unsigned int vertexCapacity,
        unsigned int pixelCapacity)
{
  sub_721350((NiObject *)this); /*0x9a2309*/
  this->base.__vftable = (NiExtraDataVtbl *)&NiSCMExtraData::`vftable'; /*0x9a231b*/
  sub_721440((unsigned int *)this, name); /*0x9a2321*/
  this->vertexCapacity = vertexCapacity; /*0x9a232c*/
  this->vertexCursor = 0; /*0x9a232f*/
  if ( vertexCapacity )
    this->vertexEntries = (NiSCMConstantEntry *)FormHeapAlloc(
                                                  (unsigned __int64)vertexCapacity >> 0x1D != 0
                                                ? 0xFFFFFFFF
                                                : 8 * vertexCapacity);
  else
    this->vertexEntries = 0; /*0x9a2352*/
  this->pixelCapacity = pixelCapacity; /*0x9a235b*/
  this->pixelCursor = 0; /*0x9a235e*/
  if ( pixelCapacity )
    this->pixelEntries = (NiSCMConstantEntry *)FormHeapAlloc(
                                                 (unsigned __int64)pixelCapacity >> 0x1D != 0
                                               ? 0xFFFFFFFF
                                               : 8 * pixelCapacity);
  else
    this->pixelEntries = 0; /*0x9a2381*/
  return this; /*0x9a2386*/
}
