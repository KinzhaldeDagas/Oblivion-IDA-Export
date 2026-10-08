0xA26E30: mov     eax, OB_stBezierSpline_CacheMap_010201A0.head; Atexit destructor for Oblivion's inline spline-cache map. Erases the full node range, frees the sentinel head, and clears head/size. Cached spline payloads are expected to have been released by ClearCache before this map teardown.
0xA26E35: mov     edx, [eax]
0xA26E37: sub     esp, 8
0xA26E3A: push    esi
0xA26E3B: push    eax; lastNode
0xA26E3C: mov     ecx, offset OB_stBezierSpline_CacheMap_010201A0; this
0xA26E41: push    ecx; lastOwner
0xA26E42: push    edx; firstNode
0xA26E43: mov     esi, ecx
0xA26E45: push    esi; firstOwner
0xA26E46: lea     eax, [esp+1Ch+result]
0xA26E4A: push    eax; result
0xA26E4B: call    OB_stBezierSplineCacheMap_EraseRange_010201A0; Erases a [first,last) iterator range from the spline-cache map. Uses whole-tree destruction when the range is begin-to-end; otherwise repeatedly advances and erases individual nodes. Returns the resulting iterator.
0xA26E50: mov     ecx, OB_stBezierSpline_CacheMap_010201A0.head
0xA26E56: push    ecx
0xA26E57: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA26E5C: add     esp, 4
0xA26E5F: xor     eax, eax
0xA26E61: mov     OB_stBezierSpline_CacheMap_010201A0.head, eax
0xA26E66: mov     OB_stBezierSpline_CacheMap_010201A0.size, eax
0xA26E6B: pop     esi
0xA26E6C: add     esp, 8
0xA26E6F: retn
