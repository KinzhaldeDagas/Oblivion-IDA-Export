0x8046C0: push    esi
0x8046C1: mov     esi, ecx
0x8046C3: mov     eax, [esi+0A4h]
0x8046C9: cmp     eax, 4; switch 5 cases
0x8046CC: ja      def_8046D2
0x8046D2: jmp     ds:jpt_8046D2[eax*4]; switch jump
0x8046D9: mov     eax, [esi+90h]; jumptable 008046D2 case 0
0x8046DF: mov     ecx, [esi+70h]; this
0x8046E2: push    eax; a2
0x8046E3: call    sub_7AECB0
0x8046E8: mov     ecx, [esi+98h]
0x8046EE: push    ecx; a2
0x8046EF: mov     ecx, [esi+70h]; this
0x8046F2: call    sub_7AEC60
0x8046F7: pop     esi
0x8046F8: retn
0x8046F9: mov     edx, [esi+90h]; jumptable 008046D2 case 1
0x8046FF: mov     ecx, [esi+70h]; this
0x804702: push    edx; a2
0x804703: call    sub_7AECB0
0x804708: mov     eax, [esi+98h]
0x80470E: mov     ecx, [esi+70h]; this
0x804711: push    eax; a2
0x804712: call    sub_7AEC60
0x804717: pop     esi
0x804718: retn
0x804719: mov     ecx, [esi+94h]; jumptable 008046D2 case 2
0x80471F: push    ecx; a2
0x804720: mov     ecx, [esi+70h]; this
0x804723: call    sub_7AECB0
0x804728: mov     edx, [esi+9Ch]
0x80472E: mov     ecx, [esi+70h]; this
0x804731: push    edx; a2
0x804732: call    sub_7AEC60
0x804737: pop     esi
0x804738: retn
0x804739: mov     eax, [esi+90h]; jumptable 008046D2 case 3
0x80473F: mov     ecx, [esi+70h]; this
0x804742: push    eax; a2
0x804743: call    sub_7AECB0
0x804748: mov     ecx, [esi+0A0h]
0x80474E: push    ecx; a2
0x80474F: mov     ecx, [esi+70h]; this
0x804752: call    sub_7AEC60
0x804757: pop     esi
0x804758: retn
0x804759: mov     edx, [esi+90h]; jumptable 008046D2 case 4
0x80475F: mov     ecx, [esi+70h]; this
0x804762: push    edx; a2
0x804763: call    sub_7AECB0
0x804768: mov     eax, [esi+0A0h]
0x80476E: mov     ecx, [esi+70h]; this
0x804771: push    eax; a2
0x804772: call    sub_7AEC60
