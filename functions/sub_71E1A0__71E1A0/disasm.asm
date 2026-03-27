0x71E1A0: mov     eax, [esp+arg_4]
0x71E1A4: test    eax, eax
0x71E1A6: push    esi
0x71E1A7: mov     esi, [esp+4+arg_C]
0x71E1AB: jbe     loc_71E23A
0x71E1B1: mov     edx, [esp+4+arg_18]
0x71E1B5: push    ebx
0x71E1B6: push    ebp
0x71E1B7: push    edi
0x71E1B8: mov     edi, [esp+10h+arg_0]
0x71E1BC: mov     [esp+10h+arg_4], eax
0x71E1C0: mov     eax, [esp+10h+arg_14]
0x71E1C4: test    edi, edi
0x71E1C6: jbe     short loc_71E230
0x71E1C8: jmp     short loc_71E1D0
0x71E1CA: align 10h
0x71E1D0: mov     cl, [edx]
0x71E1D2: movzx   ebx, byte ptr [edx+1]
0x71E1D6: movzx   ebp, cl
0x71E1D9: movzx   ecx, byte ptr [eax+14h]
0x71E1DD: shr     ebp, cl
0x71E1DF: movzx   ecx, byte ptr [eax+10h]
0x71E1E3: add     edx, 1
0x71E1E6: mov     byte ptr [esp+10h+arg_C], bl
0x71E1EA: mov     bl, [edx+1]
0x71E1ED: shl     ebp, cl
0x71E1EF: movzx   ecx, byte ptr [eax+17h]
0x71E1F3: and     ebp, [eax]
0x71E1F5: add     edx, 1
0x71E1F8: movzx   ebx, bl
0x71E1FB: shr     ebx, cl
0x71E1FD: movzx   ecx, byte ptr [eax+13h]
0x71E201: shl     ebx, cl
0x71E203: movzx   ecx, byte ptr [eax+15h]
0x71E207: and     ebx, [eax+0Ch]
0x71E20A: add     edx, 2
0x71E20D: or      ebp, ebx
0x71E20F: movzx   ebx, byte ptr [esp+10h+arg_C]
0x71E214: shr     ebx, cl
0x71E216: movzx   ecx, byte ptr [eax+11h]
0x71E21A: shl     ebx, cl
0x71E21C: add     esi, 4
0x71E21F: and     ebx, [eax+4]
0x71E222: or      ebp, ebx
0x71E224: sub     edi, 1
0x71E227: mov     [esi-4], ebp
0x71E22A: jnz     short loc_71E1D0
0x71E22C: mov     edi, [esp+10h+arg_0]
0x71E230: sub     [esp+10h+arg_4], 1
0x71E235: jnz     short loc_71E1C4
0x71E237: pop     edi
0x71E238: pop     ebp
0x71E239: pop     ebx
0x71E23A: pop     esi
0x71E23B: retn
