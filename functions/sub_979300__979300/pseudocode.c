int __thiscall sub_979300(int this, float *a2, float *a3, int a4, char *a5, NiRefObject *pickedObject, float *a7)
{
  NiRefObject *v7; // ebp
  float *v8; // esi
  char v10; // al
  NiPickRecord_Oblivion_044Verified *v11; // eax
  NiPickRecord_Oblivion_044Verified *v12; // esi
  float *v13; // eax
  float *v14; // ecx
  float *v15; // edi
  float v16; // eax
  float v17; // ecx
  float v19; // [esp+10h] [ebp-38h] BYREF
  float v20; // [esp+14h] [ebp-34h] BYREF
  float v21; // [esp+18h] [ebp-30h] BYREF
  float v22; // [esp+1Ch] [ebp-2Ch]
  float v23; // [esp+20h] [ebp-28h]
  float v24; // [esp+24h] [ebp-24h]
  float v25; // [esp+28h] [ebp-20h]
  float v26; // [esp+2Ch] [ebp-1Ch]
  float v27; // [esp+30h] [ebp-18h]
  float v28; // [esp+34h] [ebp-14h]
  float v29; // [esp+38h] [ebp-10h]
  _DWORD v30[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v7 = pickedObject; /*0x979305*/
  v8 = a7; /*0x97930a*/
  if ( a7 != *(float **)(this + 0x88) ) /*0x979317*/
  {
    sub_97AEC0((NiPoint3 *)(this + 4), (NiTransform *)&pickedObject[0xC].members); /*0x979320*/
    *(_DWORD *)(this + 0x88) = v8; /*0x979325*/
  }
  LOBYTE(a7) = *(_BYTE *)(a4 + 0x10); /*0x979332*/
  v10 = sub_96E5E0( /*0x97936e*/
          a2,
          a3,
          *(float **)(this + 0x8C),
          *(float **)(this + 0x90),
          *(float **)(this + 0x94),
          (char)a7,
          v30,
          (float *)&pickedObject,
          &v20,
          &v19);
  *a5 = v10; /*0x97937f*/
  if ( v10 ) /*0x979381*/
  {
    v11 = (NiPickRecord_Oblivion_044Verified *)FormHeapAlloc(0x44u); /*0x979389*/
    if ( v11 ) /*0x979393*/
      v12 = NiPickRecord_Initialize(v11, v7); /*0x97939d*/
    else
      v12 = 0; /*0x9793a1*/
    LODWORD(v12->intersectionPoint_008.x) = v30[0]; /*0x9793a7*/
    LODWORD(v12->intersectionPoint_008.y) = v30[1]; /*0x9793ae*/
    LODWORD(v12->intersectionPoint_008.z) = v30[2]; /*0x9793b5*/
    v12->hitDistance_014 = *(float *)&pickedObject; /*0x9793bc*/
    if ( *(_BYTE *)(a4 + 0x2D) ) /*0x9793bf*/
    {
      v13 = *(float **)(this + 0x8C); /*0x9793c9*/
      v14 = *(float **)(this + 0x90); /*0x9793cf*/
      v15 = *(float **)(this + 0x94); /*0x9793d7*/
      v27 = *v14 - *v13; /*0x9793df*/
      v28 = v14[1] - v13[1]; /*0x9793e9*/
      v29 = v14[2] - v13[2]; /*0x9793f7*/
      v24 = *v15 - *v13; /*0x9793ff*/
      v25 = v15[1] - v13[1]; /*0x979409*/
      v26 = v15[2] - v13[2]; /*0x979413*/
      v21 = v26 * v28 - v25 * v29; /*0x979437*/
      v22 = v29 * v24 - v26 * v27; /*0x979451*/
      v23 = v27 * v25 - v24 * v28; /*0x97945b*/
      Vector3_NormalizeInPlace(&v21); /*0x97945f*/
      v16 = v22; /*0x97946a*/
      v17 = v23; /*0x97946e*/
      v12->surfaceNormal_028.x = v21; /*0x979472*/
      v12->surfaceNormal_028.y = v16; /*0x979475*/
      v12->surfaceNormal_028.z = v17; /*0x979478*/
    }
    a7 = (float *)v12; /*0x979483*/
    *(_DWORD *)(a4 + 0x28) = v12; /*0x979487*/
    sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a4 + 0x18), &a7); /*0x97948a*/
  }
  return 0; /*0x97948f*/
}
