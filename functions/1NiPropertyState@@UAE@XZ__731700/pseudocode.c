// Fog property propagation decode: NiPropertyState destructor releases all managed slots, including fog slot +0x0C when populated.
// DX11 per-object lifetime audit 2026-10-01: NiGeometry has strong +4 NiRef associations at +AC (NiPropertyState), +B4 (geometry data) and +BC (shader). Constructor7227B0 retains incoming data; getter405760 returns/retains the +AC state; updater722B30 replaces +AC with decrement/destroy/assign/increment semantics; shader setter4EC910 does the same at+BC. NiPropertyState vtableA80984 has TEN strong slots from+8 through+2C; destructor731700 decrements each pointee+4 and destroys-on-zero. Ordinary Lighting30 uses slot4 (+18) with property vtableA9576C and shader vtableA930C4. These owner relationships permit separately qualified positive-CAS pins; mutable raw arrays, pooled render-pass nodes, texture-stage objects and COM resources are separate lifetimes and must not be assumed retained by this proof.
// Verified comparative divergence: Fallout PPC 822034B8 updates an EMBEDDED property state at NiGeometry+C0 under PropertyStateCrit, whereas Oblivion722B30 replaces a strong state POINTER at+AC. Fallout82C139A0 destroys seven inline state slots; Oblivion731700 destroys ten slots at state+8 on a separately refcounted NiPropertyState. Do not transplant Fallout property-state layout, pinning, slot count or locking assumptions.
void __thiscall NiPropertyState::~NiPropertyState(NiPropertyState *this)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // esi

  *(_DWORD *)this = &NiPropertyState::`vftable'; /*0x73172b*/
  v2 = (int *)((char *)this + 8); /*0x731739*/
  v3 = 0xA; /*0x73173c*/
  do /*0x73176f*/
  {
    v4 = *v2; /*0x731741*/
    if ( *v2 ) /*0x731741*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x73174b*/
      {
        if ( v4 ) /*0x731757*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x731761*/
      }
      *v2 = 0; /*0x731763*/
    }
    ++v2; /*0x731769*/
    --v3; /*0x73176c*/
  }
  while ( v3 ); /*0x73176f*/
  _LN21((char *)this + 8, 4u, 0xA, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x731783*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x73178d*/
  InterlockedDecrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x731793*/
}
