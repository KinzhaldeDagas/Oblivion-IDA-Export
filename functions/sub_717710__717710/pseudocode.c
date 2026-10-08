//
// Verified thiscall one NiCloningProcess stack arg, ret4. Allocates C0, calls7226C0 then explicitly installs native NiTriShape vtable A7ED5C, and CopyMembers thunk722700. A plugin subclass must override CreateClone to preserve its private vtable and registry metadata; merely inheriting this function loses both. Fallout82BFB5B0 corroborates allocation/constructor/vptr/copy sequence with different size.
// [2026-10-03 implemented frond clone correction] Plugin private shape vtable now overrides+18 with factory: allocateC0, constructor7226C0, install private vtable, reserve per-shape metadata before native CopyMembers722700 registers clone map. Preserves native geometry-data sharing, property/extra-data/controller cloning. Allocation or metadata reservation failure returns null before native map registration. +38 wrapper guards absent clone map entry then calls native723050 and remaps root/group metadata through55E000.
void *__thiscall OB_NiTriShape_CreateClone(void *this, void *cloningProcess)
{
  NiAVObject *v3; // eax
  NiGeometry *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x71773a*/
  v4 = (NiGeometry *)v3; /*0x71773f*/
  if ( v3 ) /*0x717752*/
  {
    sub_7226C0(v3); /*0x717756*/
    v4->__vftable = (NiGeometryVtbl *)&NiTriShape::`vftable'; /*0x71775b*/
  }
  else
  {
    v4 = 0; /*0x717763*/
  }
  j_NiGeometry_CopyMembersForClone((NiGeometry *)this, v4, cloningProcess); /*0x717775*/
  return v4; /*0x71777c*/
}
