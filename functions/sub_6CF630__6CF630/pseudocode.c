// Oblivion: single-active-item accumulated-transform path. Prepares the selected item's accumulation state, evaluates/composes its cached transform relative to the item reference, and returns the composed transform when valid.
char __thiscall NiBlendAccumTransformInterpolator_UpdateSingle(int this, float a2, int a3, float *a4)
{
  NiPoint3 *v6; // ebp
  float v7; // eax
  float v8; // ecx
  float v9; // edx
  int v10; // eax
  float v11; // ecx
  float v12; // edx
  int v13; // ecx
  NiPoint3 *v14; // esi
  NiPoint3 v15; // [esp+18h] [ebp-40h] BYREF
  float v16; // [esp+24h] [ebp-34h]
  float v17; // [esp+28h] [ebp-30h]
  float v18; // [esp+2Ch] [ebp-2Ch]
  float v19; // [esp+30h] [ebp-28h]
  float v20; // [esp+34h] [ebp-24h]
  _BYTE v21[32]; // [esp+38h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6cf63a*/
    a2 = *(float *)(this + 0x20); /*0x6cf63f*/
  if ( flt_A79F00 == a2 ) /*0x6cf656*/
    return 0; /*0x6cf65a*/
  NiBlendAccumTransformInterpolator_UpdateSelectedItem(this, a2, a3); /*0x6cf66f*/
  if ( *(_BYTE *)(this + 0x54) || (v6 = (NiPoint3 *)(this + 0x30), NiTransform_IsInvalid((float *)(this + 0x30))) ) /*0x6cf67f*/
  {
    v7 = *(float *)&dword_B24268; /*0x6cf68c*/
    v8 = *(float *)&dword_B24260; /*0x6cf697*/
    v20 = flt_A79E10; /*0x6cf69d*/
    v9 = *(float *)&dword_B24264; /*0x6cf6a1*/
    v15.z = v7; /*0x6cf6a7*/
    v18 = flt_B3CBAC; /*0x6cf6b0*/
    v10 = *(unsigned __int8 *)(this + 0xF); /*0x6cf6b4*/
    v15.x = v8; /*0x6cf6b8*/
    v16 = flt_B3CBA4; /*0x6cf6c5*/
    v11 = flt_B3CBB0; /*0x6cf6c9*/
    v15.y = v9; /*0x6cf6cf*/
    v12 = flt_B3CBA8; /*0x6cf6d3*/
    v19 = v11; /*0x6cf6d9*/
    v13 = *(_DWORD *)(this + 0x50); /*0x6cf6dd*/
    v17 = v12; /*0x6cf6e0*/
    sub_6CB4D0((float *)(0x68 * v10 + v13 + 4), (int)&v15); /*0x6cf6ed*/
    v6 = (NiPoint3 *)(this + 0x30); /*0x6cf6f2*/
    if ( NiTransform_IsInvalid((float *)(this + 0x30)) ) /*0x6cf6f7*/
      v14 = &v15; /*0x6cf700*/
    else
      v14 = (NiPoint3 *)sub_6CB640((float *)(this + 0x30), (int)v21, &v15); /*0x6cf717*/
    qmemcpy(v6, v14, 0x20u); /*0x6cf720*/
    *(_BYTE *)(this + 0x54) = 0; /*0x6cf722*/
  }
  if ( NiTransform_IsInvalid(&v6->x) ) /*0x6cf728*/
    return 0; /*0x6cf734*/
  qmemcpy( /*0x6cf763*/
    a4,
    sub_6CB640(&v6->x, (int)v21, (NiPoint3 *)(0x68 * *(unsigned __int8 *)(this + 0xF) + *(_DWORD *)(this + 0x50) + 4)),
    0x20u);
  return 1; /*0x6cf65c*/
}
