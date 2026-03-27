0x8BAA10: push    ebx
0x8BAA11: push    esi
0x8BAA12: mov     esi, large fs:2Ch
0x8BAA19: push    edi
0x8BAA1A: mov     edi, ds:0BA9DE4h
0x8BAA20: mov     eax, [esi+edi*4]
0x8BAA23: mov     eax, [eax+1A0h]
0x8BAA29: xor     ebx, ebx
0x8BAA2B: cmp     eax, ebx
0x8BAA2D: jz      short loc_8BAA3B
0x8BAA2F: mov     ecx, ds:0BA7D98h
0x8BAA35: mov     edx, [ecx]
0x8BAA37: push    eax
0x8BAA38: call    dword ptr [edx+4]
0x8BAA3B: mov     eax, [esi+edi*4]
0x8BAA3E: mov     [eax+1A0h], ebx
0x8BAA44: mov     [eax+1ACh], ebx
0x8BAA4A: pop     edi
0x8BAA4B: mov     [eax+1A4h], ebx
0x8BAA51: pop     esi
0x8BAA52: mov     [eax+1A8h], ebx
0x8BAA58: pop     ebx
0x8BAA59: retn
