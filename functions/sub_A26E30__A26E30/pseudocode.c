// Atexit destructor for Oblivion's inline spline-cache map. Erases the full node range, frees the sentinel head, and clears head/size. Cached spline payloads are expected to have been released by ClearCache before this map teardown.
void __cdecl OB_stBezierSplineCache_GlobalDtor_010201A0()
{
  OB_stBezierSplineCacheIterator_010201A0 result; // [esp+4h] [ebp-8h] BYREF

  OB_stBezierSplineCacheMap_EraseRange_010201A0( /*0xa26e4b*/
    &OB_stBezierSpline_CacheMap_010201A0,
    &result,
    &OB_stBezierSpline_CacheMap_010201A0,
    OB_stBezierSpline_CacheMap_010201A0.head->left,
    &OB_stBezierSpline_CacheMap_010201A0,
    OB_stBezierSpline_CacheMap_010201A0.head);
  FormHeapFree((unsigned int)OB_stBezierSpline_CacheMap_010201A0.head); /*0xa26e57*/
  OB_stBezierSpline_CacheMap_010201A0.head = 0; /*0xa26e61*/
  OB_stBezierSpline_CacheMap_010201A0.size = 0; /*0xa26e66*/
}
