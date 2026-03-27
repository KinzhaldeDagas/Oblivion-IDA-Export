0x71E110: mov     eax, [esp+arg_4]
0x71E114: test    eax, eax
0x71E116: push    edi
0x71E117: mov     edi, [esp+4+arg_18]
0x71E11B: jbe     short loc_71E194
0x71E11D: mov     edx, [esp+4+arg_0]
0x71E121: push    ebx
0x71E122: push    ebp
0x71E123: push    esi
0x71E124: mov     esi, [esp+10h+arg_C]
0x71E128: mov     [esp+10h+arg_18], eax
0x71E12C: mov     eax, [esp+10h+arg_1C]
0x71E130: test    edx, edx
0x71E132: jbe     short loc_71E18A
0x71E134: mov     ebp, edx
0x71E136: mov     ebx, [edi]
0x71E138: and     ebx, [eax]
0x71E13A: movzx   ecx, byte ptr [eax+10h]
0x71E13E: shr     ebx, cl
0x71E140: movzx   ecx, byte ptr [eax+14h]
0x71E144: shl     bl, cl
0x71E146: add     esi, 1
0x71E149: add     esi, 1
0x71E14C: add     esi, 1
0x71E14F: mov     [esi-3], bl
0x71E152: mov     ebx, [eax+4]
0x71E155: and     ebx, [edi]
0x71E157: movzx   ecx, byte ptr [eax+11h]
0x71E15B: shr     ebx, cl
0x71E15D: movzx   ecx, byte ptr [eax+15h]
0x71E161: shl     bl, cl
0x71E163: add     esi, 1
0x71E166: add     edi, 4
0x71E169: mov     [esi-3], bl
0x71E16C: mov     ebx, [eax+8]
0x71E16F: and     ebx, [edi-4]
0x71E172: movzx   ecx, byte ptr [eax+12h]
0x71E176: shr     ebx, cl
0x71E178: movzx   ecx, byte ptr [eax+16h]
0x71E17C: shl     bl, cl
0x71E17E: sub     ebp, 1
0x71E181: mov     [esi-2], bl
0x71E184: mov     byte ptr [esi-1], 0FFh
0x71E188: jnz     short loc_71E136
0x71E18A: sub     [esp+10h+arg_18], 1
0x71E18F: jnz     short loc_71E130
0x71E191: pop     esi
0x71E192: pop     ebp
0x71E193: pop     ebx
0x71E194: pop     edi
0x71E195: retn
