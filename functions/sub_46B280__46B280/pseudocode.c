int __cdecl sub_46B280(_BYTE *a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x46b287*/
  if ( a1 && *a1 && NiTMap_GetAt(&off_B06164, (int)a1, &v2) ) /*0x46b29f*/
    return v2; /*0x46b2a8*/
  else
    return 0; /*0x46b2ad*/
}
