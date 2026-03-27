0x980844: cmp     byte ptr ds:0BA9B7Ch, 0
0x98084B: jnz     short loc_98085F
0x98084D: push    offset _tidy_global
0x980852: mov     byte ptr ds:0BA9B7Ch, 1
0x980859: call    sub_980D85
0x98085E: pop     ecx
0x98085F: mov     eax, [esp+arg_0]
0x980863: mov     ds:0BA9B58h, eax
0x980868: retn
