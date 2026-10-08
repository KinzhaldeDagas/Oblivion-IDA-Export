0xA26EB0: cmp     OB_g_strError_010201A0.capacity, 10h
0xA26EB7: jb      short loc_A26EC7
0xA26EB9: mov     eax, dword ptr OB_g_strError_010201A0.storage
0xA26EBE: push    eax
0xA26EBF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA26EC4: add     esp, 4
0xA26EC7: xor     eax, eax
0xA26EC9: mov     OB_g_strError_010201A0.capacity, 0Fh
0xA26ED3: mov     OB_g_strError_010201A0.size, eax
0xA26ED8: mov     byte ptr OB_g_strError_010201A0.storage, al
0xA26EDD: retn
