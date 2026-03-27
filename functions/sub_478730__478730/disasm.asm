0x478730: push    esi
0x478731: push    154h
0x478736: mov     esi, ecx
0x478738: push    0
0x47873A: push    esi
0x47873B: call    __memset
0x478740: push    100h
0x478745: push    0
0x478747: push    offset dword_B33C80
0x47874C: call    __memset
0x478751: mov     eax, [esp+1Ch+arg_0]
0x478755: mov     [esi+150h], eax
0x47875B: mov     eax, [esp+1Ch+arg_4]
0x47875F: add     esp, 18h
0x478762: test    eax, eax
0x478764: jz      short loc_47876E
0x478766: push    eax
0x478767: mov     ecx, esi
0x478769: call    sub_478070
0x47876E: mov     eax, esi
0x478770: pop     esi
0x478771: retn    8
