//
//
// [2026-10-02 tangent ownership pass] Verified ownsArrays+8 guards both FormHeap frees at +0x0C/+0x10; clears each pointer, restores NiRefObject vtable and decrements object count. Fallout destructor 0x8288DF58 has matching ownership behavior. Plugin cache arrays must not be borrowed into an owning property; corrected bridge deep-copies them.
void __thiscall BSShaderPPLightingProperty::TangentSpaceData::~TangentSpaceData(
        BSShaderPPLightingProperty::TangentSpaceData *this)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 8) == 0; /*0x7d7353*/
  *(_DWORD *)this = &BSShaderPPLightingProperty::TangentSpaceData::`vftable'; /*0x7d7357*/
  if ( !v2 ) /*0x7d735d*/
  {
    if ( *((_DWORD *)this + 3) ) /*0x7d735f*/
      FormHeapFree(*((_DWORD *)this + 3)); /*0x7d7367*/
  }
  v2 = *((_BYTE *)this + 8) == 0; /*0x7d736f*/
  *((_DWORD *)this + 3) = 0; /*0x7d7373*/
  if ( !v2 ) /*0x7d737a*/
  {
    if ( *((_DWORD *)this + 4) ) /*0x7d737c*/
      FormHeapFree(*((_DWORD *)this + 4)); /*0x7d7384*/
  }
  *((_DWORD *)this + 4) = 0; /*0x7d7391*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7d7398*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x7d739e*/
}
