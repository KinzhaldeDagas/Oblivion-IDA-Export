0x8BB8F0: push    edi
0x8BB8F1: mov     edi, [esp+4+arg_4]
0x8BB8F5: test    edi, edi
0x8BB8F7: jz      loc_8BB989
0x8BB8FD: push    ebp
0x8BB8FE: mov     ebp, [esp+8+lpOutputString]
0x8BB902: mov     al, [edi+ebp-1]
0x8BB906: test    al, al
0x8BB908: jnz     short loc_8BB926
0x8BB90A: push    ebp; lpOutputString
0x8BB90B: call    dword ptr ds:0A28144h
0x8BB911: push    ebp
0x8BB912: push    offset aS; "%s"
0x8BB917: call    _printf
0x8BB91C: add     esp, 8
0x8BB91F: pop     ebp
0x8BB920: mov     eax, edi
0x8BB922: pop     edi
0x8BB923: retn    8
0x8BB926: push    ebx
0x8BB927: push    esi
0x8BB928: lea     ebx, [edi+1]
0x8BB92B: push    14h
0x8BB92D: push    ebx
0x8BB92E: call    sub_4BFC80
0x8BB933: mov     ecx, eax
0x8BB935: call    sub_8A7560
0x8BB93A: test    edi, edi
0x8BB93C: mov     esi, eax
0x8BB93E: jle     short loc_8BB94D
0x8BB940: sub     ebp, esi
0x8BB942: mov     ecx, edi
0x8BB944: mov     dl, [eax+ebp]
0x8BB947: mov     [eax], dl
0x8BB949: inc     eax
0x8BB94A: dec     ecx
0x8BB94B: jnz     short loc_8BB944
0x8BB94D: push    esi; lpOutputString
0x8BB94E: mov     byte ptr [esi+edi], 0
0x8BB952: call    dword ptr ds:0A28144h
0x8BB958: push    esi
0x8BB959: push    offset aS; "%s"
0x8BB95E: call    _printf
0x8BB963: add     esp, 8
0x8BB966: test    ebx, ebx
0x8BB968: js      short loc_8BB980
0x8BB96A: push    14h
0x8BB96C: and     ebx, 3FFFFFFFh
0x8BB972: push    ebx
0x8BB973: push    esi
0x8BB974: call    sub_4BFC80
0x8BB979: mov     ecx, eax
0x8BB97B: call    sub_8A75D0
0x8BB980: pop     esi
0x8BB981: pop     ebx
0x8BB982: pop     ebp
0x8BB983: mov     eax, edi
0x8BB985: pop     edi
0x8BB986: retn    8
0x8BB989: mov     eax, edi
0x8BB98B: pop     edi
0x8BB98C: retn    8
