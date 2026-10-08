// Static initializer for Oblivion's inline 12-byte spline-cache map at 0xB4296C. Allocates the 0x30-byte head, marks it nil, self-links left/parent/right, zeros size, and registers the atexit destructor.
int __cdecl OB_stBezierSplineCache_GlobalInit_010201A0()
{
  OB_stBezierSpline_CacheMap_010201A0.head = OB_stBezierSplineCacheMap_AllocateHead_010201A0(); /*0xa10c0a*/
  OB_stBezierSpline_CacheMap_010201A0.head->isNil = 1; /*0xa10c0f*/
  OB_stBezierSpline_CacheMap_010201A0.head->parent = OB_stBezierSpline_CacheMap_010201A0.head; /*0xa10c18*/
  OB_stBezierSpline_CacheMap_010201A0.head->left = OB_stBezierSpline_CacheMap_010201A0.head; /*0xa10c20*/
  OB_stBezierSpline_CacheMap_010201A0.head->right = OB_stBezierSpline_CacheMap_010201A0.head; /*0xa10c27*/
  OB_stBezierSpline_CacheMap_010201A0.size = 0; /*0xa10c2f*/
  return atexit(OB_stBezierSplineCache_GlobalDtor_010201A0); /*0xa10c3f*/
}
