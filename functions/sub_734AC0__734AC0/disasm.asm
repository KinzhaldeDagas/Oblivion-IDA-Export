0x734AC0: push    esi
0x734AC1: mov     esi, [esp+4+arg_0]
0x734AC5: push    offset a_tga; ".tga"
0x734ACA: push    esi
0x734ACB: call    j_CRT_strcmp
0x734AD0: add     esp, 8
0x734AD3: test    eax, eax
0x734AD5: jz      short loc_734AEF
0x734AD7: push    offset a_targa; ".targa"
0x734ADC: push    esi
0x734ADD: call    j_CRT_strcmp
0x734AE2: add     esp, 8
0x734AE5: test    eax, eax
0x734AE7: jz      short loc_734AEF
0x734AE9: xor     al, al
0x734AEB: pop     esi
0x734AEC: retn    4
0x734AEF: mov     al, 1
0x734AF1: pop     esi
0x734AF2: retn    4
