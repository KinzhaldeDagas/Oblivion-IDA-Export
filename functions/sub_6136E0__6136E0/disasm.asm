0x6136E0: mov     eax, ds:0B33B00h
0x6136E5: mov     ecx, [eax+18h]
0x6136E8: shr     ecx, 0Bh
0x6136EB: test    cl, 1
0x6136EE: jnz     locret_61377C
0x6136F4: mov     eax, ds:0B3B90Ch
0x6136F9: test    eax, eax
0x6136FB: jle     short locret_61377C
0x6136FD: sub     eax, 1
0x613700: test    eax, eax
0x613702: mov     ds:0B3B90Ch, eax
0x613707: jg      short locret_61377C
0x613709: mov     edx, ds:0B33398h
0x61370F: mov     dword ptr ds:0B3B90Ch, 0
0x613719: cmp     byte ptr [edx], 0
0x61371C: jnz     short loc_613730
0x61371E: mov     ecx, ds:0B333C4h
0x613724: mov     eax, [ecx]
0x613726: mov     edx, [eax+394h]
0x61372C: push    0
0x61372E: call    edx
0x613730: mov     eax, ds:0B33398h
0x613735: push    esi
0x613736: mov     esi, [eax+24h]
0x613739: test    esi, esi
0x61373B: jz      short loc_61377B
0x61373D: mov     ecx, ds:0B333C4h
0x613743: mov     edx, [ecx]
0x613745: mov     eax, [edx+1F8h]
0x61374B: call    eax
0x61374D: test    al, al
0x61374F: jnz     short loc_61377B
0x613751: mov     ecx, ds:0B333C4h
0x613757: mov     edx, [ecx]
0x613759: mov     eax, [edx+198h]
0x61375F: push    0
0x613761: call    eax
0x613763: test    al, al
0x613765: jnz     short loc_61377B
0x613767: fld1
0x613769: push    ecx
0x61376A: fstp    [esp+8+var_8]
0x61376D: mov     ecx, esi
0x61376F: push    0
0x613771: push    0FFFFh
0x613776: call    sub_6ACD10
0x61377B: pop     esi
0x61377C: retn
