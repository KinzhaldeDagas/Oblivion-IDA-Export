0x745D90: mov     ecx, [esp+arg_4]
0x745D94: test    ecx, ecx
0x745D96: jnz     short loc_745D9B
0x745D98: xor     eax, eax
0x745D9A: retn
0x745D9B: mov     edx, [esp+arg_8]
0x745D9F: mov     eax, [esp+arg_0]
0x745DA3: jmp     loc_745AF0
0x745AF0: push    esi
0x745AF1: mov     esi, edx
0x745AF3: test    esi, esi
0x745AF5: not     eax
0x745AF7: jz      short loc_745B22
0x745AF9: lea     esp, [esp+0]
0x745B00: test    cl, 3
0x745B03: jz      short loc_745B22
0x745B05: movzx   edx, byte ptr [ecx]
0x745B08: xor     edx, eax
0x745B0A: and     edx, 0FFh
0x745B10: shr     eax, 8
0x745B13: xor     eax, ds:0A82988h[edx*4]
0x745B1A: add     ecx, 1
0x745B1D: sub     esi, 1
0x745B20: jnz     short loc_745B00
0x745B22: cmp     esi, 20h ; ' '
0x745B25: push    ebx
0x745B26: push    edi
0x745B27: jb      loc_745D0C
0x745B2D: mov     edi, esi
0x745B2F: shr     edi, 5
0x745B32: xor     eax, [ecx]
0x745B34: add     ecx, 4
0x745B37: mov     edx, eax
0x745B39: shr     edx, 10h
0x745B3C: movzx   ebx, ah
0x745B3F: and     edx, 0FFh
0x745B45: mov     edx, ds:0A82D88h[edx*4]
0x745B4C: xor     edx, ds:0A83188h[ebx*4]
0x745B53: mov     ebx, eax
0x745B55: and     eax, 0FFh
0x745B5A: shr     ebx, 18h
0x745B5D: xor     edx, ds:0A82988h[ebx*4]
0x745B64: add     ecx, 4
0x745B67: xor     edx, ds:0A83588h[eax*4]
0x745B6E: add     ecx, 4
0x745B71: xor     edx, [ecx-8]
0x745B74: add     ecx, 4
0x745B77: mov     eax, edx
0x745B79: shr     eax, 10h
0x745B7C: and     eax, 0FFh
0x745B81: mov     eax, ds:0A82D88h[eax*4]
0x745B88: movzx   ebx, dh
0x745B8B: xor     eax, ds:0A83188h[ebx*4]
0x745B92: mov     ebx, edx
0x745B94: and     edx, 0FFh
0x745B9A: shr     ebx, 18h
0x745B9D: xor     eax, ds:0A82988h[ebx*4]
0x745BA4: add     ecx, 4
0x745BA7: xor     eax, ds:0A83588h[edx*4]
0x745BAE: add     ecx, 4
0x745BB1: xor     eax, [ecx-10h]
0x745BB4: mov     edx, eax
0x745BB6: shr     edx, 10h
0x745BB9: movzx   ebx, ah
0x745BBC: and     edx, 0FFh
0x745BC2: mov     edx, ds:0A82D88h[edx*4]
0x745BC9: xor     edx, ds:0A83188h[ebx*4]
0x745BD0: mov     ebx, eax
0x745BD2: and     eax, 0FFh
0x745BD7: shr     ebx, 18h
0x745BDA: xor     edx, ds:0A82988h[ebx*4]
0x745BE1: xor     edx, ds:0A83588h[eax*4]
0x745BE8: xor     edx, [ecx-0Ch]
0x745BEB: mov     eax, edx
0x745BED: shr     eax, 10h
0x745BF0: and     eax, 0FFh
0x745BF5: mov     eax, ds:0A82D88h[eax*4]
0x745BFC: movzx   ebx, dh
0x745BFF: xor     eax, ds:0A83188h[ebx*4]
0x745C06: mov     ebx, edx
0x745C08: and     edx, 0FFh
0x745C0E: shr     ebx, 18h
0x745C11: xor     eax, ds:0A82988h[ebx*4]
0x745C18: xor     eax, ds:0A83588h[edx*4]
0x745C1F: xor     eax, [ecx-8]
0x745C22: mov     edx, eax
0x745C24: shr     edx, 10h
0x745C27: movzx   ebx, ah
0x745C2A: and     edx, 0FFh
0x745C30: mov     edx, ds:0A82D88h[edx*4]
0x745C37: xor     edx, ds:0A83188h[ebx*4]
0x745C3E: mov     ebx, eax
0x745C40: and     eax, 0FFh
0x745C45: shr     ebx, 18h
0x745C48: xor     edx, ds:0A82988h[ebx*4]
0x745C4F: xor     edx, ds:0A83588h[eax*4]
0x745C56: xor     edx, [ecx-4]
0x745C59: mov     eax, edx
0x745C5B: shr     eax, 10h
0x745C5E: and     eax, 0FFh
0x745C63: mov     eax, ds:0A82D88h[eax*4]
0x745C6A: movzx   ebx, dh
0x745C6D: xor     eax, ds:0A83188h[ebx*4]
0x745C74: mov     ebx, edx
0x745C76: shr     ebx, 18h
0x745C79: xor     eax, ds:0A82988h[ebx*4]
0x745C80: and     edx, 0FFh
0x745C86: xor     eax, ds:0A83588h[edx*4]
0x745C8D: xor     eax, [ecx]
0x745C8F: add     ecx, 4
0x745C92: mov     edx, eax
0x745C94: shr     edx, 10h
0x745C97: movzx   ebx, ah
0x745C9A: and     edx, 0FFh
0x745CA0: mov     edx, ds:0A82D88h[edx*4]
0x745CA7: xor     edx, ds:0A83188h[ebx*4]
0x745CAE: mov     ebx, eax
0x745CB0: and     eax, 0FFh
0x745CB5: shr     ebx, 18h
0x745CB8: xor     edx, ds:0A82988h[ebx*4]
0x745CBF: add     ecx, 4
0x745CC2: xor     edx, ds:0A83588h[eax*4]
0x745CC9: sub     esi, 20h ; ' '
0x745CCC: xor     edx, [ecx-4]
0x745CCF: mov     eax, edx
0x745CD1: shr     eax, 10h
0x745CD4: and     eax, 0FFh
0x745CD9: mov     eax, ds:0A82D88h[eax*4]
0x745CE0: movzx   ebx, dh
0x745CE3: xor     eax, ds:0A83188h[ebx*4]
0x745CEA: mov     ebx, edx
0x745CEC: shr     ebx, 18h
0x745CEF: xor     eax, ds:0A82988h[ebx*4]
0x745CF6: and     edx, 0FFh
0x745CFC: xor     eax, ds:0A83588h[edx*4]
0x745D03: sub     edi, 1
0x745D06: jnz     loc_745B32
0x745D0C: cmp     esi, 4
0x745D0F: jb      short loc_745D59
0x745D11: mov     edx, esi
0x745D13: shr     edx, 2
0x745D16: xor     eax, [ecx]
0x745D18: add     ecx, 4
0x745D1B: mov     edi, eax
0x745D1D: shr     edi, 10h
0x745D20: and     edi, 0FFh
0x745D26: mov     edi, ds:0A82D88h[edi*4]
0x745D2D: movzx   ebx, ah
0x745D30: xor     edi, ds:0A83188h[ebx*4]
0x745D37: mov     ebx, eax
0x745D39: shr     ebx, 18h
0x745D3C: xor     edi, ds:0A82988h[ebx*4]
0x745D43: and     eax, 0FFh
0x745D48: xor     edi, ds:0A83588h[eax*4]
0x745D4F: sub     esi, 4
0x745D52: sub     edx, 1
0x745D55: mov     eax, edi
0x745D57: jnz     short loc_745D16
0x745D59: test    esi, esi
0x745D5B: pop     edi
0x745D5C: pop     ebx
0x745D5D: jz      short loc_745D7D
0x745D5F: nop
0x745D60: movzx   edx, byte ptr [ecx]
0x745D63: xor     edx, eax
0x745D65: and     edx, 0FFh
0x745D6B: shr     eax, 8
0x745D6E: xor     eax, ds:0A82988h[edx*4]
0x745D75: add     ecx, 1
0x745D78: sub     esi, 1
0x745D7B: jnz     short loc_745D60
0x745D7D: not     eax
0x745D7F: pop     esi
0x745D80: retn
