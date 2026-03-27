0xA24520: push    offset byte_B13238
0xA24525: mov     ecx, offset dword_B07CFC
0xA2452A: call    BSSimpleList_Remove
0xA2452F: mov     eax, off_B1323C; "bDisableDynamicCrosshair:GamePlay"
0xA24534: test    eax, eax
0xA24536: jz      short locret_A24544
0xA24538: cmp     byte ptr [eax], 53h ; 'S'
0xA2453B: jnz     short locret_A24544
0xA2453D: push    eax
0xA2453E: call    FormHeapFree
0xA24543: pop     ecx
0xA24544: retn
