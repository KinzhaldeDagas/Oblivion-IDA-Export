int __stdcall sub_447160(_BYTE *a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  if ( a1 && *a1 && NiTMap_GetAt(&off_B06164, (int)a1, &v2) )
    return v2;
  else
    return 0;
}
