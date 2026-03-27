0xA1B450: push    offset flt_B08150
0xA1B455: mov     ecx, offset dword_B07CFC
0xA1B45A: call    BSSimpleList_Remove
0xA1B45F: mov     eax, off_B08154; "fFlickerMovement:bLightAttenuation"
0xA1B464: test    eax, eax
0xA1B466: jz      short locret_A1B474
0xA1B468: cmp     byte ptr [eax], 53h ; 'S'
0xA1B46B: jnz     short locret_A1B474
0xA1B46D: push    eax
0xA1B46E: call    FormHeapFree
0xA1B473: pop     ecx
0xA1B474: retn
