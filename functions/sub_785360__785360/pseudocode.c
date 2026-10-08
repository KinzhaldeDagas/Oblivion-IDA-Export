// Allocates a 0x30-byte spline-cache node from FormHeap and delegates field/key/value initialization to OB_stBezierSplineCacheNode_Init_010201A0.
OB_stBezierSplineCacheNode_010201A0 *__cdecl OB_stBezierSplineCacheMap_AllocateNode_010201A0(
        OB_stBezierSplineCacheNode_010201A0 *left,
        OB_stBezierSplineCacheNode_010201A0 *parent,
        OB_stBezierSplineCacheNode_010201A0 *right,
        const OB_stBezierSplineCachePair_010201A0 *value,
        unsigned __int8 color)
{
  OB_stBezierSplineCacheNode_010201A0 *v5; // esi
  int v7; // [esp+0h] [ebp-28h] BYREF
  void *v8; // [esp+10h] [ebp-18h]
  OB_stBezierSplineCacheNode_010201A0 *v9; // [esp+14h] [ebp-14h]
  int *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = &v7; /*0x785388*/
  v5 = (OB_stBezierSplineCacheNode_010201A0 *)FormHeapAlloc(0x30u); /*0x785392*/
  v9 = v5; /*0x785397*/
  v11 = 1; /*0x78539a*/
  v8 = v5; /*0x7853a1*/
  if ( v5 ) /*0x7853aa*/
    OB_stBezierSplineCacheNode_Init_010201A0(v5, left, parent, right, value, color); /*0x7853c2*/
  return v5; /*0x7853c9*/
}
