int __stdcall sub_447160(_BYTE *a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x447167*/
  if ( a1 && *a1 && NiTMap_GetAt(&off_B06164, (int)a1, &v2) ) /*0x44717f*/
    return v2; /*0x447188*/
  else
    return 0; /*0x44718f*/
}
