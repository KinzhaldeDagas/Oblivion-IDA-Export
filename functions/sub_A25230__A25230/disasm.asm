0xA25230: push    offset flt_B14894
0xA25235: mov     ecx, offset dword_B07CFC
0xA2523A: call    BSSimpleList_Remove
0xA2523F: mov     eax, off_B14898; "fSpecualrStartMax:Display"
0xA25244: test    eax, eax
0xA25246: jz      short locret_A25254
0xA25248: cmp     byte ptr [eax], 53h ; 'S'
0xA2524B: jnz     short locret_A25254
0xA2524D: push    eax
0xA2524E: call    FormHeapFree
0xA25253: pop     ecx
0xA25254: retn
