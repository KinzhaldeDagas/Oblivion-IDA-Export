0xA10C00: mov     ecx, offset OB_stBezierSpline_CacheMap_010201A0; Static initializer for Oblivion's inline 12-byte spline-cache map at 0xB4296C. Allocates the 0x30-byte head, marks it nil, self-links left/parent/right, zeros size, and registers the atexit destructor.
0xA10C05: call    OB_stBezierSplineCacheMap_AllocateHead_010201A0; Allocates the 0x30-byte cache-map head/sentinel node from FormHeap. Initializes links to null, color=black (1), and isNil=0; global init converts it into the self-linked nil sentinel.
0xA10C0A: mov     OB_stBezierSpline_CacheMap_010201A0.head, eax
0xA10C0F: mov     byte ptr [eax+2Dh], 1
0xA10C13: mov     eax, OB_stBezierSpline_CacheMap_010201A0.head
0xA10C18: mov     [eax+4], eax
0xA10C1B: mov     eax, OB_stBezierSpline_CacheMap_010201A0.head
0xA10C20: mov     [eax], eax
0xA10C22: mov     eax, OB_stBezierSpline_CacheMap_010201A0.head
0xA10C27: mov     [eax+8], eax
0xA10C2A: push    offset OB_stBezierSplineCache_GlobalDtor_010201A0; void (__cdecl *)()
0xA10C2F: mov     OB_stBezierSpline_CacheMap_010201A0.size, 0
0xA10C39: call    _atexit
0xA10C3E: pop     ecx
0xA10C3F: retn
