0x99946F: inc     dword_BA9E14
0x999475: push    1000h
0x99947A: call    unknown_libname_72
0x99947F: test    eax, eax
0x999481: pop     ecx
0x999482: mov     ecx, [esp+arg_0]
0x999486: mov     [ecx+8], eax
0x999489: jz      short loc_999498
0x99948B: or      dword ptr [ecx+0Ch], 8
0x99948F: mov     dword ptr [ecx+18h], 1000h
0x999496: jmp     short loc_9994A9
0x999498: or      dword ptr [ecx+0Ch], 4
0x99949C: lea     eax, [ecx+14h]
0x99949F: mov     [ecx+8], eax
0x9994A2: mov     dword ptr [ecx+18h], 2
0x9994A9: mov     eax, [ecx+8]
0x9994AC: and     dword ptr [ecx+4], 0
0x9994B0: mov     [ecx], eax
0x9994B2: retn
