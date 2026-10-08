// NiGeometry shader smart-pointer setter: releases the old BSShader, stores the new shader, and AddRefs it when the pointer changes.
// DX11 per-object lifetime audit 2026-10-01: NiGeometry has strong +4 NiRef associations at +AC (NiPropertyState), +B4 (geometry data) and +BC (shader). Constructor7227B0 retains incoming data; getter405760 returns/retains the +AC state; updater722B30 replaces +AC with decrement/destroy/assign/increment semantics; shader setter4EC910 does the same at+BC. NiPropertyState vtableA80984 has TEN strong slots from+8 through+2C; destructor731700 decrements each pointee+4 and destroys-on-zero. Ordinary Lighting30 uses slot4 (+18) with property vtableA9576C and shader vtableA930C4. These owner relationships permit separately qualified positive-CAS pins; mutable raw arrays, pooled render-pass nodes, texture-stage objects and COM resources are separate lifetimes and must not be assumed retained by this proof.
void __thiscall NiGeometry_SetShader(NiGeometry *this, BSShader *shader)
{
  BSShader *v3; // esi

  v3 = (BSShader *)this->member.shader; /*0x4ec914*/
  if ( v3 != shader ) /*0x4ec921*/
  {
    if ( v3 ) /*0x4ec925*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->member) ) /*0x4ec92b*/
        v3->__vftable->super.super.super.super.Destructor((NiRefObject *)v3, 1); /*0x4ec941*/
    }
    this->member.shader = (NiObject *)shader; /*0x4ec945*/
    if ( shader ) /*0x4ec94b*/
      InterlockedIncrement((volatile LONG *)&shader->member); /*0x4ec951*/
  }
}
