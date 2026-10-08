0x7E2400: push    ebx; Destroy one RenderPass and its owned light-array storage.
0x7E2401: push    esi
0x7E2402: mov     esi, ecx
0x7E2404: mov     eax, [esi+0Ch]; Load the owned light-array pointer from RenderPass+0x0C for destruction.
0x7E2407: xor     ebx, ebx
0x7E2409: cmp     eax, ebx
0x7E240B: mov     [esi+4], bx
0x7E240F: jz      short loc_7E241A
0x7E2411: push    eax
0x7E2412: call    FormHeapFree; Free the owned light-pointer array. RenderPass_Destroy does not free the 0x10-byte record itself.
0x7E2417: add     esp, 4
0x7E241A: mov     [esi+9], bl
0x7E241D: mov     [esi+0Ch], ebx
0x7E2420: pop     esi
0x7E2421: pop     ebx
0x7E2422: retn
