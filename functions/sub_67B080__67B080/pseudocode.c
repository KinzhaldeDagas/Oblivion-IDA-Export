unsigned int __cdecl sub_67B080(TESChildCELL *a1, TESChildCELL *a2)
{
  float v3; // [esp+4h] [ebp-10h]
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+Ch] [ebp-8h]
  float v6; // [esp+10h] [ebp-4h]

  v6 = sub_6599B0(a1); /*0x67b08f*/
  v4 = sub_6599D0(a1); /*0x67b09a*/
  v5 = sub_6599B0(a2); /*0x67b0a9*/
  v3 = sub_6599D0(a2); /*0x67b0b4*/
  if ( v4 < (double)v3 ) /*0x67b0c8*/
    return 1; /*0x67b0c8*/
  if ( v4 > (double)v3 ) /*0x67b0de*/
    return 0xFFFFFFFF; /*0x67b0de*/
  if ( v6 < (double)v5 ) /*0x67b0f6*/
    return 1; /*0x67b0d6*/
  if ( v6 > (double)v5 ) /*0x67b0ff*/
    return 0xFFFFFFFF; /*0x67b0e0*/
  else
    return 0; /*0x67b101*/
}
