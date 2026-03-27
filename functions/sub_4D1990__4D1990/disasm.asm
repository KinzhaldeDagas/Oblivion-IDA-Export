0x4D1990: push    esi
0x4D1991: mov     esi, [esp+4+arg_0]
0x4D1995: test    esi, esi
0x4D1997: jnz     short loc_4D199D
0x4D1999: xor     al, al
0x4D199B: pop     esi
0x4D199C: retn
0x4D199D: mov     eax, [esi+23Ch]
0x4D19A3: cmp     eax, ds:0B06048h
0x4D19A9: push    edi
0x4D19AA: lea     edi, [esi+23Ch]
0x4D19B0: jnz     short loc_4D1A2A
0x4D19B2: push    1
0x4D19B4: mov     ecx, esi
0x4D19B6: call    TESFile_NextRecordEx; NextForm?
0x4D19BB: test    al, al
0x4D19BD: jz      short loc_4D1A2A
0x4D19BF: push    edi
0x4D19C0: call    sub_4CCD00
0x4D19C5: add     esp, 4
0x4D19C8: test    al, al
0x4D19CA: jz      short loc_4D1A2A
0x4D19CC: push    1
0x4D19CE: mov     ecx, esi
0x4D19D0: call    TESFile_NextRecordEx; NextForm?
0x4D19D5: test    al, al
0x4D19D7: jz      short loc_4D1A2A
0x4D19D9: push    edi
0x4D19DA: call    sub_4CCD00
0x4D19DF: add     esp, 4
0x4D19E2: test    al, al
0x4D19E4: jz      short loc_4D1A2A
0x4D19E6: mov     ecx, [edi]
0x4D19E8: cmp     ecx, ds:0B05E20h
0x4D19EE: jnz     short loc_4D1A2A
0x4D19F0: cmp     dword ptr [edi+0Ch], 8
0x4D19F4: jnz     short loc_4D1A0A
0x4D19F6: mov     ecx, esi
0x4D19F8: call    TESFile__NextGroup
0x4D19FD: push    edi
0x4D19FE: call    sub_4CCD00
0x4D1A03: add     esp, 4
0x4D1A06: test    al, al
0x4D1A08: jz      short loc_4D1A2A
0x4D1A0A: cmp     dword ptr [edi+0Ch], 0Ah
0x4D1A0E: jnz     short loc_4D1A24
0x4D1A10: mov     ecx, esi
0x4D1A12: call    TESFile__NextGroup
0x4D1A17: push    edi
0x4D1A18: call    sub_4CCD00
0x4D1A1D: add     esp, 4
0x4D1A20: test    al, al
0x4D1A22: jz      short loc_4D1A2A
0x4D1A24: cmp     dword ptr [edi+0Ch], 9
0x4D1A28: jz      short loc_4D1A2F
0x4D1A2A: pop     edi
0x4D1A2B: xor     al, al
0x4D1A2D: pop     esi
0x4D1A2E: retn
0x4D1A2F: push    ebx
0x4D1A30: push    1
0x4D1A32: mov     ecx, esi
0x4D1A34: call    TESFile_NextRecordEx; NextForm?
0x4D1A39: mov     ecx, esi
0x4D1A3B: xor     bl, bl
0x4D1A3D: call    TESFile_GetRecordType
0x4D1A42: push    eax
0x4D1A43: call    sub_4CA010
0x4D1A48: add     esp, 4
0x4D1A4B: test    al, al
0x4D1A4D: jz      short loc_4D1A81
0x4D1A4F: nop
0x4D1A50: mov     ecx, esi
0x4D1A52: call    TESFile_GetRecordType
0x4D1A57: cmp     eax, 36h ; '6'
0x4D1A5A: jz      short loc_4D1A7F
0x4D1A5C: push    1
0x4D1A5E: mov     ecx, esi
0x4D1A60: call    TESFile_NextRecordEx; NextForm?
0x4D1A65: mov     ecx, esi
0x4D1A67: call    TESFile_GetRecordType
0x4D1A6C: push    eax
0x4D1A6D: call    sub_4CA010
0x4D1A72: add     esp, 4
0x4D1A75: test    al, al
0x4D1A77: jnz     short loc_4D1A50
0x4D1A79: mov     al, bl
0x4D1A7B: pop     ebx
0x4D1A7C: pop     edi
0x4D1A7D: pop     esi
0x4D1A7E: retn
0x4D1A7F: mov     bl, 1
0x4D1A81: mov     al, bl
0x4D1A83: pop     ebx
0x4D1A84: pop     edi
0x4D1A85: pop     esi
0x4D1A86: retn
