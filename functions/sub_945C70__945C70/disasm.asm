0x945C70: push    esi
0x945C71: mov     esi, ecx
0x945C73: mov     eax, [esi+20h]
0x945C76: cmp     eax, 0FFFFFFFFh
0x945C79: jz      short loc_945CA9
0x945C7B: mov     ecx, [esp+4+len]
0x945C7F: mov     edx, [esp+4+buf]
0x945C83: push    0; flags
0x945C85: push    ecx; len
0x945C86: push    edx; buf
0x945C87: push    eax; s
0x945C88: call    send_0
0x945C8D: test    eax, eax
0x945C8F: jle     short loc_945C96
0x945C91: cmp     eax, 0FFFFFFFFh
0x945C94: jnz     short loc_945CAB
0x945C96: call    WSAGetLastError_0
0x945C9B: cmp     eax, 2733h
0x945CA0: jz      short loc_945CA9
0x945CA2: mov     eax, [esi]
0x945CA4: mov     ecx, esi
0x945CA6: call    dword ptr [eax+0Ch]
0x945CA9: xor     eax, eax
0x945CAB: pop     esi
0x945CAC: retn    8
