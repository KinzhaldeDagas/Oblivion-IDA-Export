0x71D4A0: mov     eax, [esp+arg_10]
0x71D4A4: mov     ecx, [eax+14h]
0x71D4A7: mov     eax, [esp+arg_14]
0x71D4AB: cmp     dword ptr [eax+4], 0FF00h
0x71D4B2: jnz     locret_71D57D
0x71D4B8: mov     eax, [eax]
0x71D4BA: cmp     eax, 0FFh
0x71D4BF: push    ebx
0x71D4C0: push    ebp
0x71D4C1: push    esi
0x71D4C2: push    edi
0x71D4C3: jnz     short loc_71D51E
0x71D4C5: mov     eax, [esp+10h+arg_4]
0x71D4C9: test    eax, eax
0x71D4CB: jbe     loc_71D579
0x71D4D1: mov     ebp, [esp+10h+arg_0]
0x71D4D5: mov     esi, [esp+10h+arg_18]
0x71D4D9: mov     edx, eax
0x71D4DB: mov     eax, [esp+10h+arg_C]
0x71D4DF: nop
0x71D4E0: test    ebp, ebp
0x71D4E2: jbe     short loc_71D514
0x71D4E4: mov     edi, ebp
0x71D4E6: movzx   ebx, byte ptr [esi]
0x71D4E9: movzx   ebx, byte ptr [ecx+ebx*4]
0x71D4ED: mov     [eax], bl
0x71D4EF: movzx   ebx, byte ptr [esi]
0x71D4F2: movzx   ebx, byte ptr [ecx+ebx*4+1]
0x71D4F7: add     eax, 1
0x71D4FA: mov     [eax], bl
0x71D4FC: movzx   ebx, byte ptr [esi]
0x71D4FF: movzx   ebx, byte ptr [ecx+ebx*4+2]
0x71D504: add     eax, 1
0x71D507: mov     [eax], bl
0x71D509: add     eax, 1
0x71D50C: add     esi, 1
0x71D50F: sub     edi, 1
0x71D512: jnz     short loc_71D4E6
0x71D514: sub     edx, 1
0x71D517: jnz     short loc_71D4E0
0x71D519: pop     edi
0x71D51A: pop     esi
0x71D51B: pop     ebp
0x71D51C: pop     ebx
0x71D51D: retn
0x71D51E: cmp     eax, 0FF0000h
0x71D523: jnz     short loc_71D579
0x71D525: mov     eax, [esp+10h+arg_4]
0x71D529: test    eax, eax
0x71D52B: jbe     short loc_71D579
0x71D52D: mov     ebp, [esp+10h+arg_0]
0x71D531: mov     esi, [esp+10h+arg_18]
0x71D535: mov     edx, eax
0x71D537: mov     eax, [esp+10h+arg_C]
0x71D53B: jmp     short loc_71D540
0x71D53D: align 10h
0x71D540: test    ebp, ebp
0x71D542: jbe     short loc_71D574
0x71D544: mov     edi, ebp
0x71D546: movzx   ebx, byte ptr [esi]
0x71D549: movzx   ebx, byte ptr [ecx+ebx*4+2]
0x71D54E: mov     [eax], bl
0x71D550: movzx   ebx, byte ptr [esi]
0x71D553: movzx   ebx, byte ptr [ecx+ebx*4+1]
0x71D558: add     eax, 1
0x71D55B: mov     [eax], bl
0x71D55D: movzx   ebx, byte ptr [esi]
0x71D560: movzx   ebx, byte ptr [ecx+ebx*4]
0x71D564: add     eax, 1
0x71D567: mov     [eax], bl
0x71D569: add     eax, 1
0x71D56C: add     esi, 1
0x71D56F: sub     edi, 1
0x71D572: jnz     short loc_71D546
0x71D574: sub     edx, 1
0x71D577: jnz     short loc_71D540
0x71D579: pop     edi
0x71D57A: pop     esi
0x71D57B: pop     ebp
0x71D57C: pop     ebx
0x71D57D: retn
