0x71DDF0: mov     eax, [esp+arg_4]
0x71DDF4: test    eax, eax
0x71DDF6: push    edi
0x71DDF7: mov     edi, [esp+4+arg_18]
0x71DDFB: jbe     short loc_71DE77
0x71DDFD: mov     edx, [esp+4+arg_0]
0x71DE01: push    ebx
0x71DE02: push    ebp
0x71DE03: push    esi
0x71DE04: mov     esi, [esp+10h+arg_C]
0x71DE08: mov     [esp+10h+arg_18], eax
0x71DE0C: mov     eax, [esp+10h+arg_1C]
0x71DE10: test    edx, edx
0x71DE12: jbe     short loc_71DE6D
0x71DE14: mov     ebp, edx
0x71DE16: movzx   ebx, word ptr [edi]
0x71DE19: and     ebx, [eax]
0x71DE1B: movzx   ecx, byte ptr [eax+10h]
0x71DE1F: shr     ebx, cl
0x71DE21: movzx   ecx, byte ptr [eax+14h]
0x71DE25: shl     bl, cl
0x71DE27: add     esi, 1
0x71DE2A: add     esi, 1
0x71DE2D: add     esi, 1
0x71DE30: mov     [esi-3], bl
0x71DE33: movzx   ebx, word ptr [edi]
0x71DE36: and     ebx, [eax+4]
0x71DE39: movzx   ecx, byte ptr [eax+11h]
0x71DE3D: shr     ebx, cl
0x71DE3F: movzx   ecx, byte ptr [eax+15h]
0x71DE43: shl     bl, cl
0x71DE45: add     esi, 1
0x71DE48: add     edi, 2
0x71DE4B: mov     [esi-3], bl
0x71DE4E: movzx   ebx, word ptr [edi-2]
0x71DE52: and     ebx, [eax+8]
0x71DE55: movzx   ecx, byte ptr [eax+12h]
0x71DE59: shr     ebx, cl
0x71DE5B: movzx   ecx, byte ptr [eax+16h]
0x71DE5F: shl     bl, cl
0x71DE61: sub     ebp, 1
0x71DE64: mov     [esi-2], bl
0x71DE67: mov     byte ptr [esi-1], 0FFh
0x71DE6B: jnz     short loc_71DE16
0x71DE6D: sub     [esp+10h+arg_18], 1
0x71DE72: jnz     short loc_71DE10
0x71DE74: pop     esi
0x71DE75: pop     ebp
0x71DE76: pop     ebx
0x71DE77: pop     edi
0x71DE78: retn
