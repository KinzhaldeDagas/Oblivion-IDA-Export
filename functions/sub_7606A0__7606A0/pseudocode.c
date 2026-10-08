// Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
// DX11 restricted replacement lifetime audit 2026-10-01: native allocator reads global B42044, pops pool data[--count], and performs plain ADD at pass+60. These native reference operations are not interlocked; using CAS externally does not itself provide writer exclusion.
NiD3DPass **__cdecl sub_7606A0(NiD3DPass **a1)
{
  unsigned int *v1; // ecx
  _DWORD *v2; // esi
  NiD3DPass ***v3; // edi
  _DWORD *v4; // ebx
  NiD3DPass **v5; // eax
  NiD3DPass *v6; // ecx
  NiD3DPass **result; // eax

  v1 = (unsigned int *)LODWORD(MEMORY[0xB3F9B0][0x9A5]); /*0x7606a0*/
  v2 = (_DWORD *)(LODWORD(MEMORY[0xB3F9B0][0x9A5]) + 8); /*0x7606ac*/
  v3 = (NiD3DPass ***)LODWORD(MEMORY[0xB3F9B0][0x9A5]); /*0x7606b0*/
  if ( !*v2 ) /*0x7606a6*/
  {
    v4 = v1 + 3; /*0x7606b8*/
    sub_760600(v1, v1[3]); /*0x7606bc*/
    *v4 *= 2; /*0x7606c5*/
  }
  v5 = *v3; /*0x7606c8*/
  v6 = **v3; /*0x7606ca*/
  *v5 = v5[--*v2]; /*0x7606d6*/
  result = a1; /*0x7606d8*/
  *a1 = v6; /*0x7606dd*/
  if ( v6 ) /*0x7606e5*/
    ++v6->RefCount; /*0x7606e7*/
  if ( !v6->RendererOwned ) /*0x7606ea*/
    v6->RendererOwned = 1; /*0x7606f0*/
  return result; /*0x7606dc*/
}
