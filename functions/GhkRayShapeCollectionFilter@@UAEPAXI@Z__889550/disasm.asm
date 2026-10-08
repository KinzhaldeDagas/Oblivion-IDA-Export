0x889550: test    byte ptr [esp+arg_0], 1
0x889555: push    esi
0x889556: mov     esi, ecx
0x889558: mov     dword ptr [esi], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x88955E: jz      short loc_889569
0x889560: push    esi
0x889561: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x889566: add     esp, 4
0x889569: mov     eax, esi
0x88956B: pop     esi
0x88956C: retn    4
