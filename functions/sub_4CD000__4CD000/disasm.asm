0x4CD000: push    ebp
0x4CD001: mov     ebp, ecx
0x4CD003: push    edi
0x4CD004: push    ebp; a2
0x4CD005: mov     ecx, offset stru_B35C80; this
0x4CD00A: call    sub_496EA0
0x4CD00F: lea     edi, [ebp+48h]
0x4CD012: test    edi, edi
0x4CD014: jz      short loc_4CD076
0x4CD016: push    esi
0x4CD017: mov     esi, [edi]
0x4CD019: test    esi, esi
0x4CD01B: jz      short loc_4CD06E
0x4CD01D: mov     ecx, esi
0x4CD01F: call    sub_4D7000
0x4CD024: test    al, al
0x4CD026: jnz     short loc_4CD06E
0x4CD028: mov     eax, [esi]
0x4CD02A: mov     edx, [eax+170h]
0x4CD030: mov     ecx, esi
0x4CD032: call    edx
0x4CD034: cmp     byte ptr [eax+4], 1Eh
0x4CD038: jnz     short loc_4CD06E
0x4CD03A: mov     eax, [esi]
0x4CD03C: mov     edx, [eax+154h]
0x4CD042: mov     ecx, esi
0x4CD044: call    edx
0x4CD046: test    eax, eax
0x4CD048: jz      short loc_4CD06E
0x4CD04A: mov     eax, [esi]
0x4CD04C: mov     edx, [eax+154h]
0x4CD052: mov     ecx, esi
0x4CD054: call    edx
0x4CD056: mov     esi, eax
0x4CD058: mov     eax, [esi]
0x4CD05A: mov     edx, [eax+9Ch]
0x4CD060: mov     ecx, esi
0x4CD062: call    edx
0x4CD064: mov     edx, [eax]
0x4CD066: mov     ecx, eax
0x4CD068: mov     eax, [edx+4]
0x4CD06B: push    esi
0x4CD06C: call    eax
0x4CD06E: mov     edi, [edi+4]
0x4CD071: test    edi, edi
0x4CD073: jnz     short loc_4CD017
0x4CD075: pop     esi
0x4CD076: push    ebp; a2
0x4CD077: mov     ecx, offset stru_B35C80; this
0x4CD07C: call    sub_496F50
0x4CD081: pop     edi
0x4CD082: pop     ebp
0x4CD083: retn
