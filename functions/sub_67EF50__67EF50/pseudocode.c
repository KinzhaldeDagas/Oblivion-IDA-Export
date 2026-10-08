// Verified graph-node Euclidean distance helper; used by Road and PathGrid graph operations. Null inputs return FLT_MAX.
float __cdecl TESConnectedPoint_DistanceTo(TESConnectedPoint *a, TESConnectedPoint *b)
{
  NiPoint3 *Position; // esi
  NiPoint3 *v3; // eax
  float v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]
  float aa; // [esp+18h] [ebp+4h]

  v6 = flt_A32048; /*0x67ef5e*/
  if ( a ) /*0x67ef64*/
  {
    if ( b ) /*0x67ef6c*/
    {
      Position = PathGraphNode_GetPosition(b); /*0x67ef76*/
      v3 = PathGraphNode_GetPosition(a); /*0x67ef78*/
      v7 = v3->x - Position->x; /*0x67ef81*/
      v8 = v3->y - Position->y; /*0x67ef8b*/
      v9 = v3->z - Position->z; /*0x67ef95*/
      aa = v7 * v7 + v8 * v8 + v9 * v9; /*0x67efb5*/
      return sqrt(aa); /*0x67efcb*/
    }
  }
  return v6; /*0x67efd3*/
}
