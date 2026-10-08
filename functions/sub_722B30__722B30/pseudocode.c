// Pass222: NiGeometry override path; clones incoming NiPropertyState and stores result at NiGeometry +0xAC.
// DX11 per-object lifetime audit 2026-10-01: NiGeometry has strong +4 NiRef associations at +AC (NiPropertyState), +B4 (geometry data) and +BC (shader). Constructor7227B0 retains incoming data; getter405760 returns/retains the +AC state; updater722B30 replaces +AC with decrement/destroy/assign/increment semantics; shader setter4EC910 does the same at+BC. NiPropertyState vtableA80984 has TEN strong slots from+8 through+2C; destructor731700 decrements each pointee+4 and destroys-on-zero. Ordinary Lighting30 uses slot4 (+18) with property vtableA9576C and shader vtableA930C4. These owner relationships permit separately qualified positive-CAS pins; mutable raw arrays, pooled render-pass nodes, texture-stage objects and COM resources are separate lifetimes and must not be assumed retained by this proof.
// Verified comparative divergence: Fallout PPC 822034B8 updates an EMBEDDED property state at NiGeometry+C0 under PropertyStateCrit, whereas Oblivion722B30 replaces a strong state POINTER at+AC. Fallout82C139A0 destroys seven inline state slots; Oblivion731700 destroys ten slots at state+8 on a separately refcounted NiPropertyState. Do not transplant Fallout property-state layout, pinning, slot count or locking assumptions.
UInt32 *__thiscall sub_722B30(_DWORD *this, Ni2DBuffer *a2)
{
  UInt32 *result; // eax
  UInt32 **v4; // ebx
  int v5; // esi
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  bool v7; // zf
  Ni2DBuffer *v8; // esi

  result = sub_7077D0(this, (UInt32 *)&a2, a2, 1);// Fog property propagation decode: NiGeometry override merges local properties through 0x7077D0; geometry-local fog can override inherited slot +0x0C. /*0x722b64*/
  v4 = (UInt32 **)result; /*0x722b69*/
  v5 = *(this + 0x2B); /*0x722b6b*/
  v6 = InterlockedDecrement; /*0x722b73*/
  if ( v5 != *result ) /*0x722b81*/
  {
    if ( v5 ) /*0x722b85*/
    {
      if ( !v6((volatile LONG *)(v5 + 4)) ) /*0x722b8b*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x722b9d*/
    }
    result = *v4; /*0x722b9f*/
    v7 = *v4 == 0; /*0x722ba1*/
    *(this + 0x2B) = *v4;                       // Fog property propagation decode: stores final NiGeometry +0xAC property state; shader writers read fog from this state's +0x0C slot when present. /*0x722ba3*/
    if ( !v7 ) /*0x722ba9*/
      result = (UInt32 *)InterlockedIncrement((volatile LONG *)result + 1); /*0x722baf*/
  }
  v8 = a2; /*0x722bb5*/
  if ( a2 ) /*0x722bc3*/
  {
    result = (UInt32 *)v6((volatile LONG *)&a2->members); /*0x722bc9*/
    if ( !result ) /*0x722bcd*/
    {
      if ( v8 ) /*0x722bd1*/
        return (*(UInt32 *(__thiscall **)(Ni2DBuffer *, int))v8->__vftable)(v8, 1); /*0x722bdb*/
    }
  }
  return result; /*0x722bdd*/
}
