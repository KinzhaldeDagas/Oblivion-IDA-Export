0x71DFE0: mov     eax, [esp+arg_4]
0x71DFE4: test    eax, eax
0x71DFE6: push    edi
0x71DFE7: mov     edi, [esp+4+arg_18]
0x71DFEB: jbe     short loc_71E05D
0x71DFED: mov     edx, [esp+4+arg_0]
0x71DFF1: push    ebx
0x71DFF2: push    ebp
0x71DFF3: push    esi
0x71DFF4: mov     esi, [esp+10h+arg_C]
0x71DFF8: mov     [esp+10h+arg_18], eax
0x71DFFC: mov     eax, [esp+10h+arg_1C]
0x71E000: test    edx, edx
0x71E002: jbe     short loc_71E053
0x71E004: mov     ebp, edx
0x71E006: mov     ebx, [edi]
0x71E008: and     ebx, [eax]
0x71E00A: movzx   ecx, byte ptr [eax+10h]
0x71E00E: shr     ebx, cl
0x71E010: movzx   ecx, byte ptr [eax+14h]
0x71E014: shl     bl, cl
0x71E016: add     esi, 1
0x71E019: add     esi, 1
0x71E01C: add     esi, 1
0x71E01F: mov     [esi-3], bl
0x71E022: mov     ebx, [eax+4]
0x71E025: and     ebx, [edi]
0x71E027: movzx   ecx, byte ptr [eax+11h]
0x71E02B: shr     ebx, cl
0x71E02D: movzx   ecx, byte ptr [eax+15h]
0x71E031: shl     bl, cl
0x71E033: add     edi, 4
0x71E036: mov     [esi-2], bl
0x71E039: mov     ebx, [eax+8]
0x71E03C: and     ebx, [edi-4]
0x71E03F: movzx   ecx, byte ptr [eax+12h]
0x71E043: shr     ebx, cl
0x71E045: movzx   ecx, byte ptr [eax+16h]
0x71E049: shl     bl, cl
0x71E04B: sub     ebp, 1
0x71E04E: mov     [esi-1], bl
0x71E051: jnz     short loc_71E006
0x71E053: sub     [esp+10h+arg_18], 1
0x71E058: jnz     short loc_71E000
0x71E05A: pop     esi
0x71E05B: pop     ebp
0x71E05C: pop     ebx
0x71E05D: pop     edi
0x71E05E: retn
