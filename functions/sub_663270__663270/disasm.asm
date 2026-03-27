0x663270: mov     byte ptr ds:0B3BB07h, 0
0x663277: call    sub_578D70
0x66327C: cmp     al, 1
0x66327E: jnz     short loc_66328B
0x663280: mov     ecx, ds:0B33B00h
0x663286: jmp     loc_466D50
0x66328B: cmp     al, 2
0x66328D: jnz     short locret_663298
0x66328F: mov     eax, ds:0B33398h
0x663294: mov     byte ptr [eax+1], 1
0x663298: retn
