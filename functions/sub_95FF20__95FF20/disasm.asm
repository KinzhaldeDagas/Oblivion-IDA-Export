0x95FF20: push    ebx
0x95FF21: mov     ebx, [esp+4+arg_0]
0x95FF25: push    esi
0x95FF26: push    edi
0x95FF27: push    ebx
0x95FF28: mov     edi, ecx
0x95FF2A: call    nullsub_returnvVoid_1arg
0x95FF2F: lea     eax, [esp+0Ch+arg_0]
0x95FF33: push    eax
0x95FF34: push    ebx
0x95FF35: call    sub_6BE9D0
0x95FF3A: xor     esi, esi
0x95FF3C: add     esp, 8
0x95FF3F: cmp     [esp+0Ch+arg_0], esi
0x95FF43: jbe     short loc_95FF5F
0x95FF45: push    ebx
0x95FF46: call    sub_95DB10
0x95FF4B: add     esp, 4
0x95FF4E: push    eax
0x95FF4F: mov     ecx, edi
0x95FF51: call    sub_95FEE0
0x95FF56: add     esi, 1
0x95FF59: cmp     esi, [esp+0Ch+arg_0]
0x95FF5D: jb      short loc_95FF45
0x95FF5F: pop     edi
0x95FF60: pop     esi
0x95FF61: pop     ebx
0x95FF62: retn    4
