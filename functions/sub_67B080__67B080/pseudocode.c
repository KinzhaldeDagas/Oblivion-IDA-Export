unsigned int __cdecl sub_67B080(TESChildCELL *a1, TESChildCELL *a2)
{
  float v3; // [esp+4h] [ebp-10h]
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+Ch] [ebp-8h]
  float v6; // [esp+10h] [ebp-4h]

  v6 = sub_6599B0(a1);
  v4 = sub_6599D0(a1);
  v5 = sub_6599B0(a2);
  v3 = sub_6599D0(a2);
  if ( v4 < (double)v3 )
    return 1;
  if ( v4 > (double)v3 )
    return 0xFFFFFFFF;
  if ( v6 < (double)v5 )
    return 1;
  if ( v6 > (double)v5 )
    return 0xFFFFFFFF;
  else
    return 0;
}
