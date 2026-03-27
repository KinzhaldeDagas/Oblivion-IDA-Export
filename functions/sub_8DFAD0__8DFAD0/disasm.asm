0x8DFAD0: mov     ecx, [ecx+8]
0x8DFAD3: push    ebx
0x8DFAD4: mov     ebx, [esp+4+arg_0]
0x8DFAD8: mov     edx, [ebx]
0x8DFADA: movsx   eax, byte ptr [edx+5]
0x8DFADE: push    esi
0x8DFADF: mov     esi, [ebx+4]
0x8DFAE2: add     eax, edx
0x8DFAE4: movsx   edx, byte ptr [esi+5]
0x8DFAE8: add     edx, esi
0x8DFAEA: mov     esi, [eax+10h]
0x8DFAED: push    edi
0x8DFAEE: mov     edi, [edx+10h]
0x8DFAF1: add     esi, eax
0x8DFAF3: add     edi, edx
0x8DFAF5: cmp     byte ptr [ecx+44h], 0
0x8DFAF9: jz      short loc_8DFB50
0x8DFAFB: cmp     byte ptr [esi+91h], 0
0x8DFB02: jnz     short loc_8DFB50
0x8DFB04: cmp     byte ptr [edi+91h], 0
0x8DFB0B: jnz     short loc_8DFB50
0x8DFB0D: mov     esi, [esi+54h]
0x8DFB10: cmp     esi, [edi+54h]
0x8DFB13: jz      short loc_8DFB50
0x8DFB15: mov     eax, [ecx+74h]
0x8DFB18: lea     esi, [ecx+6Ch]
0x8DFB1B: mov     ecx, [esi+4]
0x8DFB1E: and     eax, 3FFFFFFFh
0x8DFB23: cmp     ecx, eax
0x8DFB25: jnz     short loc_8DFB32
0x8DFB27: push    8
0x8DFB29: push    esi
0x8DFB2A: call    sub_8A6EE0
0x8DFB2F: add     esp, 8
0x8DFB32: mov     eax, [ebx]
0x8DFB34: mov     ecx, [esi+4]
0x8DFB37: mov     edx, [esi]
0x8DFB39: mov     [edx+ecx*8], eax
0x8DFB3C: mov     eax, [ebx+4]
0x8DFB3F: mov     [edx+ecx*8+4], eax
0x8DFB43: mov     eax, [esi+4]
0x8DFB46: inc     eax
0x8DFB47: pop     edi
0x8DFB48: mov     [esi+4], eax
0x8DFB4B: pop     esi
0x8DFB4C: pop     ebx
0x8DFB4D: retn    4
0x8DFB50: push    edx
0x8DFB51: push    eax
0x8DFB52: call    sub_8E66D0
0x8DFB57: add     esp, 8
0x8DFB5A: test    eax, eax
0x8DFB5C: jz      short loc_8DFB67
0x8DFB5E: push    eax
0x8DFB5F: call    sub_8E7920
0x8DFB64: add     esp, 4
0x8DFB67: pop     edi
0x8DFB68: pop     esi
0x8DFB69: pop     ebx
0x8DFB6A: retn    4
