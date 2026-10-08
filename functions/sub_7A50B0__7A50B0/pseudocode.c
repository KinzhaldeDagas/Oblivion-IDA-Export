// Projects a vertex onto the infinite line through start/end; the optimized Oblivion ABI omits the unused CProjectedShadow this pointer.
OB_stVec3_010201A0 *__stdcall OB_CProjectedShadow_ClosestPoint_010201A0(
        OB_stVec3_010201A0 *outPoint,
        const OB_stVec3_010201A0 *start,
        const OB_stVec3_010201A0 *end,
        const OB_stVec3_010201A0 *vertex)
{
  float y; // edx
  float z; // ecx
  float v8; // [esp+4h] [ebp-18h] BYREF
  float v9; // [esp+8h] [ebp-14h]
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+10h] [ebp-Ch]
  float v12; // [esp+14h] [ebp-8h]
  float v13; // [esp+18h] [ebp-4h]
  float starta; // [esp+24h] [ebp+8h]

  if ( end->x == start->x && end->y == start->y && end->z == start->z ) /*0x7a50e5*/
  {
    y = start->y; /*0x7a50ed*/
    outPoint->x = start->x; /*0x7a50f0*/
    z = start->z; /*0x7a50f2*/
    outPoint->y = y; /*0x7a50f5*/
    outPoint->z = z; /*0x7a50f8*/
    return outPoint; /*0x7a50e9*/
  }
  else
  {
    v8 = end->x - start->x; /*0x7a5106*/
    v9 = end->y - start->y; /*0x7a5110*/
    v10 = end->z - start->z; /*0x7a511e*/
    OB_NormalizeVec3_010201A0(&v8); /*0x7a5122*/
    v11 = vertex->x - start->x; /*0x7a512f*/
    v12 = vertex->y - start->y; /*0x7a5139*/
    v13 = vertex->z - start->z; /*0x7a5147*/
    starta = v13 * v10 + v12 * v9 + v11 * v8; /*0x7a5177*/
    v11 = v8 * starta; /*0x7a5185*/
    v12 = v9 * starta; /*0x7a518f*/
    v13 = v10 * starta; /*0x7a5195*/
    outPoint->x = start->x + v11; /*0x7a519f*/
    outPoint->y = start->y + v12; /*0x7a51a8*/
    outPoint->z = v13 + start->z; /*0x7a51b3*/
    return outPoint; /*0x7a5140*/
  }
}
