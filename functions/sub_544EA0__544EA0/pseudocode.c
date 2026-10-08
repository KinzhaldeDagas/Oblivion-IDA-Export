char __thiscall sub_544EA0(int this, UInt16 *triangleIndices)
{
  float *v3; // eax
  double v4; // st7
  double v5; // rt0
  float v6; // edx
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // rt0
  float v11; // edx
  float *v12; // eax
  float *v13; // ebx
  float *v14; // eax
  float *v15; // edi
  float *v16; // ebp
  NiAVObject *v17; // eax
  NiAVObject *v18; // ebx
  NiAVObject *v19; // ebp
  _WORD *v21; // [esp+14h] [ebp-34h]
  NiPoint3 *normals; // [esp+18h] [ebp-30h]
  NiPoint3 *vertices; // [esp+1Ch] [ebp-2Ch]
  float *v24; // [esp+20h] [ebp-28h]
  float *v25; // [esp+24h] [ebp-24h]
  float v26; // [esp+2Ch] [ebp-1Ch]
  float v27; // [esp+2Ch] [ebp-1Ch]
  float v28; // [esp+2Ch] [ebp-1Ch]
  float v29; // [esp+30h] [ebp-18h]
  float v30; // [esp+30h] [ebp-18h]
  float v31; // [esp+30h] [ebp-18h]
  float v32; // [esp+34h] [ebp-14h]
  float v33; // [esp+38h] [ebp-10h]
  float triangleIndicesb; // [esp+4Ch] [ebp+4h]
  float triangleIndicesc; // [esp+4Ch] [ebp+4h]
  float triangleIndicesd; // [esp+4Ch] [ebp+4h]
  float triangleIndicese; // [esp+4Ch] [ebp+4h]
  UInt16 *triangleIndicesa; // [esp+4Ch] [ebp+4h]

  SkyObject__CreateRootNodeAndAttach((Sky *)this, (int)triangleIndices); /*0x544ece*/
  NiObjectNET_SetName(*(NiObjectNET **)(this + 4), "Sun Root"); /*0x544edb*/
  v3 = (float *)FormHeapAlloc(0x30u); /*0x544ee2*/
  v4 = flt_B11E2C; /*0x544ee7*/
  vertices = (NiPoint3 *)v3; /*0x544ef7*/
  v5 = dbl_A3D360; /*0x544efd*/
  v26 = v4 * v5; /*0x544eff*/
  *v3 = v26; /*0x544f07*/
  v29 = v4; /*0x544f0b*/
  v3[1] = v29; /*0x544f15*/
  v3[2] = 0.0; /*0x544f20*/
  triangleIndicesb = flt_B11E2C * v5; /*0x544f2b*/
  v3[3] = triangleIndicesb; /*0x544f4b*/
  v3[4] = triangleIndicesb; /*0x544f56*/
  v3[5] = 0.0; /*0x544f61*/
  v6 = flt_B11E2C; /*0x544f76*/
  v3[6] = flt_B11E2C; /*0x544f7a*/
  v3[7] = v6; /*0x544f85*/
  v3[8] = 0.0; /*0x544f88*/
  triangleIndicesc = v5 * flt_B11E2C; /*0x544f97*/
  v3[9] = flt_B11E2C; /*0x544fa9*/
  v3[0xA] = triangleIndicesc; /*0x544fb4*/
  v3[0xB] = 0.0; /*0x544fbf*/
  v7 = (float *)FormHeapAlloc(0x30u); /*0x544fc2*/
  *v7 = g_zeroNiPoint3.x; /*0x544fcd*/
  v7[1] = g_zeroNiPoint3.y; /*0x544fd5*/
  v7[2] = g_zeroNiPoint3.z; /*0x544fde*/
  v7[3] = g_zeroNiPoint3.x; /*0x544fe7*/
  normals = (NiPoint3 *)v7; /*0x544ff0*/
  v7[4] = g_zeroNiPoint3.y; /*0x544ff4*/
  v7[5] = g_zeroNiPoint3.z; /*0x544ffd*/
  v7[6] = g_zeroNiPoint3.x; /*0x545006*/
  v7[7] = g_zeroNiPoint3.y; /*0x54500f*/
  v7[8] = g_zeroNiPoint3.z; /*0x545018*/
  v7[9] = g_zeroNiPoint3.x; /*0x545021*/
  v7[0xA] = g_zeroNiPoint3.y; /*0x54502a*/
  v7[0xB] = g_zeroNiPoint3.z; /*0x545035*/
  v8 = (float *)FormHeapAlloc(0x30u); /*0x545038*/
  v9 = flt_B11E34; /*0x54503d*/
  v10 = dbl_A3D360; /*0x545053*/
  v27 = v9 * v10; /*0x545055*/
  *v8 = v27; /*0x54505d*/
  v30 = v9; /*0x545061*/
  v8[1] = v30; /*0x54506b*/
  v8[2] = 0.0; /*0x545076*/
  triangleIndicesd = flt_B11E34 * v10; /*0x545081*/
  v8[3] = triangleIndicesd; /*0x5450a1*/
  v8[4] = triangleIndicesd; /*0x5450ac*/
  v8[5] = 0.0; /*0x5450b7*/
  v11 = flt_B11E34; /*0x5450cc*/
  v8[6] = flt_B11E34; /*0x5450d0*/
  v8[7] = v11; /*0x5450db*/
  v8[8] = 0.0; /*0x5450de*/
  triangleIndicese = v10 * flt_B11E34; /*0x5450ed*/
  v8[9] = flt_B11E34; /*0x5450ff*/
  v8[0xA] = triangleIndicese; /*0x54510a*/
  v8[0xB] = 0.0; /*0x545115*/
  v25 = (float *)FormHeapAlloc(0x30u); /*0x545123*/
  *v25 = g_zeroNiPoint3.x; /*0x545127*/
  v25[1] = g_zeroNiPoint3.y; /*0x545131*/
  v28 = 1.0; /*0x545134*/
  v25[2] = g_zeroNiPoint3.z; /*0x545140*/
  v31 = 0.0; /*0x545143*/
  v32 = 0.0; /*0x54514d*/
  v25[3] = g_zeroNiPoint3.x; /*0x545151*/
  v25[4] = g_zeroNiPoint3.y; /*0x54515a*/
  v33 = 1.0; /*0x545163*/
  v25[5] = g_zeroNiPoint3.z; /*0x545167*/
  v25[6] = g_zeroNiPoint3.x; /*0x545170*/
  v25[7] = g_zeroNiPoint3.y; /*0x545179*/
  v25[8] = g_zeroNiPoint3.z; /*0x545182*/
  v25[9] = g_zeroNiPoint3.x; /*0x54518b*/
  v25[0xA] = g_zeroNiPoint3.y; /*0x545194*/
  v25[0xB] = g_zeroNiPoint3.z; /*0x54519f*/
  v12 = (float *)FormHeapAlloc(0x40u); /*0x5451a2*/
  v13 = v12; /*0x5451a7*/
  if ( v12 ) /*0x5451ba*/
    sub_401080(v12, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x5451c6*/
  else
    v13 = 0; /*0x5451cd*/
  *v13 = v28; /*0x5451df*/
  v13[4] = v28; /*0x5451e1*/
  v13[8] = v28; /*0x5451e4*/
  v13[0xC] = v28; /*0x5451e7*/
  v13[1] = v31; /*0x5451ea*/
  v13[5] = v31; /*0x5451ed*/
  v13[9] = v31; /*0x5451f0*/
  v13[0xD] = v31; /*0x5451f3*/
  v13[2] = v32; /*0x5451f6*/
  v13[6] = v32; /*0x5451f9*/
  v13[0xA] = v32; /*0x5451fc*/
  v13[0xE] = v32; /*0x5451ff*/
  v13[3] = v33; /*0x54520c*/
  v13[7] = v33; /*0x54520f*/
  v13[0xB] = v33; /*0x545212*/
  v13[0xF] = v33; /*0x545215*/
  v14 = (float *)FormHeapAlloc(0x40u); /*0x545218*/
  v15 = v14; /*0x54521d*/
  if ( v14 ) /*0x545230*/
    sub_401080(v14, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x54523c*/
  else
    v15 = 0; /*0x545243*/
  *v15 = v28; /*0x545251*/
  v15[4] = v28; /*0x545253*/
  v15[8] = v28; /*0x545256*/
  v15[0xC] = v28; /*0x545259*/
  v15[1] = v31; /*0x54525c*/
  v15[5] = v31; /*0x54525f*/
  v15[9] = v31; /*0x545262*/
  v15[0xD] = v31; /*0x545265*/
  v15[2] = v32; /*0x545268*/
  v15[6] = v32; /*0x54526b*/
  v15[0xA] = v32; /*0x54526e*/
  v15[0xE] = v32; /*0x545271*/
  v15[3] = v33; /*0x54527e*/
  v15[7] = v33; /*0x545281*/
  v15[0xB] = v33; /*0x545284*/
  v15[0xF] = v33; /*0x545287*/
  v16 = (float *)FormHeapAlloc(0x20u); /*0x545291*/
  *v16 = 0.0; /*0x5452b1*/
  v16[1] = 0.0; /*0x5452b8*/
  v16[2] = 0.0; /*0x5452c9*/
  v16[3] = 1.0; /*0x5452d0*/
  v16[4] = 1.0; /*0x5452db*/
  v16[5] = 0.0; /*0x5452e8*/
  v16[6] = 1.0; /*0x5452eb*/
  v16[7] = 1.0; /*0x5452ee*/
  v24 = (float *)FormHeapAlloc(0x20u); /*0x5452fc*/
  *v24 = 0.0; /*0x545312*/
  v24[1] = 0.0; /*0x545320*/
  v24[2] = 0.0; /*0x54532d*/
  v24[3] = 1.0; /*0x545334*/
  v24[4] = 1.0; /*0x54533f*/
  v24[5] = 0.0; /*0x54534a*/
  v24[6] = 1.0; /*0x545351*/
  v24[7] = 1.0; /*0x545354*/
  triangleIndicesa = (UInt16 *)FormHeapAlloc(0xCu); /*0x54536a*/
  *triangleIndicesa = 0; /*0x54536e*/
  triangleIndicesa[1] = 1; /*0x545373*/
  triangleIndicesa[2] = 2; /*0x545377*/
  triangleIndicesa[3] = 2; /*0x54537b*/
  triangleIndicesa[4] = 1; /*0x54537f*/
  triangleIndicesa[5] = 3; /*0x545383*/
  v21 = (_WORD *)FormHeapAlloc(0xCu); /*0x54539d*/
  *v21 = 0; /*0x5453a1*/
  v21[1] = 1; /*0x5453a6*/
  v21[2] = 2; /*0x5453aa*/
  v21[3] = 2; /*0x5453ae*/
  v21[4] = 1; /*0x5453b2*/
  v21[5] = 3; /*0x5453b6*/
  v17 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x5453bc*/
  if ( v17 ) /*0x5453d2*/
    v18 = NiTriShape_ctorWithGeometryData( /*0x5453f4*/
            v17,
            4u,
            vertices,
            normals,
            (NiColorAlpha *)v13,
            v16,
            1,
            0,
            2u,
            triangleIndicesa);
  else
    v18 = 0; /*0x5453f8*/
  v19 = *(NiAVObject **)(this + 0x10); /*0x5453fa*/
  if ( v19 != v18 ) /*0x545407*/
  {
    if ( v19 ) /*0x54540b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x545411*/
        v19->vtbl->super.super.Destructor((NiRefObject *)v19, 1); /*0x545428*/
    }
    *(_DWORD *)(this + 0x10) = v18; /*0x54542c*/
    if ( v18 ) /*0x54542f*/
      InterlockedIncrement((volatile LONG *)&v18->members); /*0x545435*/
  }
  NiObjectNET_SetName(*(NiObjectNET **)(this + 0x10), "Sun Geometry"); /*0x545443*/
  *(_WORD *)(*(_DWORD *)(this + 0x10) + 0x18) |= 2u; /*0x54544b*/
  return sub_545450((int)v15, this, (int)triangleIndicesa);
}
