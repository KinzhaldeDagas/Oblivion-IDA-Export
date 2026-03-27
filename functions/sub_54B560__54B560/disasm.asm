0x54B560: push    esi
0x54B561: mov     esi, [esp+4+arg_0]
0x54B565: test    esi, esi
0x54B567: jz      short loc_54B58C
0x54B569: lea     esp, [esp+0]
0x54B570: mov     eax, [esi+8]
0x54B573: push    offset aBip01Nonaccum; "Bip01 NonAccum"
0x54B578: push    eax; Str1
0x54B579: call    __strcmp
0x54B57E: add     esp, 8
0x54B581: test    eax, eax
0x54B583: jz      short loc_54B58C
0x54B585: mov     esi, [esi+1Ch]
0x54B588: test    esi, esi
0x54B58A: jnz     short loc_54B570
0x54B58C: mov     eax, esi
0x54B58E: pop     esi
0x54B58F: retn    4
