0x9428A0: mov     eax, [esp+arg_0]
0x9428A4: sub     esp, 0Ch
0x9428A7: push    ebx
0x9428A8: push    esi
0x9428A9: push    edi
0x9428AA: mov     ebx, ecx
0x9428AC: push    eax
0x9428AD: lea     ecx, [esp+1Ch+var_C]
0x9428B1: call    sub_8BBF50
0x9428B6: mov     edi, [esp+18h+arg_8]
0x9428BA: mov     ecx, edi
0x9428BC: xor     esi, esi
0x9428BE: call    sub_90D240
0x9428C3: test    eax, eax
0x9428C5: jle     short loc_9428FA
0x9428C7: push    ebp
0x9428C8: lea     ebp, [ebx+8]
0x9428CB: jmp     short loc_9428D0
0x9428CD: align 10h
0x9428D0: mov     edx, [esp+1Ch+arg_4]
0x9428D4: push    ebx; int
0x9428D5: lea     ecx, [esp+20h+var_C]
0x9428D9: push    ecx; int
0x9428DA: push    edx; int
0x9428DB: push    esi
0x9428DC: mov     ecx, edi
0x9428DE: call    sub_90D260
0x9428E3: push    eax; int
0x9428E4: push    ebp; Args
0x9428E5: call    sub_942170
0x9428EA: add     esp, 14h
0x9428ED: mov     ecx, edi
0x9428EF: inc     esi
0x9428F0: call    sub_90D240
0x9428F5: cmp     esi, eax
0x9428F7: jl      short loc_9428D0
0x9428F9: pop     ebp
0x9428FA: lea     eax, [esp+18h+arg_0]
0x9428FE: push    eax
0x9428FF: lea     ecx, [esp+1Ch+var_C]
0x942903: call    sub_918060
0x942908: mov     dl, [eax]
0x94290A: xor     ecx, ecx
0x94290C: test    dl, dl
0x94290E: setz    cl
0x942911: mov     esi, ecx
0x942913: lea     ecx, [esp+18h+var_C]
0x942917: call    sub_8BC000
0x94291C: pop     edi
0x94291D: mov     eax, esi
0x94291F: pop     esi
0x942920: pop     ebx
0x942921: add     esp, 0Ch
0x942924: retn    10h
