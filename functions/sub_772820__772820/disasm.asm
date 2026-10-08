0x772820: push    esi
0x772821: mov     esi, ecx
0x772823: call    sub_772840
0x772828: test    [esp+4+arg_0], 1
0x77282D: jz      short loc_772838
0x77282F: push    esi
0x772830: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x772835: add     esp, 4
0x772838: mov     eax, esi
0x77283A: pop     esi
0x77283B: retn    4
