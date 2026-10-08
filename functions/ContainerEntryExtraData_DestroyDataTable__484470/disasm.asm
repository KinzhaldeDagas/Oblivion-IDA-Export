0x484470: push    esi
0x484471: mov     esi, ecx
0x484473: mov     ecx, [esi]
0x484475: test    ecx, ecx
0x484477: jz      short loc_48447E
0x484479: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x48447E: mov     eax, [esi]
0x484480: push    eax
0x484481: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x484486: add     esp, 4
0x484489: mov     dword ptr [esi], 0
0x48448F: pop     esi
0x484490: retn
