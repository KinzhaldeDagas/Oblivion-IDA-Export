0x504341: push    eax; a1
0x504342: mov     [esp+4+arg_24], 0
0x50434A: mov     [esp+4+arg_28], 0
0x504352: call    Script_ExtractArgs
0x504357: add     esp, 24h
0x50435A: test    al, al
0x50435C: jnz     short loc_504364
0x50435E: pop     edi
0x50435F: pop     ebx
0x504360: add     esp, 8
0x504363: retn
0x504364: mov     ecx, [esp-20h+arg_24]
0x504368: add     ecx, 0FFFFFFFEh; switch 5 cases
0x50436B: cmp     ecx, 4
0x50436E: mov     eax, 10000h
0x504373: ja      short def_504375
0x504375: jmp     ds:jpt_504375[ecx*4]; switch jump
0x50437C: mov     eax, 20000h; jumptable 00504375 case 2
0x504381: jmp     short def_504375
0x504383: mov     eax, 40000h; jumptable 00504375 case 3
0x504388: jmp     short def_504375
0x50438A: mov     eax, 80000h; jumptable 00504375 case 4
0x50438F: jmp     short def_504375
0x504391: mov     eax, 100000h; jumptable 00504375 case 5
0x504396: jmp     short def_504375
0x504398: mov     eax, 200000h; jumptable 00504375 case 6
