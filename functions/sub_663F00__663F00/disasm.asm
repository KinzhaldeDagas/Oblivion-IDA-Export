0x663F00: mov     ecx, ds:0B333C4h
0x663F06: push    ebx
0x663F07: add     ecx, 44h ; 'D'
0x663F0A: call    GetExtraDataFollower
0x663F0F: mov     ebx, eax
0x663F11: test    ebx, ebx
0x663F13: jz      short loc_663F4C
0x663F15: push    esi
0x663F16: mov     esi, [ebx+0Ch]
0x663F19: test    esi, esi
0x663F1B: jz      short loc_663F4B
0x663F1D: push    edi
0x663F1E: mov     edi, edi
0x663F20: mov     eax, [esi]
0x663F22: test    eax, eax
0x663F24: jz      short loc_663F4A
0x663F26: mov     ecx, [eax+58h]
0x663F29: test    ecx, ecx
0x663F2B: mov     edi, [esi+4]
0x663F2E: jz      short loc_663F44
0x663F30: mov     edx, [ecx]
0x663F32: push    1
0x663F34: push    eax
0x663F35: mov     eax, [edx+18h]
0x663F38: call    eax
0x663F3A: cmp     edi, [esi+4]
0x663F3D: jz      short loc_663F44
0x663F3F: mov     esi, [ebx+0Ch]
0x663F42: jmp     short loc_663F46
0x663F44: mov     esi, edi
0x663F46: test    esi, esi
0x663F48: jnz     short loc_663F20
0x663F4A: pop     edi
0x663F4B: pop     esi
0x663F4C: pop     ebx
0x663F4D: retn
