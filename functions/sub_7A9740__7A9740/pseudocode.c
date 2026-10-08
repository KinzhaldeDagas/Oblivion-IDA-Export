// OBLIVION AUTHORITY (2026-08-24): CLeafLodEngine::ComputeNextLevel contract recovered from caller/order: prepare/copy source vector, FindPairs at 0x7A979D, then BuildNewLeaves at 0x7A97A9 into the output leaf vector.
OB_stVectorBillboardLeafPtr_010201A0 *__thiscall OB_CLeafLodEngine_ComputeNextLevel_010201A0(
        OB_CLeafLodEngine_010201A0 *this,
        OB_stVectorBillboardLeafPtr_010201A0 *result,
        OB_stVectorBillboardLeafPtr_010201A0 originalLeaves)
{
  int v3; // ebp
  OB_stVectorBillboardLeafPtr_010201A0 *v5; // eax
  OB_stVectorBillboardLeafPtr_010201A0 v7[2]; // [esp-10h] [ebp-44h] BYREF
  int v8; // [esp+10h] [ebp-24h]
  OB_stVectorBillboardLeafPtr_010201A0 *v9; // [esp+14h] [ebp-20h]
  OB_stVectorBillboardLeafPtr_010201A0 v10; // [esp+18h] [ebp-1Ch] BYREF
  int v11; // [esp+30h] [ebp-4h]

  v11 = 1; /*0x7a9777*/
  result->begin = 0; /*0x7a977b*/
  result->end = 0; /*0x7a977e*/
  result->capacityEnd = 0; /*0x7a9781*/
  v8 = 1; /*0x7a9787*/
  v9 = v7; /*0x7a9791*/
  OB_stVector4_CopyCtor_010201A0(v7, v3, (int)&originalLeaves);// ComputeNextLevel copies the current four-byte pointer vector shallowly before selecting/cloning leaf objects; pointed leaf lifetime is handled separately. /*0x7a9796*/
  OB_CLeafLodEngine_FindPairs_010201A0(this, v7[0]); /*0x7a979d*/
  v5 = OB_CLeafLodEngine_BuildNewLeaves_010201A0(this, &v10);// OBLIVION AUTHORITY (2026-08-24): Calls BuildNewLeaves after pair construction. CTreeEngine_BuildLeafLods invokes this once for each generated LOD after LOD0. /*0x7a97a9*/
  LOBYTE(v11) = 2; /*0x7a97b1*/
  OB_stVector4_CopyAssign_010201A0(result, (int)v5); /*0x7a97b6*/
  if ( v10.begin ) /*0x7a97c1*/
    FormHeapFree((unsigned int)v10.begin); /*0x7a97c4*/
  if ( originalLeaves.begin ) /*0x7a97d2*/
    FormHeapFree((unsigned int)originalLeaves.begin); /*0x7a97d5*/
  return result; /*0x7a97df*/
}
