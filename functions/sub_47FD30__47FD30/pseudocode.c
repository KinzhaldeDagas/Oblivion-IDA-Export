// Verified generic NiTriShape geometry factory, used by PathGrid rendering and multiple other callers. It builds six octahedron vertices (four ±scale X/Y equatorial points and two ±scale*sqrt(2) Z poles), repeats a supplied NiColorAlpha for all six, writes 24 u16 indices for eight triangular faces, and returns a NiTriShape. This constructs a filled octahedron surface; wireframe is a separate scene property.
NiAVObject *__cdecl NiTriShape_CreateOctahedronGeometry(float scale, const NiColorAlpha *vertexColor)
{
  NiPoint3 *v2; // ebx
  double v3; // st6
  double v4; // st4
  NiColorAlpha *v5; // eax
  NiColorAlpha *v6; // edi
  int v7; // esi
  NiAVObject *v8; // eax
  float v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+18h] [ebp-14h]
  float v12; // [esp+1Ch] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-10h]
  float scalea; // [esp+30h] [ebp+4h]

  v2 = (NiPoint3 *)FormHeapAlloc(0x48u); /*0x47fd64*/
  v3 = scale; /*0x47fd6e*/
  v2->x = 0.0; /*0x47fd78*/
  v4 = dbl_A3D660; /*0x47fd7a*/
  v2->y = 0.0; /*0x47fd80*/
  v12 = scale * v4; /*0x47fd89*/
  v2->z = v12; /*0x47fd93*/
  scalea = -scale; /*0x47fd98*/
  v2[1].x = scalea; /*0x47fdaa*/
  v11 = v3; /*0x47fdad*/
  v2[1].y = v11; /*0x47fdb7*/
  v2[1].z = 0.0; /*0x47fdc4*/
  v2[2].x = v11; /*0x47fdd9*/
  v2[2].y = v11; /*0x47fde6*/
  v10 = v3; /*0x47fde9*/
  v2[2].z = 0.0; /*0x47fdf3*/
  v2[3].x = v10; /*0x47fe00*/
  v2[3].y = scalea; /*0x47fe0d*/
  v2[3].z = 0.0; /*0x47fe22*/
  v2[4].x = scalea; /*0x47fe31*/
  v2[4].y = scalea; /*0x47fe3c*/
  v2[4].z = 0.0; /*0x47fe45*/
  v2[5].x = 0.0; /*0x47fe48*/
  v13 = scalea * v4; /*0x47fe4b*/
  v2[5].y = 0.0; /*0x47fe53*/
  v2[5].z = v13; /*0x47fe56*/
  v5 = (NiColorAlpha *)FormHeapAlloc(0x60u); /*0x47fe59*/
  v6 = v5; /*0x47fe61*/
  if ( v5 ) /*0x47fe71*/
    sub_401080(v5, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50); /*0x47fe7d*/
  else
    v6 = 0; /*0x47fe84*/
  *(_DWORD *)v6 = *(_DWORD *)vertexColor; /*0x47fe8c*/
  *((_DWORD *)v6 + 1) = *((_DWORD *)vertexColor + 1); /*0x47fe91*/
  *((_DWORD *)v6 + 2) = *((_DWORD *)vertexColor + 2); /*0x47fe97*/
  *((_DWORD *)v6 + 3) = *((_DWORD *)vertexColor + 3); /*0x47fe9d*/
  *((_DWORD *)v6 + 4) = *(_DWORD *)vertexColor; /*0x47fea2*/
  *((_DWORD *)v6 + 5) = *((_DWORD *)vertexColor + 1); /*0x47fea8*/
  *((_DWORD *)v6 + 6) = *((_DWORD *)vertexColor + 2); /*0x47feae*/
  *((_DWORD *)v6 + 7) = *((_DWORD *)vertexColor + 3); /*0x47feb4*/
  *((_DWORD *)v6 + 8) = *(_DWORD *)vertexColor; /*0x47feb9*/
  *((_DWORD *)v6 + 9) = *((_DWORD *)vertexColor + 1); /*0x47febf*/
  *((_DWORD *)v6 + 0xA) = *((_DWORD *)vertexColor + 2); /*0x47fec5*/
  *((_DWORD *)v6 + 0xB) = *((_DWORD *)vertexColor + 3); /*0x47fecb*/
  *((_DWORD *)v6 + 0xC) = *(_DWORD *)vertexColor; /*0x47fed0*/
  *((_DWORD *)v6 + 0xD) = *((_DWORD *)vertexColor + 1); /*0x47fed6*/
  *((_DWORD *)v6 + 0xE) = *((_DWORD *)vertexColor + 2); /*0x47fedc*/
  *((_DWORD *)v6 + 0xF) = *((_DWORD *)vertexColor + 3); /*0x47fee2*/
  *((_DWORD *)v6 + 0x10) = *(_DWORD *)vertexColor; /*0x47fee7*/
  *((_DWORD *)v6 + 0x11) = *((_DWORD *)vertexColor + 1); /*0x47feed*/
  *((_DWORD *)v6 + 0x12) = *((_DWORD *)vertexColor + 2); /*0x47fef3*/
  *((_DWORD *)v6 + 0x13) = *((_DWORD *)vertexColor + 3); /*0x47fef9*/
  *((_DWORD *)v6 + 0x14) = *(_DWORD *)vertexColor; /*0x47fefe*/
  *((_DWORD *)v6 + 0x15) = *((_DWORD *)vertexColor + 1); /*0x47ff04*/
  *((_DWORD *)v6 + 0x16) = *((_DWORD *)vertexColor + 2); /*0x47ff0a*/
  *((_DWORD *)v6 + 0x17) = *((_DWORD *)vertexColor + 3); /*0x47ff1a*/
  v7 = FormHeapAlloc(0x30u); /*0x47ff22*/
  *(_WORD *)(v7 + 2) = 2; /*0x47ff35*/
  *(_WORD *)(v7 + 6) = 0; /*0x47ff39*/
  *(_WORD *)(v7 + 0xA) = 2; /*0x47ff3d*/
  *(_WORD *)(v7 + 0xC) = 0; /*0x47ff41*/
  *(_WORD *)(v7 + 0x1A) = 2; /*0x47ff4a*/
  *(_WORD *)v7 = 0; /*0x47ff53*/
  *(_WORD *)(v7 + 4) = 1; /*0x47ff58*/
  *(_WORD *)(v7 + 8) = 3; /*0x47ff5c*/
  *(_WORD *)(v7 + 0xE) = 4; /*0x47ff60*/
  *(_DWORD *)(v7 + 0x10) = 3; /*0x47ff64*/
  *(_WORD *)(v7 + 0x14) = 1; /*0x47ff6e*/
  *(_WORD *)(v7 + 0x16) = 4; /*0x47ff72*/
  *(_WORD *)(v7 + 0x18) = 1; /*0x47ff76*/
  *(_WORD *)(v7 + 0x1C) = 5; /*0x47ff7a*/
  *(_WORD *)(v7 + 0x1E) = 2; /*0x47ff7e*/
  *(_WORD *)(v7 + 0x20) = 3; /*0x47ff84*/
  *(_WORD *)(v7 + 0x22) = 5; /*0x47ff88*/
  *(_WORD *)(v7 + 0x24) = 3; /*0x47ff8c*/
  *(_WORD *)(v7 + 0x26) = 4; /*0x47ff90*/
  *(_WORD *)(v7 + 0x28) = 5; /*0x47ff94*/
  *(_WORD *)(v7 + 0x2A) = 4; /*0x47ff98*/
  *(_WORD *)(v7 + 0x2C) = 1; /*0x47ffa1*/
  *(_WORD *)(v7 + 0x2E) = 5; /*0x47ffa5*/
  v8 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x47ffa9*/
  if ( v8 ) /*0x47ffbb*/
    return NiTriShape_ctorWithGeometryData(v8, 6u, v2, 0, v6, 0, 0, 0, 8u, (UInt16 *)v7); /*0x47ffce*/
  else
    return 0; /*0x47ffe7*/
}
