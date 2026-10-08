0x67F100: mov     eax, [ecx+4]; Verified generic BSSimpleList head removal helper: advances the inline first-node header to its successor and frees the detached list node; if there is no successor, clears the head data pointer.
0x67F103: test    eax, eax
0x67F105: jz      short loc_67F11B
0x67F107: mov     edx, [eax+4]
0x67F10A: mov     [ecx+4], edx
0x67F10D: mov     edx, [eax]
0x67F10F: push    eax
0x67F110: mov     [ecx], edx
0x67F112: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x67F117: add     esp, 4
0x67F11A: retn
0x67F11B: mov     dword ptr [ecx], 0
0x67F121: retn
