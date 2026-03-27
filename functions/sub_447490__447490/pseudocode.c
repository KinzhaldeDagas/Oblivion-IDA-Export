int __stdcall sub_447490(_BYTE *a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 0;
  if ( !NiTMap_GetAt(&off_B06164, (int)a1, &v2) )
    return 0;
  result = v2;
  if ( !v2 || *(_BYTE *)(v2 + 4) != 0xA )
    return 0;
  return result;
}
