0x494150: mov     eax, [esp+arg_0]
0x494154: push    esi
0x494155: mov     esi, [eax]
0x494157: test    esi, esi
0x494159: jz      short loc_494193
0x49415B: mov     ecx, ds:0B33A04h
0x494161: test    ecx, ecx
0x494163: jz      short loc_494193
0x494165: mov     edx, [ecx]
0x494167: mov     eax, [edx+4]
0x49416A: push    0FFFFFFFFh
0x49416C: push    0
0x49416E: push    0
0x494170: push    esi
0x494171: call    eax
0x494173: test    eax, eax
0x494175: jz      short loc_494193
0x494177: push    10h
0x494179: push    2800h
0x49417E: push    0
0x494180: push    esi
0x494181: call    sub_431130
0x494186: add     esp, 10h
0x494189: pop     esi
0x49418A: mov     [esp+arg_0], eax
0x49418E: jmp     sub_493F60
0x494193: xor     eax, eax
0x494195: pop     esi
0x494196: retn
