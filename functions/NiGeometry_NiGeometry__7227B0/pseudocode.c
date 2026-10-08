//
// DX11 per-object lifetime audit 2026-10-01: NiGeometry has strong +4 NiRef associations at +AC (NiPropertyState), +B4 (geometry data) and +BC (shader). Constructor7227B0 retains incoming data; getter405760 returns/retains the +AC state; updater722B30 replaces +AC with decrement/destroy/assign/increment semantics; shader setter4EC910 does the same at+BC. NiPropertyState vtableA80984 has TEN strong slots from+8 through+2C; destructor731700 decrements each pointee+4 and destroys-on-zero. Ordinary Lighting30 uses slot4 (+18) with property vtableA9576C and shader vtableA930C4. These owner relationships permit separately qualified positive-CAS pins; mutable raw arrays, pooled render-pass nodes, texture-stage objects and COM resources are separate lifetimes and must not be assumed retained by this proof.
NiGeometry *__thiscall NiGeometry::NiGeometry(NiGeometry *this, NiGeometryData *a2)
{
  NiAVObject::NiAVObject((NiAVObject *)this); /*0x7227b4*/
  this->__vftable = (NiGeometryVtbl *)&NiGeometry::`vftable'; /*0x7227c1*/
  this->member.unk0AC = 0; /*0x7227c7*/
  this->member.unk0B0 = 0; /*0x7227cd*/
  this->member.geomData = a2; /*0x7227d3*/
  if ( a2 ) /*0x7227d9*/
    InterlockedIncrement((volatile LONG *)&a2->member); /*0x7227df*/
  this->member.skinData = 0; /*0x7227e5*/
  this->member.shader = 0; /*0x7227eb*/
  return this; /*0x7227f1*/
}
