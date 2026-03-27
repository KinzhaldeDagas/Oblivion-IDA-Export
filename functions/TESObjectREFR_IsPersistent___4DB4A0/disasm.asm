0x4DB4A0: push    esi
0x4DB4A1: push    edi
0x4DB4A2: push    0FFFFFFFFh; a2
0x4DB4A4: mov     esi, ecx
0x4DB4A6: call    TESForm_GetOverrideFile
0x4DB4AB: mov     edi, eax
0x4DB4AD: test    edi, edi
0x4DB4AF: jz      short loc_4DB507
0x4DB4B1: mov     eax, ds:0BA9DE4h
0x4DB4B6: mov     ecx, large fs:2Ch
0x4DB4BD: mov     edx, [ecx+eax*4]
0x4DB4C0: cmp     byte ptr [edx+184h], 0
0x4DB4C7: jnz     short loc_4DB507
0x4DB4C9: mov     ecx, ds:0B33B00h
0x4DB4CF: call    sub_45A500
0x4DB4D4: test    al, al
0x4DB4D6: jz      short loc_4DB4E8
0x4DB4D8: mov     eax, ds:0B33B00h
0x4DB4DD: mov     ecx, [eax+18h]
0x4DB4E0: shr     ecx, 4
0x4DB4E3: test    cl, 1
0x4DB4E6: jz      short loc_4DB507
0x4DB4E8: mov     edx, ds:0B33A98h
0x4DB4EE: cmp     byte ptr [edx+0CD4h], 0
0x4DB4F5: jnz     short loc_4DB507
0x4DB4F7: mov     ecx, edi
0x4DB4F9: call    TESFile_GetIsMaster
0x4DB4FE: test    al, al
0x4DB500: jnz     short loc_4DB507
0x4DB502: pop     edi
0x4DB503: mov     al, 1
0x4DB505: pop     esi
0x4DB506: retn
0x4DB507: mov     eax, [esi+8]
0x4DB50A: shr     eax, 0Ah
0x4DB50D: pop     edi
0x4DB50E: and     al, 1
0x4DB510: pop     esi
0x4DB511: retn
