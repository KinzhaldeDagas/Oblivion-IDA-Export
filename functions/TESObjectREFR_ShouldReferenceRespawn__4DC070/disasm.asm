0x4DC070: push    ebx
0x4DC071: push    esi
0x4DC072: mov     esi, ecx
0x4DC074: mov     eax, [esi]
0x4DC076: mov     edx, [eax+170h]
0x4DC07C: xor     bl, bl
0x4DC07E: call    edx
0x4DC080: test    eax, eax
0x4DC082: jz      short loc_4DC0A8
0x4DC084: mov     eax, [esi]
0x4DC086: mov     edx, [eax+170h]
0x4DC08C: mov     ecx, esi
0x4DC08E: call    edx
0x4DC090: movzx   eax, byte ptr [eax+4]
0x4DC094: add     eax, 0FFFFFFDDh
0x4DC097: cmp     eax, 2
0x4DC09A: ja      short loc_4DC0A8
0x4DC09C: lea     ecx, [esi+44h]
0x4DC09F: call    ExtraDataList__TrespassPackakePresent
0x4DC0A4: test    al, al
0x4DC0A6: jnz     short loc_4DC0FB
0x4DC0A8: mov     eax, [esi]
0x4DC0AA: mov     edx, [eax+170h]
0x4DC0B0: mov     ecx, esi
0x4DC0B2: call    edx
0x4DC0B4: movzx   eax, byte ptr [eax+4]
0x4DC0B8: cmp     eax, 17h
0x4DC0BB: jz      short loc_4DC0E0
0x4DC0BD: add     eax, 0FFFFFFDDh
0x4DC0C0: cmp     eax, 1
0x4DC0C3: ja      short loc_4DC0FB
0x4DC0C5: mov     eax, [esi]
0x4DC0C7: mov     edx, [eax+170h]
0x4DC0CD: mov     ecx, esi
0x4DC0CF: call    edx
0x4DC0D1: test    eax, eax
0x4DC0D3: jz      short loc_4DC0FB
0x4DC0D5: mov     eax, [eax+28h]
0x4DC0D8: shr     eax, 3
0x4DC0DB: pop     esi
0x4DC0DC: and     al, 1
0x4DC0DE: pop     ebx
0x4DC0DF: retn
0x4DC0E0: mov     eax, [esi]
0x4DC0E2: mov     edx, [eax+170h]
0x4DC0E8: mov     ecx, esi
0x4DC0EA: call    edx
0x4DC0EC: test    eax, eax
0x4DC0EE: jz      short loc_4DC0FB
0x4DC0F0: movzx   eax, byte ptr [eax+78h]
0x4DC0F4: shr     eax, 1
0x4DC0F6: pop     esi
0x4DC0F7: and     al, 1
0x4DC0F9: pop     ebx
0x4DC0FA: retn
0x4DC0FB: pop     esi
0x4DC0FC: mov     al, bl
0x4DC0FE: pop     ebx
0x4DC0FF: retn
