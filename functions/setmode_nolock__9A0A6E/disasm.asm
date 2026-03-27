0x9A0A6E: push    ebp
0x9A0A6F: mov     ebp, esp
0x9A0A71: mov     edx, [ebp+arg_0]
0x9A0A74: mov     eax, edx
0x9A0A76: sar     eax, 5
0x9A0A79: and     edx, 1Fh
0x9A0A7C: imul    edx, 28h ; '('
0x9A0A7F: push    ebx
0x9A0A80: mov     ebx, [ebp+arg_4]
0x9A0A83: push    esi
0x9A0A84: lea     esi, ds:0BAAAC0h[eax*4]
0x9A0A8B: mov     eax, [esi]
0x9A0A8D: lea     ecx, [eax+edx]
0x9A0A90: movzx   eax, byte ptr [ecx+4]
0x9A0A94: and     eax, 80h
0x9A0A99: mov     [ebp+arg_0], eax
0x9A0A9C: mov     al, [ecx+24h]
0x9A0A9F: add     al, al
0x9A0AA1: movsx   eax, al
0x9A0AA4: push    edi
0x9A0AA5: mov     edi, 4000h
0x9A0AAA: sar     eax, 1
0x9A0AAC: cmp     ebx, edi
0x9A0AAE: jz      short loc_9A0B00
0x9A0AB0: cmp     ebx, 8000h
0x9A0AB6: jz      short loc_9A0AFA
0x9A0AB8: cmp     ebx, 10000h
0x9A0ABE: jz      short loc_9A0AE6
0x9A0AC0: cmp     ebx, 20000h
0x9A0AC6: jz      short loc_9A0AE6
0x9A0AC8: cmp     ebx, 40000h
0x9A0ACE: jnz     short loc_9A0B0D
0x9A0AD0: or      byte ptr [ecx+4], 80h
0x9A0AD4: mov     ecx, [esi]
0x9A0AD6: lea     ecx, [ecx+edx+24h]
0x9A0ADA: mov     dl, [ecx]
0x9A0ADC: and     dl, 81h
0x9A0ADF: or      dl, 1
0x9A0AE2: mov     [ecx], dl
0x9A0AE4: jmp     short loc_9A0B0D
0x9A0AE6: or      byte ptr [ecx+4], 80h
0x9A0AEA: mov     ecx, [esi]
0x9A0AEC: lea     ecx, [ecx+edx+24h]
0x9A0AF0: mov     dl, [ecx]
0x9A0AF2: and     dl, 82h
0x9A0AF5: or      dl, 2
0x9A0AF8: jmp     short loc_9A0AE2
0x9A0AFA: and     byte ptr [ecx+4], 7Fh
0x9A0AFE: jmp     short loc_9A0B0D
0x9A0B00: or      byte ptr [ecx+4], 80h
0x9A0B04: mov     ecx, [esi]
0x9A0B06: lea     ecx, [ecx+edx+24h]
0x9A0B0A: and     byte ptr [ecx], 80h
0x9A0B0D: cmp     [ebp+arg_0], 0
0x9A0B11: jnz     short loc_9A0B1A
0x9A0B13: mov     eax, 8000h
0x9A0B18: jmp     short loc_9A0B25
0x9A0B1A: neg     eax
0x9A0B1C: sbb     eax, eax
0x9A0B1E: and     eax, 0C000h
0x9A0B23: add     eax, edi
0x9A0B25: pop     edi
0x9A0B26: pop     esi
0x9A0B27: pop     ebx
0x9A0B28: pop     ebp
0x9A0B29: retn
