0x5C1160: cmp     dword ptr ds:0B3B430h, 0
0x5C1167: jl      short loc_5C11D2
0x5C1169: cmp     dword ptr ds:0B3B434h, 0
0x5C1170: jl      short loc_5C117E
0x5C1172: cmp     dword ptr ds:0B3B438h, 0
0x5C1179: jl      short loc_5C117E
0x5C117B: mov     al, 1
0x5C117D: retn
0x5C117E: mov     ecx, ds:0B33EA0h
0x5C1184: mov     edx, ds:0B3B424h
0x5C118A: push    esi
0x5C118B: xor     esi, esi
0x5C118D: push    edi
0x5C118E: xor     eax, eax
0x5C1190: cmp     dword ptr ds:0B3B430h[eax*4], 0
0x5C1198: jl      short loc_5C11AD
0x5C119A: test    eax, eax
0x5C119C: jnz     short loc_5C11A6
0x5C119E: mov     edi, ecx
0x5C11A0: sub     edi, edx
0x5C11A2: add     esi, edi
0x5C11A4: jmp     short loc_5C11AD
0x5C11A6: add     esi, ds:0B3B424h[eax*4]
0x5C11AD: add     eax, 1
0x5C11B0: cmp     eax, 3
0x5C11B3: jl      short loc_5C1190
0x5C11B5: fld     dword ptr ds:0B38BB0h
0x5C11BB: fmul    qword ptr ds:0A2FC70h
0x5C11C1: call    Double_To_SInt32
0x5C11C6: xor     ecx, ecx
0x5C11C8: cmp     esi, eax
0x5C11CA: setnl   cl
0x5C11CD: pop     edi
0x5C11CE: mov     al, cl
0x5C11D0: pop     esi
0x5C11D1: retn
0x5C11D2: xor     al, al
0x5C11D4: retn
