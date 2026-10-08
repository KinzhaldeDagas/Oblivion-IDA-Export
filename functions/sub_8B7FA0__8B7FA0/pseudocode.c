NiAVObject *__thiscall sub_8B7FA0(__m128 **this, int a2)
{
  __m128 *v3; // eax
  __m128 *v4; // eax
  double v5; // rt0
  NiAVObject *result; // eax
  NiObjectNET *v7; // esi
  float v8; // [esp+14h] [ebp-2Ch] BYREF
  float v9; // [esp+18h] [ebp-28h]
  float v10; // [esp+1Ch] [ebp-24h]
  __m128 v11; // [esp+20h] [ebp-20h] BYREF

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8b7fc5*/
    v4 = v3 + 1; /*0x8b7fc7*/
  else
    v4 = (__m128 *)&unk_BA7A40; /*0x8b7fcc*/
  v11 = *v4; /*0x8b7fde*/
  HavokVector_ToWorldVector(&v8, &v11); /*0x8b7fe3*/
  v5 = dbl_A3D0C0; /*0x8b7ffa*/
  v8 = v8 * v5; /*0x8b7ffd*/
  v9 = v9 * v5; /*0x8b8007*/
  v10 = v5 * v10; /*0x8b800f*/
  result = sub_6FBC40(&v8, 0); /*0x8b8013*/
  v7 = (NiObjectNET *)result; /*0x8b8018*/
  if ( result ) /*0x8b801f*/
  {
    ((void (__thiscall *)(__m128 **, NiAVObject *))(*this)[9].m128_i32[2])(this, result); /*0x8b802c*/
    NiObjectNET_SetName(v7, "bhkBoxShape"); /*0x8b8035*/
    return (*(NiAVObject *(__thiscall **)(int, NiObjectNET *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v7, 0); /*0x8b8047*/
  }
  return result; /*0x8b8049*/
}
