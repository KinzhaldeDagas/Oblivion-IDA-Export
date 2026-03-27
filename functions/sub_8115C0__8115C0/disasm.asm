0x8115C0: mov     eax, [esp+arg_0]
0x8115C4: push    ebx
0x8115C5: push    esi
0x8115C6: mov     esi, [eax+9Ch]
0x8115CC: mov     edx, [esi+10h]
0x8115CF: push    edi
0x8115D0: movzx   edi, word ptr [esi+0Ch]
0x8115D4: mov     ebx, ecx
0x8115D6: mov     eax, [ebx+0A4h]
0x8115DC: mov     ecx, edi
0x8115DE: shl     ecx, 4
0x8115E1: push    ecx; Size
0x8115E2: push    edx; Src
0x8115E3: push    eax; Dst
0x8115E4: call    _memcpy
0x8115E9: movzx   eax, word ptr [esi+0Eh]
0x8115ED: mov     ecx, [esi]
0x8115EF: mov     ecx, [ecx+0B4h]
0x8115F5: movzx   edx, ax
0x8115F8: add     esp, 0Ch
0x8115FB: cmp     edx, edi
0x8115FD: jnz     short loc_811605
0x8115FF: movzx   eax, word ptr [ecx+40h]
0x811603: jmp     short loc_811613
0x811605: mov     edx, [esi+4]
0x811608: mov     dx, [edx+32h]
0x81160C: imul    dx, ax
0x811610: movzx   eax, dx
0x811613: mov     edx, [ecx]
0x811615: push    eax
0x811616: mov     eax, [edx+58h]
0x811619: call    eax
0x81161B: mov     ebx, [ebx+0A8h]
0x811621: test    ebx, ebx
0x811623: jz      short loc_81162C
0x811625: movzx   ecx, word ptr [esi+0Eh]
0x811629: mov     [ebx+20h], ecx
0x81162C: pop     edi
0x81162D: pop     esi
0x81162E: pop     ebx
0x81162F: retn    4
