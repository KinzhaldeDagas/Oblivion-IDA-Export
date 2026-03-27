0x8F7FF0: push    ebx
0x8F7FF1: push    esi
0x8F7FF2: push    edi
0x8F7FF3: mov     edi, ecx
0x8F7FF5: lea     esi, [edi+1Ch]
0x8F7FF8: mov     ebx, 8
0x8F7FFD: lea     ecx, [ecx+0]
0x8F8000: xor     eax, eax
0x8F8002: mov     ax, [esi]
0x8F8005: cmp     ax, 0FFFFh
0x8F8009: jz      short loc_8F8014
0x8F800B: mov     ecx, [edi+8]
0x8F800E: mov     edx, [ecx]
0x8F8010: push    eax
0x8F8011: call    dword ptr [edx+10h]
0x8F8014: add     esi, 2
0x8F8017: dec     ebx
0x8F8018: jnz     short loc_8F8000
0x8F801A: test    edi, edi
0x8F801C: jz      short loc_8F8026
0x8F801E: mov     eax, [edi]
0x8F8020: push    1
0x8F8022: mov     ecx, edi
0x8F8024: call    dword ptr [eax]
0x8F8026: pop     edi
0x8F8027: pop     esi
0x8F8028: pop     ebx
0x8F8029: retn
