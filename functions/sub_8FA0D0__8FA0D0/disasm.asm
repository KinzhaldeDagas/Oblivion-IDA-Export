0x8FA0D0: push    ebx
0x8FA0D1: push    esi
0x8FA0D2: push    edi
0x8FA0D3: mov     edi, ecx
0x8FA0D5: lea     esi, [edi+0Ch]
0x8FA0D8: mov     ebx, 3
0x8FA0DD: lea     ecx, [ecx+0]
0x8FA0E0: xor     eax, eax
0x8FA0E2: mov     ax, [esi]
0x8FA0E5: cmp     ax, 0FFFFh
0x8FA0E9: jz      short loc_8FA0F4
0x8FA0EB: mov     ecx, [edi+8]
0x8FA0EE: mov     edx, [ecx]
0x8FA0F0: push    eax
0x8FA0F1: call    dword ptr [edx+10h]
0x8FA0F4: add     esi, 2
0x8FA0F7: dec     ebx
0x8FA0F8: jnz     short loc_8FA0E0
0x8FA0FA: test    edi, edi
0x8FA0FC: jz      short loc_8FA106
0x8FA0FE: mov     eax, [edi]
0x8FA100: push    1
0x8FA102: mov     ecx, edi
0x8FA104: call    dword ptr [eax]
0x8FA106: pop     edi
0x8FA107: pop     esi
0x8FA108: pop     ebx
0x8FA109: retn
