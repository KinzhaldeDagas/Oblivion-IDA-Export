0x945C30: push    esi
0x945C31: mov     esi, ecx
0x945C33: mov     eax, [esi+20h]
0x945C36: cmp     eax, 0FFFFFFFFh
0x945C39: jz      short loc_945C69
0x945C3B: mov     ecx, [esp+4+len]
0x945C3F: mov     edx, [esp+4+buf]
0x945C43: push    0; flags
0x945C45: push    ecx; len
0x945C46: push    edx; buf
0x945C47: push    eax; s
0x945C48: call    recv_0
0x945C4D: test    eax, eax
0x945C4F: jle     short loc_945C56
0x945C51: cmp     eax, 0FFFFFFFFh
0x945C54: jnz     short loc_945C6B
0x945C56: call    WSAGetLastError_0
0x945C5B: cmp     eax, 2733h
0x945C60: jz      short loc_945C69
0x945C62: mov     eax, [esi]
0x945C64: mov     ecx, esi
0x945C66: call    dword ptr [eax+0Ch]
0x945C69: xor     eax, eax
0x945C6B: pop     esi
0x945C6C: retn    8
