NiObject *__thiscall sub_6C3570(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  NiObject *v6; // eax
  int v8[8]; // [esp-20h] [ebp-6Ch] BYREF
  NiObject *v9; // [esp+Ch] [ebp-40h]
  float v10[4]; // [esp+10h] [ebp-3Ch] BYREF
  _DWORD v11[11]; // [esp+20h] [ebp-2Ch] BYREF

  v2 = *(this + 0xC); /*0x6c3595*/
  sub_7150F0(v10, (float *)(v2 + 0x30)); /*0x6c35a0*/
  v3 = *(_DWORD *)(v2 + 0x54); /*0x6c35a8*/
  v9 = *(NiObject **)(v2 + 0x60); /*0x6c35ab*/
  v4 = *(_DWORD *)(v2 + 0x58); /*0x6c35af*/
  v5 = *(_DWORD *)(v2 + 0x5C); /*0x6c35b6*/
  v11[7] = v9; /*0x6c35b9*/
  v11[0] = v3; /*0x6c35bd*/
  v11[1] = v4; /*0x6c35c5*/
  v11[2] = v5; /*0x6c35cd*/
  *(float *)&v11[3] = v10[0]; /*0x6c35d5*/
  *(float *)&v11[4] = v10[1]; /*0x6c35df*/
  *(float *)&v11[5] = v10[2]; /*0x6c35e3*/
  *(float *)&v11[6] = v10[3]; /*0x6c35e7*/
  v6 = (NiObject *)FormHeapAlloc(0x38u); /*0x6c35eb*/
  v9 = v6; /*0x6c35f3*/
  v11[0xA] = 0; /*0x6c35f9*/
  if ( !v6 ) /*0x6c3601*/
    return 0; /*0x6c362e*/
  qmemcpy(v8, v11, sizeof(v8)); /*0x6c3611*/
  return NiTransformInterpolator_ConstructWithTransform(v6, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v8[7]); /*0x6c361a*/
}
