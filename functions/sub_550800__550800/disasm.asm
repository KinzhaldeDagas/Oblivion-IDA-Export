0x550800: mov     eax, [esp+arg_0]
0x550804: push    esi
0x550805: push    eax
0x550806: call    sub_550790
0x55080B: mov     esi, eax
0x55080D: add     esp, 4
0x550810: test    esi, esi
0x550812: jz      short loc_550835
0x550814: mov     edx, [esi]
0x550816: mov     eax, [edx+54h]
0x550819: mov     ecx, esi
0x55081B: call    eax
0x55081D: test    eax, eax
0x55081F: jz      short loc_550835
0x550821: mov     edx, [esi]
0x550823: mov     eax, [edx+54h]
0x550826: mov     ecx, esi
0x550828: call    eax
0x55082A: mov     ecx, eax
0x55082C: call    sub_550480
0x550831: test    eax, eax
0x550833: jnz     short loc_550839
0x550835: xor     eax, eax
0x550837: pop     esi
0x550838: retn
0x550839: push    eax
0x55083A: push    offset unk_B39DA0
0x55083F: call    NiRTTI_Cast
0x550844: add     esp, 8
0x550847: pop     esi
0x550848: retn
