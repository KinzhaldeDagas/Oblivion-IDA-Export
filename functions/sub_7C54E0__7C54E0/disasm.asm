0x7C54E0: push    0FFFFFFFFh
0x7C54E2: push    offset SEH_6ACAB0
0x7C54E7: mov     eax, large fs:0
0x7C54ED: push    eax
0x7C54EE: push    ebx
0x7C54EF: push    esi
0x7C54F0: push    edi
0x7C54F1: mov     eax, ds:0B30AACh
0x7C54F6: xor     eax, esp
0x7C54F8: push    eax
0x7C54F9: lea     eax, [esp+1Ch+var_C]
0x7C54FD: mov     large fs:0, eax
0x7C5503: mov     esi, ecx
0x7C5505: mov     eax, [esi+34h]
0x7C5508: test    eax, eax
0x7C550A: jnz     loc_7C55DF
0x7C5510: mov     eax, [esi+88h]
0x7C5516: cmp     eax, 1
0x7C5519: mov     edi, 17Dh
0x7C551E: jnz     short loc_7C5525
0x7C5520: mov     edi, 19Ch
0x7C5525: cmp     eax, 4
0x7C5528: mov     ebx, [esp+1Ch+arg_0]
0x7C552C: jz      short loc_7C5576
0x7C552E: push    10h; Size
0x7C5530: call    FormHeapAlloc
0x7C5535: add     esp, 4
0x7C5538: mov     [esp+1Ch+arg_0], eax
0x7C553C: test    eax, eax
0x7C553E: mov     [esp+1Ch+var_4], 0
0x7C5546: jz      short loc_7C555B
0x7C5548: push    0
0x7C554A: push    0
0x7C554C: push    1
0x7C554E: push    edi
0x7C554F: push    ebx
0x7C5550: push    eax
0x7C5551: call    sub_7E2370
0x7C5556: add     esp, 18h
0x7C5559: jmp     short loc_7C555D
0x7C555B: xor     eax, eax
0x7C555D: mov     [esp+1Ch+arg_0], eax
0x7C5561: lea     eax, [esp+1Ch+arg_0]
0x7C5565: push    eax
0x7C5566: lea     ecx, [esi+28h]
0x7C5569: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7C5571: call    sub_6AA320
0x7C5576: cmp     byte ptr ds:0B43070h, 0
0x7C557D: jnz     short loc_7C55DF
0x7C557F: mov     eax, [esi+88h]
0x7C5585: test    eax, eax
0x7C5587: jz      short loc_7C5593
0x7C5589: cmp     eax, 4
0x7C558C: jz      short loc_7C5593
0x7C558E: cmp     eax, 3
0x7C5591: jnz     short loc_7C55DF
0x7C5593: push    10h; Size
0x7C5595: call    FormHeapAlloc
0x7C559A: add     esp, 4
0x7C559D: mov     [esp+1Ch+arg_0], eax
0x7C55A1: test    eax, eax
0x7C55A3: mov     [esp+1Ch+var_4], 1
0x7C55AB: jz      short loc_7C55C4
0x7C55AD: push    0
0x7C55AF: push    0
0x7C55B1: push    1
0x7C55B3: push    19Dh
0x7C55B8: push    ebx
0x7C55B9: push    eax
0x7C55BA: call    sub_7E2370
0x7C55BF: add     esp, 18h
0x7C55C2: jmp     short loc_7C55C6
0x7C55C4: xor     eax, eax
0x7C55C6: lea     ecx, [esp+1Ch+arg_0]
0x7C55CA: push    ecx
0x7C55CB: lea     ecx, [esi+28h]
0x7C55CE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7C55D6: mov     [esp+20h+arg_0], eax
0x7C55DA: call    sub_6AA320
0x7C55DF: lea     eax, [esi+28h]
0x7C55E2: mov     ecx, [esp+1Ch+var_C]
0x7C55E6: mov     large fs:0, ecx
0x7C55ED: pop     ecx
0x7C55EE: pop     edi
0x7C55EF: pop     esi
0x7C55F0: pop     ebx
0x7C55F1: add     esp, 0Ch
0x7C55F4: retn    10h
