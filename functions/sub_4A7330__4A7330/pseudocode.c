bool __thiscall sub_4A7330(float *this, float *a2)
{
  double v3; // st7
  double v4; // st6
  float *v5; // eax
  float *v6; // esi
  float *v7; // edi
  float *v8; // ebx
  bool v9; // c0
  float v11; // [esp+0h] [ebp-28h]
  float v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+2Ch] [ebp+4h]

  v13 = 0; /*0x4a733c*/
  if ( !a2 ) /*0x4a7344*/
    return 0; /*0x4a7344*/
  if ( *((_DWORD *)this + 9) < 3u ) /*0x4a734e*/
    return 0; /*0x4a734e*/
  v12 = *a2; /*0x4a7356*/
  v18 = a2[1]; /*0x4a735d*/
  if ( sub_4A7130((int)this) > v12 || sub_4A7180((int)this) < v12 || sub_4A71D0(this) > v18 || sub_4A7220(this) < v18 ) /*0x4a73d1*/
    return 0; /*0x4a74d3*/
  v3 = v12; /*0x4a73d7*/
  v4 = v18; /*0x4a73dc*/
  v5 = this; /*0x4a73e1*/
  do /*0x4a74ac*/
  {
    v6 = *((float **)v5 + 1); /*0x4a73e4*/
    if ( !v6 ) /*0x4a73e9*/
      v6 = this; /*0x4a73eb*/
    v7 = *(float **)v5; /*0x4a73ed*/
    v8 = *(float **)v6; /*0x4a73f1*/
    v14 = **(float **)v5; /*0x4a73f3*/
    v16 = **(float **)v6; /*0x4a73f9*/
    if ( v14 > v3 && v16 > v3 /*0x4a7450*/
      || (v14 > v3 || v16 > v3) && (v11 = v4, v9 = v12 < sub_4A6AA0(v7, v8, v11), v3 = v12, v4 = v18, v9) )
    {
      v17 = v7[1]; /*0x4a745b*/
      v15 = v8[1]; /*0x4a7462*/
      if ( v17 > v4 && v15 <= v4 ) /*0x4a747e*/
      {
        ++v13; /*0x4a749b*/
      }
      else if ( v17 <= v4 && v15 > v4 ) /*0x4a7492*/
      {
        ++v13; /*0x4a7494*/
      }
    }
    v5 = v6; /*0x4a74aa*/
  }
  while ( v6 != this ); /*0x4a74ac*/
  return v13 % 2 != 0; /*0x4a74cc*/
}
