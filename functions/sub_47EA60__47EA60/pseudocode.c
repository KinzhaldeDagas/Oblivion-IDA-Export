NiAVObject *__cdecl sub_47EA60(float a1, float a2, float a3, _DWORD *a4)
{
  double v4; // rt0
  double v5; // st7
  NiPoint3 *v6; // ebx
  double v7; // st6
  double v8; // st5
  NiColorAlpha *v9; // eax
  NiColorAlpha *v10; // edi
  UInt16 *v11; // esi
  NiAVObject *v12; // eax
  float v14; // [esp+14h] [ebp-18h]
  float v15; // [esp+14h] [ebp-18h]
  float v16; // [esp+14h] [ebp-18h]
  float v17; // [esp+14h] [ebp-18h]
  float v18; // [esp+14h] [ebp-18h]
  float v19; // [esp+14h] [ebp-18h]
  float v20; // [esp+18h] [ebp-14h]
  float v21; // [esp+18h] [ebp-14h]
  float v22; // [esp+30h] [ebp+4h]
  float v23; // [esp+30h] [ebp+4h]
  float v24; // [esp+30h] [ebp+4h]
  float v25; // [esp+30h] [ebp+4h]
  float v26; // [esp+34h] [ebp+8h]
  float v27; // [esp+38h] [ebp+Ch]

  v4 = dbl_A2FAA0; /*0x47ea95*/
  v22 = a1 * v4; /*0x47ea97*/
  v26 = a2 * v4; /*0x47eaa1*/
  v27 = v4 * a3; /*0x47eaa9*/
  v5 = v22; /*0x47eab2*/
  v6 = (NiPoint3 *)FormHeapAlloc(0x60u); /*0x47eab6*/
  v23 = -v22; /*0x47eabc*/
  v7 = v23; /*0x47eac0*/
  v6->x = v23; /*0x47ead0*/
  v6->y = v26; /*0x47eade*/
  v6->z = v27; /*0x47eaeb*/
  v14 = v5; /*0x47eaee*/
  v6[1].x = v14; /*0x47eaf8*/
  v6[1].y = v26; /*0x47eb05*/
  v6[1].z = v27; /*0x47eb12*/
  v15 = v5; /*0x47eb15*/
  v6[2].x = v15; /*0x47eb1f*/
  v24 = -v26; /*0x47eb24*/
  v8 = v24; /*0x47eb34*/
  v6[2].y = v24; /*0x47eb36*/
  v6[2].z = v27; /*0x47eb43*/
  v16 = v7; /*0x47eb46*/
  v6[3].x = v16; /*0x47eb50*/
  v6[3].y = v24; /*0x47eb5d*/
  v6[3].z = v27; /*0x47eb6a*/
  v17 = v7; /*0x47eb6d*/
  v6[4].x = v17; /*0x47eb77*/
  v6[4].y = v26; /*0x47eb84*/
  v25 = -v27; /*0x47eb89*/
  v18 = v5; /*0x47eb9b*/
  v6[4].z = v25; /*0x47eba5*/
  v6[5].x = v18; /*0x47ebb0*/
  v6[5].y = v26; /*0x47ebbd*/
  v6[5].z = v25; /*0x47ebca*/
  v20 = v8; /*0x47ebcd*/
  v6[6].x = v18; /*0x47ebd7*/
  v6[6].y = v20; /*0x47ebe4*/
  v19 = v7; /*0x47ebe7*/
  v6[6].z = v25; /*0x47ebef*/
  v21 = v8; /*0x47ebf2*/
  v6[7].x = v19; /*0x47ebfa*/
  v6[7].y = v21; /*0x47ec05*/
  v6[7].z = v25; /*0x47ec0d*/
  v9 = (NiColorAlpha *)FormHeapAlloc(0x80u); /*0x47ec10*/
  v10 = v9; /*0x47ec15*/
  if ( v9 ) /*0x47ec26*/
    sub_401080(v9, 0x10, 8, (void *(__thiscall *)(void *))sub_47EA50); /*0x47ec32*/
  else
    v10 = 0; /*0x47ec39*/
  *(_DWORD *)v10 = *a4; /*0x47ec41*/
  *((_DWORD *)v10 + 1) = a4[1]; /*0x47ec46*/
  *((_DWORD *)v10 + 2) = a4[2]; /*0x47ec4c*/
  *((_DWORD *)v10 + 3) = a4[3]; /*0x47ec52*/
  *((_DWORD *)v10 + 4) = *a4; /*0x47ec57*/
  *((_DWORD *)v10 + 5) = a4[1]; /*0x47ec5d*/
  *((_DWORD *)v10 + 6) = a4[2]; /*0x47ec63*/
  *((_DWORD *)v10 + 7) = a4[3]; /*0x47ec69*/
  *((_DWORD *)v10 + 8) = *a4; /*0x47ec6e*/
  *((_DWORD *)v10 + 9) = a4[1]; /*0x47ec74*/
  *((_DWORD *)v10 + 0xA) = a4[2]; /*0x47ec7a*/
  *((_DWORD *)v10 + 0xB) = a4[3]; /*0x47ec80*/
  *((_DWORD *)v10 + 0xC) = *a4; /*0x47ec85*/
  *((_DWORD *)v10 + 0xD) = a4[1]; /*0x47ec8b*/
  *((_DWORD *)v10 + 0xE) = a4[2]; /*0x47ec91*/
  *((_DWORD *)v10 + 0xF) = a4[3]; /*0x47ec97*/
  *((_DWORD *)v10 + 0x10) = *a4; /*0x47ec9c*/
  *((_DWORD *)v10 + 0x11) = a4[1]; /*0x47eca2*/
  *((_DWORD *)v10 + 0x12) = a4[2]; /*0x47eca8*/
  *((_DWORD *)v10 + 0x13) = a4[3]; /*0x47ecae*/
  *((_DWORD *)v10 + 0x14) = *a4; /*0x47ecb3*/
  *((_DWORD *)v10 + 0x15) = a4[1]; /*0x47ecb9*/
  *((_DWORD *)v10 + 0x16) = a4[2]; /*0x47ecbf*/
  *((_DWORD *)v10 + 0x17) = a4[3]; /*0x47ecc5*/
  *((_DWORD *)v10 + 0x18) = *a4; /*0x47ecca*/
  *((_DWORD *)v10 + 0x19) = a4[1]; /*0x47ecd0*/
  *((_DWORD *)v10 + 0x1A) = a4[2]; /*0x47ecd6*/
  *((_DWORD *)v10 + 0x1B) = a4[3]; /*0x47ecdc*/
  *((_DWORD *)v10 + 0x1C) = *a4; /*0x47ece1*/
  *((_DWORD *)v10 + 0x1D) = a4[1]; /*0x47ece7*/
  *((_DWORD *)v10 + 0x1E) = a4[2]; /*0x47eced*/
  *((_DWORD *)v10 + 0x1F) = a4[3]; /*0x47ed00*/
  v11 = (UInt16 *)FormHeapAlloc(0x90u); /*0x47ed08*/
  *v11 = 0; /*0x47ed19*/
  v11[1] = 2; /*0x47ed1c*/
  v11[2] = 1; /*0x47ed20*/
  v11[3] = 0; /*0x47ed24*/
  v11[4] = 3; /*0x47ed28*/
  v11[5] = 2; /*0x47ed2c*/
  v11[6] = 0; /*0x47ed30*/
  v11[7] = 7; /*0x47ed34*/
  v11[8] = 3; /*0x47ed3a*/
  v11[0xC] = 1; /*0x47ed43*/
  v11[0xF] = 1; /*0x47ed47*/
  v11[0x12] = 2; /*0x47ed4b*/
  v11[0x14] = 1; /*0x47ed4f*/
  v11[0x15] = 2; /*0x47ed58*/
  v11[0x1A] = 2; /*0x47ed5c*/
  v11[0x26] = 2; /*0x47ed60*/
  v11[0x28] = 2; /*0x47ed64*/
  v11[0x36] = 2; /*0x47ed68*/
  v11[0x39] = 2; /*0x47ed6c*/
  v11[0x3D] = 2; /*0x47ed70*/
  v11[9] = 0; /*0x47ed7e*/
  v11[0xA] = 4; /*0x47ed82*/
  v11[0xB] = 7; /*0x47ed86*/
  v11[0xD] = 4; /*0x47ed8c*/
  v11[0xE] = 0; /*0x47ed90*/
  v11[0x10] = 5; /*0x47ed94*/
  v11[0x11] = 4; /*0x47ed9a*/
  v11[0x13] = 5; /*0x47ed9e*/
  v11[0x16] = 6; /*0x47eda4*/
  v11[0x17] = 5; /*0x47eda8*/
  v11[0x18] = 3; /*0x47edae*/
  v11[0x19] = 6; /*0x47edb4*/
  v11[0x1B] = 3; /*0x47edb8*/
  v11[0x1C] = 7; /*0x47edbe*/
  v11[0x1D] = 6; /*0x47edc4*/
  v11[0x1E] = 4; /*0x47edc8*/
  v11[0x1F] = 7; /*0x47edcc*/
  v11[0x20] = 6; /*0x47edd2*/
  v11[0x21] = 4; /*0x47edd6*/
  v11[0x22] = 6; /*0x47edda*/
  v11[0x23] = 5; /*0x47edde*/
  v11[0x24] = 0; /*0x47ede4*/
  v11[0x25] = 1; /*0x47ede8*/
  v11[0x27] = 0; /*0x47edee*/
  v11[0x29] = 3; /*0x47edf2*/
  v11[0x2A] = 0; /*0x47edf8*/
  v11[0x2B] = 3; /*0x47edfc*/
  v11[0x2C] = 7; /*0x47ee02*/
  v11[0x2D] = 0; /*0x47ee08*/
  v11[0x2E] = 7; /*0x47ee0c*/
  v11[0x2F] = 4; /*0x47ee12*/
  v11[0x30] = 1; /*0x47ee16*/
  v11[0x31] = 0; /*0x47ee1c*/
  v11[0x32] = 4; /*0x47ee20*/
  v11[0x33] = 1; /*0x47ee24*/
  v11[0x34] = 4; /*0x47ee2a*/
  v11[0x35] = 5; /*0x47ee2e*/
  v11[0x37] = 1; /*0x47ee34*/
  v11[0x38] = 5; /*0x47ee3a*/
  v11[0x3A] = 5; /*0x47ee40*/
  v11[0x3B] = 6; /*0x47ee46*/
  v11[0x3C] = 3; /*0x47ee4a*/
  v11[0x3E] = 6; /*0x47ee50*/
  v11[0x3F] = 3; /*0x47ee54*/
  v11[0x40] = 6; /*0x47ee5a*/
  v11[0x41] = 7; /*0x47ee61*/
  v11[0x42] = 4; /*0x47ee68*/
  v11[0x43] = 6; /*0x47ee6f*/
  v11[0x44] = 7; /*0x47ee76*/
  v11[0x45] = 4; /*0x47ee7d*/
  v11[0x46] = 5; /*0x47ee84*/
  v11[0x47] = 6; /*0x47ee8d*/
  v12 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x47ee94*/
  if ( v12 ) /*0x47eeaa*/
    return NiTriShape_ctorWithGeometryData(v12, 8u, v6, 0, v10, 0, 0, 0, 0x18u, v11); /*0x47eeb9*/
  else
    return 0; /*0x47eed2*/
}
