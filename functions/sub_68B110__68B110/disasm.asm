0x68B110: push    esi
0x68B111: mov     esi, ecx
0x68B113: mov     cl, [esi+4]
0x68B116: movsx   eax, cl
0x68B119: sub     eax, 0
0x68B11C: jz      short loc_68B137
0x68B11E: sub     eax, 1
0x68B121: jnz     short loc_68B130
0x68B123: cmp     cl, 1
0x68B126: jnz     short loc_68B130
0x68B128: mov     esi, [esi]
0x68B12A: test    esi, esi
0x68B12C: mov     eax, esi
0x68B12E: jnz     short loc_68B135
0x68B130: mov     eax, offset Vector3_InitValue?
0x68B135: pop     esi
0x68B136: retn
0x68B137: test    cl, cl
0x68B139: jnz     short loc_68B130
0x68B13B: mov     ecx, [esi]; this
0x68B13D: test    ecx, ecx
0x68B13F: jz      short loc_68B130
0x68B141: call    GetTeleportExtraData
0x68B146: test    eax, eax
0x68B148: jz      short loc_68B160
0x68B14A: cmp     byte ptr [esi+4], 0
0x68B14E: jnz     short loc_68B158
0x68B150: mov     ecx, [esi]
0x68B152: pop     esi
0x68B153: jmp     sub_4D76F0
0x68B158: xor     ecx, ecx
0x68B15A: pop     esi
0x68B15B: jmp     sub_4D76F0
0x68B160: cmp     byte ptr [esi+4], 0
0x68B164: jnz     short loc_68B16A
0x68B166: mov     ecx, [esi]
0x68B168: jmp     short loc_68B16C
0x68B16A: xor     ecx, ecx
0x68B16C: mov     eax, [ecx]
0x68B16E: mov     edx, [eax+174h]
0x68B174: pop     esi
0x68B175: jmp     edx
