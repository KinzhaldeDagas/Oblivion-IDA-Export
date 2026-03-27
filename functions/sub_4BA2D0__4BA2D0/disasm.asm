0x4BA2D0: mov     eax, [esp+arg_0]
0x4BA2D4: mov     edx, [esp+arg_8]
0x4BA2D8: push    esi
0x4BA2D9: mov     esi, ecx
0x4BA2DB: mov     ecx, [esp+4+arg_4]
0x4BA2DF: mov     [esi], eax
0x4BA2E1: mov     eax, [esp+4+arg_C]
0x4BA2E5: mov     [esi+4], ecx
0x4BA2E8: mov     [esi+0Ch], eax
0x4BA2EB: mov     eax, [esp+4+arg_10]
0x4BA2EF: mov     [esi+8], edx
0x4BA2F2: xor     ecx, ecx
0x4BA2F4: mov     [esi+10h], eax
0x4BA2F7: mov     edx, 0Ch
0x4BA2FC: mul     edx
0x4BA2FE: seto    cl
0x4BA301: neg     ecx
0x4BA303: or      ecx, eax
0x4BA305: push    ecx; Size
0x4BA306: call    FormHeapAlloc
0x4BA30B: mov     ecx, [esi+10h]
0x4BA30E: mov     edx, [esp+8+Src]
0x4BA312: lea     ecx, [ecx+ecx*2]
0x4BA315: add     ecx, ecx
0x4BA317: add     ecx, ecx
0x4BA319: push    ecx; Size
0x4BA31A: push    edx; Src
0x4BA31B: push    eax; Dst
0x4BA31C: mov     [esi+14h], eax
0x4BA31F: call    _memcpy
0x4BA324: mov     eax, [esi+10h]
0x4BA327: xor     ecx, ecx
0x4BA329: mov     edx, 4
0x4BA32E: mul     edx
0x4BA330: seto    cl
0x4BA333: neg     ecx
0x4BA335: or      ecx, eax
0x4BA337: push    ecx; Size
0x4BA338: call    FormHeapAlloc
0x4BA33D: mov     ecx, [esi+10h]
0x4BA340: mov     edx, [esp+18h+arg_18]
0x4BA344: add     ecx, ecx
0x4BA346: add     ecx, ecx
0x4BA348: push    ecx; Size
0x4BA349: push    edx; Src
0x4BA34A: push    eax; Dst
0x4BA34B: mov     [esi+18h], eax
0x4BA34E: call    _memcpy
0x4BA353: add     esp, 20h
0x4BA356: mov     eax, esi
0x4BA358: pop     esi
0x4BA359: retn    1Ch
