//
// GPU static-world LOD audit 2026-09-27: converts local center+8 through node world rotation/scale/translation to world center+14, and writes scaled local interval endpoints to each row+8/+C. Snapshot the current cached world values; do not substitute unobserved local-space formulas.
int __thiscall sub_7249F0(float *this, int a2)
{
  NiTransform *v2; // edi
  NiTransform *v4; // eax
  double v5; // st7
  int result; // eax
  unsigned int v7; // edx
  bool v8; // zf
  int v9; // ecx
  double v10; // st7
  int v11; // ecx
  float v12; // [esp+8h] [ebp-24h]
  float v13; // [esp+Ch] [ebp-20h]
  float v14; // [esp+10h] [ebp-1Ch]
  NiPoint3 v15; // [esp+14h] [ebp-18h] BYREF
  char v16; // [esp+20h] [ebp-Ch] BYREF
  float v17; // [esp+30h] [ebp+4h]

  v2 = (NiTransform *)(a2 + 0x64); /*0x7249ff*/
  v17 = *(float *)(a2 + 0x94); /*0x724a02*/
  v15.x = v17 * *(this + 2); /*0x724a1d*/
  v15.y = *(this + 3) * v17; /*0x724a26*/
  v15.z = v17 * *(this + 4); /*0x724a2d*/
  v4 = sub_7101F0(v2, (NiTransform *)&v16, &v15); /*0x724a31*/
  v12 = v2->pos.x + v4->rot.data[0][0]; /*0x724a3b*/
  v13 = v2->pos.y + v4->rot.data[0][1]; /*0x724a49*/
  v5 = v2->pos.z + v4->rot.data[0][2]; /*0x724a50*/
  result = LODWORD(v13); /*0x724a53*/
  *(this + 5) = v12; /*0x724a57*/
  v7 = 0; /*0x724a5a*/
  v8 = *((_DWORD *)this + 8) == 0; /*0x724a5c*/
  v14 = v5; /*0x724a5f*/
  *(this + 6) = v13; /*0x724a67*/
  *(this + 7) = v14; /*0x724a6a*/
  if ( !v8 ) /*0x724a6d*/
  {
    result = 0; /*0x724a6f*/
    do /*0x724a97*/
    {
      ++v7; /*0x724a7c*/
      *(float *)(result + *((_DWORD *)this + 9) + 8) = v2->scale * *(float *)(*((_DWORD *)this + 9) + result); /*0x724a7f*/
      v9 = *((_DWORD *)this + 9); /*0x724a82*/
      v10 = *(float *)(v9 + result + 4); /*0x724a85*/
      v11 = result + v9; /*0x724a89*/
      result += 0x10; /*0x724a8e*/
      *(float *)(v11 + 0xC) = v10 * v2->scale; /*0x724a91*/
    }
    while ( v7 < *((_DWORD *)this + 8) ); /*0x724a97*/
  }
  return result; /*0x724a99*/
}
