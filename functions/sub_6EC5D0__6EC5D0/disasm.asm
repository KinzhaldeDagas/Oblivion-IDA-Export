0x6EC5D0: push    esi
0x6EC5D1: mov     esi, [esp+4+arg_0]
0x6EC5D5: test    esi, esi
0x6EC5D7: push    edi
0x6EC5D8: mov     edi, ecx
0x6EC5DA: jz      short loc_6EC608
0x6EC5DC: mov     eax, [esi]
0x6EC5DE: mov     edx, [eax+4]
0x6EC5E1: mov     ecx, esi
0x6EC5E3: call    edx
0x6EC5E5: test    eax, eax
0x6EC5E7: jz      short loc_6EC5FE
0x6EC5E9: lea     esp, [esp+0]
0x6EC5F0: cmp     eax, offset dword_B3E7E8
0x6EC5F5: jz      short loc_6EC62A
0x6EC5F7: mov     eax, [eax+4]
0x6EC5FA: test    eax, eax
0x6EC5FC: jnz     short loc_6EC5F0
0x6EC5FE: xor     al, al
0x6EC600: neg     al
0x6EC602: sbb     eax, eax
0x6EC604: and     eax, esi
0x6EC606: mov     esi, eax
0x6EC608: mov     eax, [edi]
0x6EC60A: mov     edx, [eax+0A8h]
0x6EC610: lea     ecx, [esp+8+arg_0]
0x6EC614: push    ecx
0x6EC615: mov     ecx, edi
0x6EC617: call    edx
0x6EC619: mov     eax, [esp+8+arg_0]
0x6EC61D: push    eax
0x6EC61E: mov     ecx, esi
0x6EC620: call    sub_6E80F0
0x6EC625: pop     edi
0x6EC626: pop     esi
0x6EC627: retn    8
0x6EC62A: mov     al, 1
0x6EC62C: jmp     short loc_6EC600
