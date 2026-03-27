unsigned int __cdecl sub_673B70(TESObjectREFR *a1, TESObjectREFR *a2)
{
  float Distance; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  Distance = TesObjectREF_GetDistance(a1, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
  v4 = TesObjectREF_GetDistance(a2, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
  if ( v4 <= (double)Distance )
    return v4 < (double)Distance;
  else
    return 0xFFFFFFFF;
}
