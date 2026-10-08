// Verified generic NiLines_CreateSegment: copies two endpoint positions and two per-vertex colors, supplies line flags [1,0], and returns a two-vertex NiLines segment. TESPathGrid_RebuildRenderedGraph calls it for adjacency edges.
NiAVObject *__cdecl NiLines_CreateSegment(
        const NiPoint3 *start,
        const NiColorAlpha *startColor,
        const NiPoint3 *end,
        const NiColorAlpha *endColor)
{
  NiPoint3 *v4; // edi
  NiColorAlpha *v5; // eax
  NiColorAlpha *v6; // esi
  _BYTE *v7; // ebp
  NiAVObject *v8; // eax

  v4 = (NiPoint3 *)FormHeapAlloc(0x18u); /*0x47f09a*/
  *v4 = *start; /*0x47f0a2*/
  v4[1] = *end; /*0x47f0b6*/
  v5 = (NiColorAlpha *)FormHeapAlloc(0x20u); /*0x47f0c7*/
  v6 = v5; /*0x47f0cc*/
  if ( v5 ) /*0x47f0df*/
    sub_401080(v5, 0x10, 2, (void *(__thiscall *)(void *))sub_47EA50); /*0x47f0eb*/
  else
    v6 = 0; /*0x47f0f2*/
  *(_DWORD *)v6 = *(_DWORD *)startColor; /*0x47f0fa*/
  *((_DWORD *)v6 + 1) = *((_DWORD *)startColor + 1); /*0x47f0ff*/
  *((_DWORD *)v6 + 2) = *((_DWORD *)startColor + 2); /*0x47f105*/
  *((_DWORD *)v6 + 3) = *((_DWORD *)startColor + 3); /*0x47f10f*/
  *((_DWORD *)v6 + 4) = *(_DWORD *)endColor; /*0x47f114*/
  *((_DWORD *)v6 + 5) = *((_DWORD *)endColor + 1); /*0x47f11a*/
  *((_DWORD *)v6 + 6) = *((_DWORD *)endColor + 2); /*0x47f120*/
  *((_DWORD *)v6 + 7) = *((_DWORD *)endColor + 3); /*0x47f130*/
  v7 = (_BYTE *)FormHeapAlloc(2u); /*0x47f138*/
  *v7 = 1; /*0x47f13f*/
  v7[1] = 0; /*0x47f143*/
  v8 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x47f147*/
  if ( v8 ) /*0x47f15d*/
    return NiLines_ctorWithGeometryData(v8, 2u, v4, v6, 0, 0, 0, (int)v7); /*0x47f16c*/
  else
    return 0; /*0x47f184*/
}
