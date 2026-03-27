0x675FC0: push    ebp
0x675FC1: add     ecx, 68h ; 'h'; this
0x675FC4: call    sub_7616D0
0x675FC9: mov     ebp, eax
0x675FCB: test    ebp, ebp
0x675FCD: jz      loc_6760C8
0x675FD3: push    ebx
0x675FD4: push    esi
0x675FD5: push    edi
0x675FD6: jmp     short loc_675FE0
0x675FD8: align 10h
0x675FE0: mov     ecx, [ebp+0]; this
0x675FE3: test    ecx, ecx
0x675FE5: jz      loc_6760C5
0x675FEB: xor     esi, esi
0x675FED: call    Actor_IsNPC
0x675FF2: test    al, al
0x675FF4: jz      short loc_675FF9
0x675FF6: mov     esi, [ebp+0]
0x675FF9: xor     ebx, ebx
0x675FFB: xor     edi, edi
0x675FFD: test    esi, esi
0x675FFF: jz      loc_6760BA
0x676005: test    ebx, ebx
0x676007: jnz     short loc_676045
0x676009: mov     ecx, [esi+58h]
0x67600C: test    ecx, ecx
0x67600E: jz      short loc_676045
0x676010: mov     eax, [ecx]
0x676012: mov     edx, [eax+184h]
0x676018: call    edx
0x67601A: test    eax, eax
0x67601C: jz      short loc_676045
0x67601E: mov     eax, [eax+1Ch]
0x676021: shr     eax, 17h
0x676024: test    al, 1
0x676026: jz      short loc_676045
0x676028: mov     ecx, [esi+58h]
0x67602B: mov     edx, [ecx]
0x67602D: mov     eax, [edx+3A0h]
0x676033: push    ebx
0x676034: push    esi
0x676035: call    eax
0x676037: mov     ecx, [esi+58h]
0x67603A: mov     edx, [ecx]
0x67603C: mov     eax, [edx+178h]
0x676042: push    ebx
0x676043: call    eax
0x676045: mov     edx, [esi]
0x676047: mov     eax, [edx+380h]
0x67604D: mov     ecx, esi
0x67604F: call    eax
0x676051: mov     ebx, eax
0x676053: test    ebx, ebx
0x676055: jz      short loc_67605F
0x676057: push    ebx
0x676058: mov     ecx, esi
0x67605A: call    sub_602050
0x67605F: test    edi, edi
0x676061: jz      short loc_6760BA
0x676063: mov     ecx, [edi]; this
0x676065: test    ecx, ecx
0x676067: jz      short loc_6760BA
0x676069: xor     esi, esi
0x67606B: call    Actor_IsNPC
0x676070: test    al, al
0x676072: jz      short loc_676076
0x676074: mov     esi, [edi]
0x676076: test    esi, esi
0x676078: mov     edi, [edi+4]
0x67607B: jz      short loc_6760BA
0x67607D: lea     ecx, [ecx+0]
0x676080: mov     ecx, [esi+58h]
0x676083: test    ecx, ecx
0x676085: jz      short loc_676096
0x676087: mov     edx, [ecx]
0x676089: mov     eax, [edx+8]
0x67608C: call    eax
0x67608E: test    eax, eax
0x676090: jz      loc_676005
0x676096: test    edi, edi
0x676098: jz      short loc_6760AD
0x67609A: mov     ecx, [edi]; this
0x67609C: test    ecx, ecx
0x67609E: jz      short loc_6760AD
0x6760A0: call    Actor_IsNPC
0x6760A5: test    al, al
0x6760A7: jz      short loc_6760AD
0x6760A9: mov     esi, [edi]
0x6760AB: jmp     short loc_6760AF
0x6760AD: xor     esi, esi
0x6760AF: test    edi, edi
0x6760B1: jz      short loc_6760B6
0x6760B3: mov     edi, [edi+4]
0x6760B6: test    esi, esi
0x6760B8: jnz     short loc_676080
0x6760BA: mov     ebp, [ebp+4]
0x6760BD: test    ebp, ebp
0x6760BF: jnz     loc_675FE0
0x6760C5: pop     edi
0x6760C6: pop     esi
0x6760C7: pop     ebx
0x6760C8: pop     ebp
0x6760C9: retn
