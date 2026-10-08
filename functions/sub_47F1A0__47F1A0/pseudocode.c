// Verified generic NiLines square-outline factory: four XY-plane corner vertices from the supplied half-extent, one repeated color, and four enabled line flags; returns NiLines geometry.
NiAVObject *__cdecl NiLines_CreateSquareOutline(float halfExtent, const NiColorAlpha *color)
{
  NiPoint3 *v2; // esi
  NiColorAlpha *v3; // eax
  NiColorAlpha *v4; // edi
  NiColorAlpha *v5; // ebx
  double v6; // st7
  int v7; // edi
  int v8; // edx
  NiColorAlpha *v9; // eax
  NiAVObject *v10; // eax
  float v12; // [esp+18h] [ebp-18h]
  float v13; // [esp+18h] [ebp-18h]
  float v14; // [esp+1Ch] [ebp-14h]
  float v15; // [esp+1Ch] [ebp-14h]
  float halfExtenta; // [esp+34h] [ebp+4h]

  v2 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x47f1d0*/
  v3 = (NiColorAlpha *)FormHeapAlloc(0x40u); /*0x47f1d2*/
  v4 = v3; /*0x47f1d7*/
  if ( v3 ) /*0x47f1ea*/
  {
    sub_401080(v3, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x47f1f6*/
    v5 = v4; /*0x47f1fb*/
  }
  else
  {
    v5 = 0; /*0x47f1ff*/
  }
  v6 = halfExtent; /*0x47f210*/
  v7 = FormHeapAlloc(4u); /*0x47f216*/
  halfExtenta = -halfExtent; /*0x47f21d*/
  v2->x = halfExtenta; /*0x47f237*/
  v2->y = halfExtenta; /*0x47f23d*/
  v2->z = 0.0; /*0x47f24a*/
  v14 = v6; /*0x47f253*/
  v2[1].x = halfExtenta; /*0x47f257*/
  v2[1].y = v14; /*0x47f264*/
  v12 = v6; /*0x47f26d*/
  v2[1].z = 0.0; /*0x47f271*/
  v15 = v6; /*0x47f278*/
  v2[2].x = v12; /*0x47f286*/
  v13 = v6; /*0x47f28f*/
  v2[2].y = v15; /*0x47f293*/
  v2[2].z = 0.0; /*0x47f2a0*/
  v2[3].x = v13; /*0x47f2a7*/
  v2[3].y = halfExtenta; /*0x47f2b2*/
  v2[3].z = 0.0; /*0x47f2b9*/
  v8 = 0; /*0x47f2bc*/
  v9 = v5; /*0x47f2be*/
  do /*0x47f2e3*/
  {
    *(_DWORD *)v9 = *(_DWORD *)color; /*0x47f2c2*/
    *((_DWORD *)v9 + 1) = *((_DWORD *)color + 1); /*0x47f2c7*/
    *((_DWORD *)v9 + 2) = *((_DWORD *)color + 2); /*0x47f2cd*/
    *((_DWORD *)v9 + 3) = *((_DWORD *)color + 3); /*0x47f2d3*/
    *(_BYTE *)(v8 + v7) = 1; /*0x47f2d6*/
    ++v8; /*0x47f2da*/
    v9 = (NiColorAlpha *)((char *)v9 + 0x10); /*0x47f2dd*/
  }
  while ( v8 < 4 ); /*0x47f2e3*/
  v10 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x47f2ea*/
  if ( v10 ) /*0x47f300*/
    return NiLines_ctorWithGeometryData(v10, 4u, v2, v5, 0, 0, 0, v7); /*0x47f30f*/
  else
    return 0; /*0x47f328*/
}
