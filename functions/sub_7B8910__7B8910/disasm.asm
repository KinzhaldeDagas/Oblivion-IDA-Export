0x7B8910: push    esi
0x7B8911: mov     esi, [esp+4+arg_0]
0x7B8915: test    esi, esi
0x7B8917: jz      short loc_7B8935
0x7B8919: mov     ecx, ds:0B42EB4h
0x7B891F: xor     eax, eax
0x7B8921: test    ecx, ecx
0x7B8923: jz      short loc_7B892B
0x7B8925: push    esi
0x7B8926: call    ecx ; dword_B42EB4
0x7B8928: add     esp, 4
0x7B892B: push    eax
0x7B892C: push    esi
0x7B892D: call    sub_7B7F00
0x7B8932: add     esp, 8
0x7B8935: pop     esi
0x7B8936: retn
