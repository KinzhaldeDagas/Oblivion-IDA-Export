0x9064C0: push    ebx
0x9064C1: push    esi
0x9064C2: push    edi
0x9064C3: mov     edi, ecx
0x9064C5: mov     esi, [edi+0Ch]
0x9064C8: mov     eax, [edi+10h]
0x9064CB: lea     eax, [eax+eax*2]
0x9064CE: mov     ecx, esi
0x9064D0: lea     ebx, [ecx+eax*4]
0x9064D3: cmp     esi, ebx
0x9064D5: jz      short loc_9064EC
0x9064D7: mov     eax, [esi+8]
0x9064DA: test    eax, eax
0x9064DC: jz      short loc_9064E5
0x9064DE: mov     ecx, eax
0x9064E0: mov     edx, [ecx]
0x9064E2: call    dword ptr [edx+18h]
0x9064E5: add     esi, 0Ch
0x9064E8: cmp     esi, ebx
0x9064EA: jnz     short loc_9064D7
0x9064EC: mov     eax, [edi]
0x9064EE: push    1
0x9064F0: mov     ecx, edi
0x9064F2: call    dword ptr [eax]
0x9064F4: pop     edi
0x9064F5: pop     esi
0x9064F6: pop     ebx
0x9064F7: retn
