0x4360A0: push    0FFFFFFFFh
0x4360A2: push    offset SEH_4360A0
0x4360A7: mov     eax, large fs:0
0x4360AD: push    eax
0x4360AE: push    ecx
0x4360AF: push    ebx
0x4360B0: push    ebp
0x4360B1: push    esi
0x4360B2: push    edi
0x4360B3: mov     eax, ___security_cookie
0x4360B8: xor     eax, esp
0x4360BA: push    eax
0x4360BB: lea     eax, [esp+24h+var_C]
0x4360BF: mov     large fs:0, eax
0x4360C5: mov     esi, ecx
0x4360C7: movzx   eax, word ptr [esi+8]
0x4360CB: mov     ebp, [esp+24h+arg_0]
0x4360CF: cmp     ebp, eax
0x4360D1: jz      loc_4362C5
0x4360D7: movzx   eax, word ptr [esi+0Ah]
0x4360DB: movzx   ecx, ax
0x4360DE: cmp     ebp, ecx
0x4360E0: jnb     short loc_436157
0x4360E2: cmp     bp, ax
0x4360E5: movzx   ecx, bp
0x4360E8: mov     [esp+24h+arg_0], ecx
0x4360EC: jnb     short loc_436153
0x4360EE: mov     edi, edi
0x4360F0: mov     eax, [esi+4]
0x4360F3: movzx   edx, cx
0x4360F6: lea     ebx, [eax+edx*4]
0x4360F9: xor     edx, edx
0x4360FB: cmp     [ebx], edx
0x4360FD: setnz   al
0x436100: test    al, al
0x436102: jz      short loc_436146
0x436104: mov     [esp+24h+var_10], edx
0x436108: mov     edi, [ebx]
0x43610A: cmp     edi, edx
0x43610C: mov     [esp+24h+var_4], edx
0x436110: jz      short loc_436138
0x436112: lea     ecx, [edi+8]
0x436115: push    ecx; lpAddend
0x436116: call    ds:InterlockedDecrement
0x43611C: test    eax, eax
0x43611E: jnz     short loc_43612E
0x436120: test    edi, edi
0x436122: jz      short loc_43612E
0x436124: mov     edx, [edi]
0x436126: mov     eax, [edx]
0x436128: push    1
0x43612A: mov     ecx, edi
0x43612C: call    eax
0x43612E: mov     ecx, [esp+24h+arg_0]
0x436132: mov     dword ptr [ebx], 0
0x436138: add     word ptr [esi+0Ch], 0FFFFh
0x43613E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x436146: add     ecx, 1
0x436149: cmp     cx, [esi+0Ah]
0x43614D: mov     [esp+24h+arg_0], ecx
0x436151: jb      short loc_4360F0
0x436153: mov     [esi+0Ah], bp
0x436157: test    ebp, ebp
0x436159: mov     eax, [esi+4]
0x43615C: mov     [esp+24h+var_10], eax
0x436160: mov     [esi+8], bp
0x436164: jbe     loc_4362DB
0x43616A: movzx   edi, bp
0x43616D: xor     ecx, ecx
0x43616F: mov     eax, edi
0x436171: mov     edx, 4
0x436176: mul     edx
0x436178: seto    cl
0x43617B: neg     ecx
0x43617D: or      ecx, eax
0x43617F: xor     eax, eax
0x436181: add     ecx, 4
0x436184: setb    al
0x436187: neg     eax
0x436189: or      eax, ecx
0x43618B: push    eax; Size
0x43618C: call    FormHeapAlloc
0x436191: add     esp, 4
0x436194: mov     [esp+24h+arg_0], eax
0x436198: test    eax, eax
0x43619A: mov     [esp+24h+var_4], 1
0x4361A2: jz      short loc_4361BE
0x4361A4: push    offset sub_4BDDC0; a5
0x4361A9: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x4361AE: push    edi; size
0x4361AF: lea     ebx, [eax+4]
0x4361B2: push    4; a2
0x4361B4: push    ebx; a1
0x4361B5: mov     [eax], edi
0x4361B7: call    ArrayConstructor
0x4361BC: jmp     short loc_4361C0
0x4361BE: xor     ebx, ebx
0x4361C0: xor     eax, eax
0x4361C2: cmp     [esi+0Ah], ax
0x4361C6: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4361CE: mov     [esi+4], ebx
0x4361D1: mov     [esp+24h+arg_0], eax
0x4361D5: jbe     short loc_436242
0x4361D7: jmp     short loc_4361E0
0x4361D9: align 10h
0x4361E0: mov     ebp, [esi+4]
0x4361E3: mov     ecx, [esp+24h+var_10]
0x4361E7: movzx   edi, ax
0x4361EA: add     edi, edi
0x4361EC: add     edi, edi
0x4361EE: mov     ebx, [ebp+edi+0]
0x4361F2: add     ebp, edi
0x4361F4: cmp     ebx, [edi+ecx]
0x4361F7: jz      short loc_436231
0x4361F9: test    ebx, ebx
0x4361FB: jz      short loc_436219
0x4361FD: lea     edx, [ebx+8]
0x436200: push    edx; lpAddend
0x436201: call    ds:InterlockedDecrement
0x436207: test    eax, eax
0x436209: jnz     short loc_436219
0x43620B: test    ebx, ebx
0x43620D: jz      short loc_436219
0x43620F: mov     eax, [ebx]
0x436211: mov     edx, [eax]
0x436213: push    1
0x436215: mov     ecx, ebx
0x436217: call    edx
0x436219: mov     eax, [esp+24h+var_10]
0x43621D: mov     edi, [edi+eax]
0x436220: test    edi, edi
0x436222: mov     [ebp+0], edi
0x436225: jz      short loc_436231
0x436227: add     edi, 8
0x43622A: push    edi; lpAddend
0x43622B: call    ds:InterlockedIncrement
0x436231: mov     eax, [esp+24h+arg_0]
0x436235: add     eax, 1
0x436238: cmp     ax, [esi+0Ah]
0x43623C: mov     [esp+24h+arg_0], eax
0x436240: jb      short loc_4361E0
0x436242: movzx   ebx, word ptr [esi+0Ah]
0x436246: cmp     bx, [esi+8]
0x43624A: jnb     short loc_4362A0
0x43624C: mov     [esp+24h+arg_0], 0
0x436254: mov     edx, [esi+4]
0x436257: movzx   ecx, bx
0x43625A: mov     edi, [edx+ecx*4]
0x43625D: test    edi, edi
0x43625F: lea     ebp, [edx+ecx*4]
0x436262: mov     [esp+24h+var_4], 2
0x43626A: jz      short loc_43628F
0x43626C: lea     eax, [edi+8]
0x43626F: push    eax; lpAddend
0x436270: call    ds:InterlockedDecrement
0x436276: test    eax, eax
0x436278: jnz     short loc_436288
0x43627A: test    edi, edi
0x43627C: jz      short loc_436288
0x43627E: mov     edx, [edi]
0x436280: mov     eax, [edx]
0x436282: push    1
0x436284: mov     ecx, edi
0x436286: call    eax
0x436288: mov     dword ptr [ebp+0], 0
0x43628F: add     ebx, 1
0x436292: cmp     bx, [esi+8]
0x436296: mov     [esp+24h+var_4], 0FFFFFFFFh
0x43629E: jb      short loc_436254
0x4362A0: mov     eax, [esp+24h+var_10]
0x4362A4: test    eax, eax
0x4362A6: jz      short loc_4362C5
0x4362A8: mov     ecx, [eax-4]
0x4362AB: lea     esi, [eax-4]
0x4362AE: push    offset sub_4BDDC0; void (__thiscall *)(void *)
0x4362B3: push    ecx; int
0x4362B4: push    4; unsigned int
0x4362B6: push    eax; void *
0x4362B7: call    $LN21
0x4362BC: push    esi
0x4362BD: call    FormHeapFree
0x4362C2: add     esp, 4
0x4362C5: mov     ecx, [esp+24h+var_C]
0x4362C9: mov     large fs:0, ecx
0x4362D0: pop     ecx
0x4362D1: pop     edi
0x4362D2: pop     esi
0x4362D3: pop     ebp
0x4362D4: pop     ebx
0x4362D5: add     esp, 10h
0x4362D8: retn    4
0x4362DB: mov     dword ptr [esi+4], 0
0x4362E2: jmp     short loc_4362A4
