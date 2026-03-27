0x4A85A0: push    ebx
0x4A85A1: push    edi
0x4A85A2: mov     edi, ecx
0x4A85A4: cmp     dword ptr [edi+108h], 0
0x4A85AB: setnz   bl
0x4A85AE: test    bl, bl
0x4A85B0: jz      short loc_4A85DF
0x4A85B2: push    esi
0x4A85B3: lea     esi, [edi+10Ch]
0x4A85B9: test    esi, esi
0x4A85BB: jz      short loc_4A85D9
0x4A85BD: lea     ecx, [ecx+0]
0x4A85C0: mov     eax, [esi]
0x4A85C2: test    eax, eax
0x4A85C4: jz      short loc_4A85D2
0x4A85C6: mov     edx, [edi]
0x4A85C8: push    eax
0x4A85C9: mov     eax, [edx+10h]
0x4A85CC: mov     ecx, edi
0x4A85CE: call    eax
0x4A85D0: and     bl, al
0x4A85D2: mov     esi, [esi+4]
0x4A85D5: test    esi, esi
0x4A85D7: jnz     short loc_4A85C0
0x4A85D9: pop     esi
0x4A85DA: pop     edi
0x4A85DB: mov     al, bl
0x4A85DD: pop     ebx
0x4A85DE: retn
0x4A85DF: pop     edi
0x4A85E0: mov     al, bl
0x4A85E2: pop     ebx
0x4A85E3: retn
