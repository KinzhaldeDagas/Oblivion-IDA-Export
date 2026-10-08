// Verified Oblivion geometry use: reads float at TESObjectTREE+0x7C, defaults local height to 1400 when <=0, uses half that value as horizontal half-width, and full value as vertical extent. Fallout's directly named BillboardSize.y uses the same 1400 fallback and square-plane construction. This supports (Probable) +0x7C = BillboardSize.y; +0x78 is paired as BillboardSize.x via identical 200 threshold predicate.
NiTriShapeData **__thiscall TESObjectTREE_BuildBillboardQuadData(
        TESObjectTREE_BillboardTail *this,
        NiTriShapeData **outData,
        bool distantPlane)
{
  float *v4; // eax
  double BillboardSizeY; // st6
  float *v6; // ecx
  double v7; // st5
  double v8; // st7
  double v9; // st4
  double v10; // st7
  double v11; // rt0
  double v12; // st5
  float v13; // edx
  float v14; // eax
  NiPoint3 *v15; // edi
  float *v16; // ebp
  float *v17; // eax
  float *v18; // esi
  UInt16 *v19; // ebx
  NiTriShapeData *v20; // eax
  NiTriShapeData *v21; // eax
  float v23; // [esp+14h] [ebp-20h]
  float v24; // [esp+14h] [ebp-20h]
  float v25; // [esp+14h] [ebp-20h]
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+14h] [ebp-20h]
  float v28; // [esp+18h] [ebp-1Ch]
  float v29; // [esp+18h] [ebp-1Ch]
  float v30; // [esp+1Ch] [ebp-18h]
  float v31; // [esp+1Ch] [ebp-18h]
  NiPoint3 *v32; // [esp+24h] [ebp-10h]

  v4 = (float *)FormHeapAlloc(0x30u); /*0x4ba3f1*/
  BillboardSizeY = this->BillboardSizeY; /*0x4ba3ff*/
  v6 = v4; /*0x4ba403*/
  v32 = (NiPoint3 *)v4; /*0x4ba413*/
  if ( BillboardSizeY <= 0.0 ) /*0x4ba41a*/
    BillboardSizeY = flt_A451D0; /*0x4ba428*/
  v23 = dbl_A2FAA0 * BillboardSizeY; /*0x4ba438*/
  v7 = v23; /*0x4ba43c*/
  v24 = -v23; /*0x4ba444*/
  v8 = v24; /*0x4ba454*/
  *v4 = v24; /*0x4ba456*/
  v4[1] = 0.0; /*0x4ba46a*/
  v25 = v7; /*0x4ba46d*/
  v4[2] = 0.0; /*0x4ba477*/
  v4[9] = v25; /*0x4ba486*/
  v9 = v8; /*0x4ba48d*/
  v10 = 0.0; /*0x4ba48d*/
  v4[0xA] = 0.0; /*0x4ba48f*/
  v26 = v9; /*0x4ba492*/
  v4[0xB] = 0.0; /*0x4ba49a*/
  v4[3] = v26; /*0x4ba49d*/
  if ( distantPlane ) /*0x4ba4a0*/
  {
    v11 = v7; /*0x4ba4a2*/
    v28 = 0.0; /*0x4ba4a4*/
    v12 = BillboardSizeY; /*0x4ba4a8*/
    BillboardSizeY = 0.0; /*0x4ba4a8*/
    v30 = v12; /*0x4ba4aa*/
    v10 = v12; /*0x4ba4ae*/
    v27 = v11; /*0x4ba4b0*/
  }
  else
  {
    v28 = BillboardSizeY; /*0x4ba4b8*/
    v30 = 0.0; /*0x4ba4be*/
    v27 = v7; /*0x4ba4c4*/
  }
  v13 = v28; /*0x4ba4ca*/
  v29 = BillboardSizeY; /*0x4ba4ce*/
  v14 = v30; /*0x4ba4d2*/
  v6[4] = v13; /*0x4ba4d6*/
  v31 = v10; /*0x4ba4d9*/
  v6[6] = v27; /*0x4ba4e1*/
  v6[5] = v14; /*0x4ba4e8*/
  v6[7] = v29; /*0x4ba4ef*/
  v6[8] = v31; /*0x4ba4f4*/
  v15 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x4ba4fe*/
  v15->x = 0.0; /*0x4ba50e*/
  v15->y = 1.0; /*0x4ba520*/
  v15->z = 0.0; /*0x4ba535*/
  v15[1].x = 0.0; /*0x4ba54a*/
  v15[1].y = 1.0; /*0x4ba557*/
  v15[1].z = 0.0; /*0x4ba55a*/
  v15[2].x = 0.0; /*0x4ba56f*/
  v15[2].y = 1.0; /*0x4ba576*/
  v15[2].z = 0.0; /*0x4ba581*/
  v15[3].x = 0.0; /*0x4ba588*/
  v15[3].y = 1.0; /*0x4ba58b*/
  v15[3].z = 0.0; /*0x4ba58e*/
  v16 = (float *)FormHeapAlloc(0x20u); /*0x4ba598*/
  *v16 = 1.0; /*0x4ba5b8*/
  v16[1] = 1.0; /*0x4ba5bf*/
  v16[2] = 1.0; /*0x4ba5ce*/
  v16[3] = 0.0; /*0x4ba5d5*/
  v16[4] = 0.0; /*0x4ba5d8*/
  v16[5] = 0.0; /*0x4ba5db*/
  v16[6] = 0.0; /*0x4ba5f0*/
  v16[7] = 1.0; /*0x4ba5f3*/
  v17 = (float *)FormHeapAlloc(0x40u); /*0x4ba5f6*/
  v18 = v17; /*0x4ba5fb*/
  if ( v17 ) /*0x4ba60a*/
    sub_401080(v17, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x4ba616*/
  else
    v18 = 0; /*0x4ba61d*/
  *v18 = 1.0; /*0x4ba649*/
  v18[1] = 1.0; /*0x4ba64d*/
  v18[2] = 1.0; /*0x4ba65c*/
  v18[3] = 0.0; /*0x4ba671*/
  v18[4] = 1.0; /*0x4ba67e*/
  v18[5] = 1.0; /*0x4ba68d*/
  v18[6] = 1.0; /*0x4ba69a*/
  v18[8] = 1.0; /*0x4ba6a3*/
  v18[7] = 0.0; /*0x4ba6b2*/
  v18[9] = 1.0; /*0x4ba6bd*/
  v18[0xA] = 1.0; /*0x4ba6c4*/
  v18[0xC] = 1.0; /*0x4ba6cf*/
  v18[0xB] = 0.0; /*0x4ba6d6*/
  v18[0xD] = 1.0; /*0x4ba6dd*/
  v18[0xE] = 1.0; /*0x4ba6e0*/
  v18[0xF] = 0.0; /*0x4ba6e3*/
  v19 = (UInt16 *)FormHeapAlloc(0xCu); /*0x4ba6eb*/
  *v19 = 0; /*0x4ba6f4*/
  v19[1] = 2; /*0x4ba6f9*/
  v19[2] = 1; /*0x4ba6fd*/
  v19[3] = 0; /*0x4ba703*/
  v19[4] = 3; /*0x4ba709*/
  v19[5] = 2; /*0x4ba70f*/
  v20 = (NiTriShapeData *)FormHeapAlloc(0x58u); /*0x4ba713*/
  if ( v20 ) /*0x4ba729*/
    v21 = NiTriShapeData_ConstructWithData(v20, 4u, v32, v15, (NiColorAlpha *)v18, v16, 1, 0, 2u, v19); /*0x4ba73e*/
  else
    v21 = 0; /*0x4ba745*/
  *outData = v21; /*0x4ba74d*/
  if ( v21 ) /*0x4ba74f*/
    InterlockedIncrement((volatile LONG *)&v21->member); /*0x4ba755*/
  return outData; /*0x4ba75d*/
}
