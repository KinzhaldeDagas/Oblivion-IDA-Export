0x790420: mov     eax, [esp+arg_4]
0x790424: mov     edx, [esp+Src]
0x790428: sub     eax, edx
0x79042A: push    esi
0x79042B: sar     eax, 2
0x79042E: test    eax, eax
0x790430: push    edi; MaxCount
0x790431: mov     edi, [esp+8+Dst]
0x790435: lea     ecx, ds:0[eax*4]
0x79043C: lea     esi, [ecx+edi]
0x79043F: jle     short loc_79044D
0x790441: push    ecx; Src
0x790442: push    edx; Src
0x790443: push    ecx; DstSize
0x790444: push    edi; Dst
0x790445: call    _memmove_s
0x79044A: add     esp, 10h
0x79044D: pop     edi
0x79044E: mov     eax, esi
0x790450: pop     esi
0x790451: retn
