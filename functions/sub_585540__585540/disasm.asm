0x585540: push    0FFFFFFFFh
0x585542: push    offset SEH_8C62B0
0x585547: mov     eax, large fs:0
0x58554D: push    eax
0x58554E: push    ecx
0x58554F: push    esi
0x585550: mov     eax, ds:0B30AACh
0x585555: xor     eax, esp
0x585557: push    eax
0x585558: lea     eax, [esp+18h+var_C]
0x58555C: mov     large fs:0, eax
0x585562: mov     esi, ecx
0x585564: push    1; Size
0x585566: call    FormHeapAlloc
0x58556B: add     esp, 4
0x58556E: mov     [esp+18h+var_10], eax
0x585572: test    eax, eax
0x585574: mov     [esp+18h+var_4], 0
0x58557C: jz      short loc_585598
0x58557E: mov     ecx, eax
0x585580: call    sub_4FCCE0
0x585585: mov     [esi], eax
0x585587: mov     ecx, [esp+18h+var_C]
0x58558B: mov     large fs:0, ecx
0x585592: pop     ecx
0x585593: pop     esi
0x585594: add     esp, 10h
0x585597: retn
0x585598: xor     eax, eax
0x58559A: mov     [esi], eax
0x58559C: mov     ecx, [esp+18h+var_C]
0x5855A0: mov     large fs:0, ecx
0x5855A7: pop     ecx
0x5855A8: pop     esi
0x5855A9: add     esp, 10h
0x5855AC: retn
