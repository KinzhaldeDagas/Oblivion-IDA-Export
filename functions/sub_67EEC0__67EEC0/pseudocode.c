double __cdecl sub_67EEC0(TESConnectedPoint *a1, TESConnectedPoint *a2)
{
  NiPoint3 *Position; // esi
  NiPoint3 *v3; // eax
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]
  float v9; // [esp+18h] [ebp+4h]
  float v10; // [esp+18h] [ebp+4h]

  v5 = flt_A32048; /*0x67eece*/
  if ( a1 ) /*0x67eed4*/
  {
    if ( a2 ) /*0x67eedc*/
    {
      Position = PathGraphNode_GetPosition(a2); /*0x67eee6*/
      v3 = PathGraphNode_GetPosition(a1); /*0x67eee8*/
      v6 = v3->x - Position->x; /*0x67eef1*/
      v7 = v3->y - Position->y; /*0x67eefb*/
      v8 = v3->z - Position->z; /*0x67ef05*/
      v9 = v6 * v6 + v7 * v7 + v8 * v8; /*0x67ef25*/
      v10 = sqrt(v9); /*0x67ef32*/
      return (float)(v10 + v10); /*0x67ef3d*/
    }
  }
  return v5; /*0x67ef45*/
}
