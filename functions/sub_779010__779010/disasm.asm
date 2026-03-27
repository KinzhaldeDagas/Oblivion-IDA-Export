0x779010: push    esi
0x779011: call    sub_77C0F0
0x779016: mov     esi, eax
0x779018: test    esi, esi
0x77901A: jz      short loc_77902C
0x77901C: call    sub_738440
0x779021: mov     eax, [esi]
0x779023: mov     edx, [eax+6Ch]
0x779026: push    0
0x779028: mov     ecx, esi
0x77902A: call    edx
0x77902C: push    0
0x77902E: call    sub_75FB30
0x779033: push    0
0x779035: call    sub_772060
0x77903A: mov     dword ptr ds:0B42834h, 0
0x779044: call    sub_77EAF0
0x779049: push    0
0x77904B: call    sub_77EBB0
0x779050: push    0
0x779052: call    sub_77F7E0
0x779057: push    0
0x779059: call    sub_772940
0x77905E: add     esp, 14h
0x779061: xor     eax, eax
0x779063: pop     esi
0x779064: retn
