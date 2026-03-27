0x77BD90: push    ebx
0x77BD91: xor     ebx, ebx
0x77BD93: cmp     ds:0B4288Ch, bl
0x77BD99: jz      loc_77BE50
0x77BD9F: mov     eax, ds:0B428C8h
0x77BDA4: cmp     eax, ebx
0x77BDA6: mov     ds:0B4288Ch, bl
0x77BDAC: jz      short loc_77BDC9
0x77BDAE: push    eax
0x77BDAF: call    sub_77EE20
0x77BDB4: mov     ecx, ds:0B428C8h
0x77BDBA: add     esp, 4
0x77BDBD: cmp     ecx, ebx
0x77BDBF: jz      short loc_77BDC9
0x77BDC1: mov     eax, [ecx]
0x77BDC3: mov     edx, [eax]
0x77BDC5: push    1
0x77BDC7: call    edx
0x77BDC9: mov     eax, ds:0B428D0h
0x77BDCE: cmp     eax, ebx
0x77BDD0: mov     ds:0B428C8h, ebx
0x77BDD6: jz      short loc_77BDF3
0x77BDD8: push    eax
0x77BDD9: call    sub_77EE20
0x77BDDE: mov     ecx, ds:0B428D0h
0x77BDE4: add     esp, 4
0x77BDE7: cmp     ecx, ebx
0x77BDE9: jz      short loc_77BDF3
0x77BDEB: mov     eax, [ecx]
0x77BDED: mov     edx, [eax]
0x77BDEF: push    1
0x77BDF1: call    edx
0x77BDF3: mov     eax, ds:0B428CCh
0x77BDF8: cmp     eax, ebx
0x77BDFA: mov     ds:0B428D0h, ebx
0x77BE00: jz      short loc_77BE1D
0x77BE02: push    eax
0x77BE03: call    sub_77EE20
0x77BE08: mov     ecx, ds:0B428CCh
0x77BE0E: add     esp, 4
0x77BE11: cmp     ecx, ebx
0x77BE13: jz      short loc_77BE1D
0x77BE15: mov     eax, [ecx]
0x77BE17: mov     edx, [eax]
0x77BE19: push    1
0x77BE1B: call    edx
0x77BE1D: push    ebx
0x77BE1E: mov     ds:0B428CCh, ebx
0x77BE24: call    sub_77F7E0
0x77BE29: add     esp, 4
0x77BE2C: call    sub_77EEB0
0x77BE31: call    sub_77C270
0x77BE36: call    sub_76F900
0x77BE3B: call    sub_7797C0
0x77BE40: call    sub_772B20
0x77BE45: call    sub_773580
0x77BE4A: pop     ebx
0x77BE4B: jmp     loc_7645C0
0x77BE50: pop     ebx
0x77BE51: retn
