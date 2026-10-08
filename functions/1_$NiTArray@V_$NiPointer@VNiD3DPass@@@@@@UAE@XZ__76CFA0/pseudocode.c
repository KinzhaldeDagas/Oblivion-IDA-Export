//
// DX11 lifetime audit 2026-10-01: destructor traverses the allocation cookie DWORD at data-4, not merely NiTArray end/live, then frees the allocation. Full-capacity pass ownership capture must bound and match that cookie; a shader pin does not freeze this raw allocation.
void __thiscall NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(_DWORD *this)
{
  int v1; // eax
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  int i; // edi
  NiD3DPass *v6; // ecx

  v1 = *(this + 1); /*0x76cfa0*/
  *this = &NiTArray<NiPointer<NiD3DPass>>::`vftable'; /*0x76cfa5*/
  if ( v1 ) /*0x76cfab*/
  {
    v2 = *(_DWORD *)(v1 - 4); /*0x76cfb0*/
    v3 = v1 - 4; /*0x76cfb3*/
    v4 = v1 + 4 * v2; /*0x76cfb6*/
    for ( i = v2 - 1; i >= 0; --i ) /*0x76cfbc*/
    {
      v6 = *(NiD3DPass **)(v4 - 4); /*0x76cfc0*/
      v4 -= 4; /*0x76cfc3*/
      if ( v6 ) /*0x76cfc8*/
      {
        if ( v6->RefCount-- == 1 ) /*0x76cfca*/
          NiD3DPass_ReleaseToPool(v6); /*0x76cfd0*/
      }
    }
    FormHeapFree(v3); /*0x76cfdb*/
  }
}
