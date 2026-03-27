0x5005F0: push    esi
0x5005F1: mov     esi, [esp+4+arg_8]
0x5005F5: test    esi, esi
0x5005F7: push    edi
0x5005F8: jz      short loc_500640
0x5005FA: mov     edi, [esp+8+arg_C]
0x5005FE: test    edi, edi
0x500600: jz      short loc_500640
0x500602: mov     eax, [esi]
0x500604: mov     edx, [eax+170h]
0x50060A: push    ebx
0x50060B: mov     ebx, [edi]
0x50060D: push    0
0x50060F: push    1
0x500611: push    0
0x500613: push    0
0x500615: push    0
0x500617: push    1
0x500619: push    0
0x50061B: push    1
0x50061D: push    0
0x50061F: mov     ecx, esi
0x500621: call    edx
0x500623: push    eax
0x500624: mov     eax, [ebx+100h]
0x50062A: mov     ecx, edi
0x50062C: call    eax
0x50062E: mov     ecx, ds:0B333C4h
0x500634: push    esi
0x500635: call    sub_665260
0x50063A: pop     ebx
0x50063B: pop     edi
0x50063C: xor     al, al
0x50063E: pop     esi
0x50063F: retn
0x500640: pop     edi
0x500641: mov     al, 1
0x500643: pop     esi
0x500644: retn
