int __cdecl CompareActorDistanceToPlayer(TESObjectREFR *left, TESObjectREFR *right)
{
  float Distance; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  Distance = TesObjectREF_GetDistance(left, (TESObjectREFR *)reference, 0); /*0x673b84*/
  v4 = TesObjectREF_GetDistance(right, (TESObjectREFR *)reference, 0); /*0x673b99*/
  if ( v4 <= (double)Distance ) /*0x673bab*/
    return v4 < (double)Distance; /*0x673bbf*/
  else
    return 0xFFFFFFFF; /*0x673baf*/
}
